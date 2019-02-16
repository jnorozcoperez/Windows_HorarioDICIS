#include "stdafx.h"
#include "Nap.h"

Nap::Nap()
{
}

Nap::~Nap()
{
}

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

string Nap::Execute(string cmd)
{
	string fileText = Nap::Convert::ToString(Nap::GetCurrentPathWork()) + "\\cmdFile--aux.txt";
	system((cmd + " > \"" + fileText + "\"").c_str());
	std::ifstream file(fileText);
	return { istreambuf_iterator<char>(file), istreambuf_iterator<char>() };
}


wstring Nap::Execute(wstring cmd)
{
	return Nap::Convert::ToWstring(Nap::Execute(Nap::Convert::ToString(cmd)));
}

wstring Nap::GetCurrentPathWork()
{
	wchar_t buffer[MAX_PATH];
	GetModuleFileName(NULL, buffer, MAX_PATH);
	wstring::size_type pos = wstring(buffer).find_last_of(L"\\/");
	wstring path = wstring(buffer).substr(0, pos);
	return path;
}

char* Nap::OpenImage(wstring root, int &lenOutput)
{
	FILE *file;
	char *bufferAux;
	string path = "";
	lenOutput = 0;
	Sys::Convert::WstringToString(root, path);
	fopen_s(&file, path.c_str(), "rb");
	if (!file) {
		return nullptr;
	}
	fseek(file, 0, SEEK_END);
	size_t fileLen = ftell(file);
	fseek(file, 0, SEEK_SET);
	bufferAux = (char *)malloc(fileLen + 1);
	if (!bufferAux) {
		fclose(file);
		return nullptr;
	}
	fread(bufferAux, fileLen, 1, file);
	lenOutput = fileLen;
	return bufferAux;
}

//=============================================================
//					     EXCEL
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::ExcelFile::Open(wstring fileName) {
	Com::Boot boot;
	Excel::ApplicationX Application;
	Com::Object Range;
	vector<vector<wstring>> dataAux;
	try {
		Application.CreateInstance(L"Excel.Application", true);
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(10, *pbAux);
		//Abrir el archivo de excel
		Excel::WorkbookX book = Application.WorkbooksX.Open(fileName);
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(15, *pbAux);
		Excel::WorksheetX WorkSheets = Application.ActiveSheet;
		//Obtener cuantas filas y columnas están activas
		Excel::Range Cells = WorkSheets.get_Cells();
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(20, *pbAux);
		Excel::Range LastCell = Cells.SpecialCells(Excel::XlCellType::xlCellTypeLastCell);
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(25, *pbAux);
		long row = LastCell.Row;
		long cols = LastCell.Column;
		//Crear el rango del libro
		wstring cell = this->GetCols(cols) + to_wstring(row);
		_variant_t first_cell = L"A1";
		_variant_t last_cell = cell.c_str();
		//Seleccionar las celdas
		Excel::Range range = WorkSheets.get_Range(first_cell, last_cell);
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(30, *pbAux);
		range.Select();
		//Recorrer los valores y guardar en un vector de vectores
		long length = range.Count;
		int moduleStep = length / 50.0;
		vector<wstring> aux;
		wstring saux;
		if (length / 50.0 <= 1) moduleStep = 1;
		for (long i = 1, j = 0, k = 1; i <= length; i++, j++) {
			if (i%moduleStep == 0) Nap::Wintempla::ProgressBar::StepIt(*pbAux);
			_variant_t result = range.get_Item(k + j * cols);
			result.ChangeType(VT_BSTR);
			aux.push_back(result.bstrVal);
			if (i%row == 0) {
				dataAux.push_back(aux);
				j = -1;
				k++;
				aux.clear();
			}
		}
		//Cerrar el libro
		book.Close();
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(90, *pbAux);
	}
	catch (Com::Exception excep) {
		Application.Method(L"Quit");
		return NAP_EXCEL_ERROR_OPEN;
	}
	//Limpiar vector para eliminar datos inutiles
	this->CleanningData(dataAux);
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(93, *pbAux);
	//Convertimos a minúscula el texto
	Nap::Text::ToLower(dataAux);
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(96, *pbAux);
	//Vaciar datos a la variable local
	this->data = dataAux;
	//Se obtiene el horario de los datos en el excel
	GetHorario(this->data);
	return NAP_EXCEL_OK;
}

bool Nap::ExcelFile::SetProgressBar(Win::ProgressBar &pbAux) {
	this->isProgressBar = true;
	this->pbAux = &pbAux;
	return true;
}

wstring Nap::ExcelFile::GetXML() {
	return this->GetXML(L"list");
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

vector<vector<wstring>> Nap::ExcelFile::GetData()
{
	return this->data;
}

wstring Nap::ExcelFile::GetXML(wstring name) {
	if (this->data.empty()) return L"";
	wstring xmlString;
	if (this->data.empty()) return L"";
	Sys::Xml xml;
	this->listView.ExportToXml(false, xml);
	xml.name = name;
	xml.GetXmlText(xmlString);
	return xmlString;
}

bool Nap::ExcelFile::GetHorario(vector<vector<wstring>> &preHorario) {
	if (preHorario.empty()) return false;
	int positionToCut = -1, sizePreHorario = preHorario[0].size();
	wstring headers[] = { L"clave", L"áreadelauda", L"areadelauda", L"unidaddeaprendizaje", L"horas/sem", L"hrs/sem",
			L"requisitos", L"grupo", L"lun", L"lunes", L"mar", L"martes", L"mie", L"miércoles", L"mié", L"miercoles",
			L"jue", L"jueves", L"vie", L"viernes", L"sab", L"sabado", L"sáb", L"sábado", L"aula", L"salón", L"salon", L"profesor" };

	//Buúqueda de las cabeceras
	for (int i = 0; i < sizePreHorario; i++) {
		bool thereIsHeader;
		for (int j = 0; j < preHorario.size(); j++) {
			wstring aux = preHorario[j][0];
			Nap::Text::ReplaceAll(aux, L"\n", L"");
			Nap::Text::ReplaceAll(aux, L" ", L"");
			aux = Nap::Text::ToLower(aux);
			thereIsHeader = false;
			for (wstring header : headers) {
				if (header == aux) {
					thereIsHeader = true;
					break;
				}
			}
			if (thereIsHeader) break;
		}
		if (thereIsHeader) break;
		for (int j = 0; j < preHorario.size(); j++) {
			preHorario[j].erase(preHorario[j].begin());
		}

	}
	sizePreHorario = preHorario[0].size();
	//Análisis de las columnas
	for (int k = 0; k < preHorario.size(); k++) {
		wstring aux = preHorario[k][0];
		Nap::Text::ReplaceAll(aux, L"\n", L"");
		Nap::Text::ReplaceAll(aux, L" ", L"");
		aux = Nap::Text::ToLower(aux);
		bool thereIsHeader = false;
		for (wstring header : headers) {
			if (header == aux) {
				thereIsHeader = true;
				break;
			}
		}
		if (thereIsHeader) continue;
		int i;
		for (i = 0; i < preHorario.size(); i++) {
			wstring auxP = preHorario[i][0];
			Nap::Text::ReplaceAll(auxP, L"\n", L"");
			Nap::Text::ReplaceAll(auxP, L" ", L"");
			auxP = Nap::Text::ToLower(auxP);
			if (auxP == aux) break;
		}
		preHorario.erase(preHorario.begin() + i);
		k--;
	}
	//Quitar renglones con área de la uda vacía
	for (int i = 0; i < preHorario.size(); i++) {
		wstring aux = preHorario[i][0];
		Nap::Text::ReplaceAll(aux, L"\n", L"");
		Nap::Text::ReplaceAll(aux, L" ", L"");
		aux = Nap::Text::ToLower(aux);
		bool isIn = false;
		if (aux == L"áreadelauda" || aux == L"areadelauda" || aux == L"clave") {
			isIn = true;
			for (int j = i + 1; j < preHorario[i].size(); j++) {
				wstring auxX = preHorario[i][j];
				Nap::Text::ReplaceAll(auxX, L"\n", L"");
				Nap::Text::ReplaceAll(auxX, L" ", L"");
				if (auxX == L"") {
					for (int k = 0; k < preHorario.size(); k++) {
						preHorario[k].erase(preHorario[k].begin() + j);
					}
					j--;
				}
			}
		}
		if (isIn) break;
	}
	//Dejamos el texto con estilo de capitalización
	Nap::Text::Capitalize(preHorario);
	//Columna de la clave en mayúscula
	for (int i = 0; i < preHorario.size(); i++) {
		if (preHorario[i][0] == L"Clave") {
			Nap::Text::ToUpper(preHorario[i]);
			break;
		}
	}
	return true;
}

wstring Nap::ExcelFile::GetCols(long cols) {
	wstring cell;
	wstring abecedario = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (cols > 0) {
		cell += abecedario[cols % 26 - 1];
		cols /= 26;
	}
	reverse(cell.begin(), cell.end());
	return cell;
}

void Nap::ExcelFile::CleanningData(vector<vector<wstring>> &data) {
	if (data.empty()) return;
	size_t raws = data[0].size();
	for (size_t i = 0, k = 0; i < data.size(); i++) {
		for (size_t j = 0; j < raws; j++) {
			if (data[i][j] == L"") k++;
		}
		if (k == raws) {
			data.erase(data.begin() + i);
			i--;
		}
		k = 0;
	}
	for (size_t i = 0, k = 0; i < data[0].size(); i++) {
		for (size_t j = 0; j < data.size(); j++) {
			if (data[j][i] == L"") k++;
		}
		if (k == data.size()) {
			for (size_t j = 0; j < data.size(); j++) {
				data[j].erase(data[j].begin() + i);
			}
			i--;
		}
		k = 0;
	}
}

//=============================================================
//					     EmailSMTP
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Email::SMTP::SendFileGoogle(wstring path) {
	if (this->user.empty() || this->password.empty() || path.empty()) return false;
	this->path = path;
	try {
		if (Connect(L"smtp.gmail.com", 465) == false) {
			Disconnect();
			return false;
		}
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(10, *pbAux);
	}
	catch (wstring e) {
		Disconnect();
		return false;
	}
	//__________________________________________________MAIL FROM
	string protocolSMTP = "MAIL FROM: <" + Nap::Convert::ToString(this->user) + ">\r\n";
	if (this->VerifyProtocol(protocolSMTP, 250, L"EMAIL FROM") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(30, *pbAux);
	//____________________________________________________________ SendRCPTTo
	protocolSMTP = "RCPT TO: <" + Nap::Convert::ToString(this->user) + ">\r\n";
	if (this->VerifyProtocol(protocolSMTP, 250, L"RCPT TO") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(50, *pbAux);
	//____________________________________________________________ SendDATA
	protocolSMTP = "DATA\r\n";
	if (this->VerifyProtocol(protocolSMTP, 354, L"DATA") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(70, *pbAux);
	//____________________________________________________________ SendBody
	string body = GetBody(Nap::Convert::ToString(this->user), Nap::Convert::ToString(this->user), true);
	//____________________________________________________________ SendDATAEnd
	body += "\r\n.\r\n";
	if (this->VerifyProtocol(body, 250, L"DATA CONTENT") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(90, *pbAux);
	//____________________________________________________________ SendQuit
	protocolSMTP = "Quit\r\n";
	if (this->VerifyProtocol(protocolSMTP, 221, L"QUIT") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(100, *pbAux);
	//____________________________________________________________ Disconnect
	Disconnect();
	return true;
}

bool Nap::Email::SMTP::SendEmailGoogle(wstring path) {
	if (this->user.empty() || this->password.empty() || path.empty()) return false;
	this->path = path;
	try {
		if (Connect(L"smtp.gmail.com", 465) == false) {
			Disconnect();
			return false;
		}
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(10, *pbAux);
	}
	catch (wstring e) {
		Disconnect();
		return false;
	}
	//__________________________________________________MAIL FROM
	string protocolSMTP = "MAIL FROM: <" + Nap::Convert::ToString(this->user) + ">\r\n";
	if (this->VerifyProtocol(protocolSMTP, 250, L"EMAIL FROM") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(30, *pbAux);
	//____________________________________________________________ SendRCPTTo
	protocolSMTP = "RCPT TO: <" + Nap::Convert::ToString(this->user) + ">\r\n";
	if (this->VerifyProtocol(protocolSMTP, 250, L"RCPT TO") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(50, *pbAux);
	//____________________________________________________________ SendDATA
	protocolSMTP = "DATA\r\n";
	if (this->VerifyProtocol(protocolSMTP, 354, L"DATA") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(70, *pbAux);
	//____________________________________________________________ SendBody
	string body = GetBody(Nap::Convert::ToString(this->user), Nap::Convert::ToString(this->user), false);
	//____________________________________________________________ SendDATAEnd
	body += "\r\n.\r\n";
	if (this->VerifyProtocol(body, 250, L"DATA CONTENT") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(90, *pbAux);
	//____________________________________________________________ SendQuit
	protocolSMTP = "Quit\r\n";
	if (this->VerifyProtocol(protocolSMTP, 221, L"QUIT") == false) return false;
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(100, *pbAux);
	//____________________________________________________________ Disconnect
	Disconnect();
	return true;
}

bool Nap::Email::SMTP::SetProgressBar(Win::ProgressBar &pbAux) {
	this->isProgressBar = true;
	this->pbAux = &pbAux;
	return true;
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

bool Nap::Email::SMTP::Connect(wchar_t* servername, int port)
{
	const DWORD protocol = SP_PROT_TLS1;
	//______________________________________________________ Create Credentials
	SECURITY_STATUS status;
	status = this->ssp.CreateCredentials(protocol);
	if (status != SEC_E_OK) {
		throw this->ssp.GetErrorDescr(status);
		return false;
	}
	//______________________________________________________ Create socket and connect
	if (socket.Connect(servername, port) == SOCKET_ERROR) {
		throw this->socket.GetLastErrorDesc();
		return false;
	}
	//______________________________________________________ Handshake
	status = this->ssp.ClientHandshake(socket, servername);
	if (status != SEC_E_OK) {
		throw this->ssp.GetErrorDescr(status);
		return false;
	}
	//______________________________________________________ Get Certificate
	Sys::SecurityCertificate certificate;
	status = this->ssp.GetCertificate(certificate);
	if (status != SEC_E_OK) {
		throw this->ssp.GetErrorDescr(status);
		return false;
	}
	//______________________________________________________ Verify Certificate
	const int verify = certificate.Verify(servername, 0);
	if (verify != S_OK) {
		if (verify != S_FALSE) {
			throw certificate.GetErrorDesc(verify);
			return false;
		}
		Disconnect();
		return false;
	}
	//______________________________________________________ Receive 220
	string response;
	if (this->ssp.ReceiveCode(socket, response) != 220) {
		throw Nap::Convert::ToWstring(response);
		Disconnect();
		return false;
	}
	//______________________________________________________ Send HELO
	wstring wmyComputer;
	Sys::Information::getEnvironmentVariable(L"COMPUTERNAME", wmyComputer);
	string myComputer = Nap::Convert::ToString(wmyComputer);
	string protocolSMTP = "HELO " + myComputer + "\r\n";
	if (VerifyProtocol(protocolSMTP, 250, L"HELO") == false) { throw L"Error in HELO email construction"; return false; }
	//______________________________________________________ SendAUTH
	protocolSMTP = "AUTH LOGIN\r\n";
	if (VerifyProtocol(protocolSMTP, 334, L"AUTH") == false) { throw L"Error in AUTH email construction"; return false; }
	//______________________________________________________ SendUsername
	string base64 = Nap::Encrypting::Base64(Nap::Convert::ToString(this->user)) + "\r\n";
	if (VerifyProtocol(base64, 334, L"User or password") == false) return false;
	//______________________________________________________ SendPassword
	base64 = Nap::Encrypting::Base64(Nap::Convert::ToString(this->password)) + "\r\n";
	if (VerifyProtocol(base64, 235, L"User or password") == false) return false;
	return true;
}

bool Nap::Email::SMTP::Disconnect() {
	ssp.DisconnectFromServer(socket);
	socket.Disconnect();
	return true;
}

bool Nap::Email::SMTP::VerifyProtocol(string &protocolSMTP, int code, wstring messageError) {
	string response;
	if (ssp.Send(socket, protocolSMTP.c_str()) <= 0) {
		Disconnect();
		return false;
	}
	if (ssp.ReceiveCode(socket, response) != code) {
		throw Nap::Convert::ToWstring(response);
		Disconnect();
		return false;
	}
	return true;
}

bool Nap::Email::SMTP::PreparingDataAttached(string &body) {
	int lengthBody = body.length();
	if (lengthBody <= 0) return false;
	string contenedor;
	int j = 0, i = 0;
	while (j < lengthBody) {
		contenedor = "";
		for (i = 0; i < 3000; i++) {
			if (j + i > lengthBody - 1)
				break;
			contenedor += body[i + j];
		}
		if (SendAttachmentFile(contenedor) == false)return false;
		j += i;
	}
	return true;
}

bool Nap::Email::SMTP::SendAttachmentFile(string &body) {
	if (ssp.Send(socket, body.c_str()) <= 0) {
		Disconnect();
		throw L"ERROR: BODY ATTACHMENT not working";
		return false;
	}
	return true;
}

//-------------------------------------------------------------
//					FUNCIONES PROTEGIDAS
//-------------------------------------------------------------

string Nap::Email::SMTP::GetBody(string &emailFrom, string &emailTo, bool isFile) {
	string body = "";
	//___________________ SendFrom
	body += "From: ""UploadUser"" <" + emailFrom + ">\r\n";
	//___________________ SendTo
	body += "To: ""SaveUser"" <" + emailTo + ">\r\n";
	//___________________ SendSubject
	string subject = Nap::Time::GetCurrent("%d-%m-%Y %H%M%S");
	body += "Subject: " + subject + "\r\n";
	//___________________ SendTimeHeader
	body += "Date: " + Nap::Time::GetCurrent("%a, %d %b %Y %T") + " -0600\r\n";
	//___________________ SendSender
	body += "Sender: " + emailFrom + "\r\n";
	//___________________ SendReplyTo
	body += "Reply-to: ""UploadUser"" <" + emailFrom + ">\r\n";
	//___________________ SendMime
	body += "MIME-Version: 1.0\r\n";
	//___________________ SendAttachFile
	if (isFile) {
		//___________________ SendMultipartMixed
		body += "Content-Type: multipart/mixed; boundary=""XYZ25678""\r\n";
		//___________________ SendBodyFrontier
		body += "--XYZ25678\r\n";
	}
	//___________________ SendBodyContentType
	body += "Content-Type: ";
	if (Nap::Verify::IsHTML(this->message) == false) {
		body += "text/plain; charset=UTF-8\r\n";
		//body += "text/plain; charset=""iso-8859-1""\r\nContent-Transfer-Encoding: 7bits\r\n";
	}
	else {
		body += "text/html; charset=UTF-8\r\n";
		//body += "text/html; charset=""iso-8859-1""\r\n";
	}
	//___________________ SendBlankLine Just Attach File
	if (isFile)
		body += "\r\n";
	//___________________ SendBody
	string message = Nap::Convert::ToString(this->message);
	body += message + "\r\n";
	if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(50, *pbAux);
	//___________________ SendAttachFile
	if (isFile) {
		//___________________ SendBlankLine
		body += "\r\n";
		//____________________SendAttachmentFrontier
		body += "--XYZ25678\r\n";
		//___________________ SendAttachmentContentType
		string nameFile = Nap::Convert::ToString(this->path);
		string extension;
		body += "Content-Type: ";
		if (nameFile.find(".gif") != std::string::npos) {
			body += "image/gif;\r\n";
			extension = ".gif";
		}
		else if (nameFile.find(".jpg") != std::string::npos) {
			body += "image/jpeg;";
			extension = ".jpg";
		}
		else if (nameFile.find(".png") != std::string::npos) {
			body += "image/png;";
			extension = ".png";
		}
		else if (nameFile.find(".txt") != std::string::npos) {
			body += "text/plain;";
			extension = ".txt";
		}
		else if (nameFile.find(".xml") != std::string::npos) {
			//body += "application/xhtml+xml;";
			body += "text/xml; charset=ISO-8859-1;";
			extension = ".xml";
		}
		else
			body += "application/octet-stream;";
		body += " name=\"" + subject + extension + "\"\r\n";
		//___________________ SendAttachmentContentDisposition
		body += "Content-Disposition: attachment; filename: " + subject + extension + "\r\n";
		//___________________ SendAttachmentTransferEncoding
		body += "Content-Transfer-Encoding: base64\r\n";
		//___________________ SendBlankLine
		body += "\r\n";
		//___________________ SendAttachment
		this->PreparingDataAttached(body);
		vector<string> fileBase64;
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(60, *pbAux);
		Nap::File::OpenL64(this->path, fileBase64, true);
		for (int i = 0; i < (int)fileBase64.size(); i++) {
			this->PreparingDataAttached(fileBase64[i]);
		}
		if (this->isProgressBar) Nap::Wintempla::ProgressBar::SetPosition(80, *pbAux);
		body = "\r\n";
		//___________________ SendBlankLine
		body += "\r\n";
		//____________________SendAttachmentEnd
		body += "--XYZ25678--\r\n";
	}
	return body;
}

//=============================================================
//					       FileDlg
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wchar_t Nap::FileDlg::m_szCustomFilter[WIN_MAX_FILTER];

Nap::FileDlg::FileDlg(void)
{
	SetFilter(L"Text Documents (*.txt)\0*.txt\0All Files (*.*)\0*.*\0\0", 0, L"txt");
	m_szFileName[0] = '\0';
	m_szPath[0] = '\0';
	m_szFilePath[0] = '\0';
	//
	memset(&openFileName, 0, sizeof(OPENFILENAME));
	openFileName.lStructSize = sizeof(OPENFILENAME);
	openFileName.hwndOwner = NULL;
	//
	openFileName.lpstrFilter = m_szFilter;
	//
	openFileName.lpstrCustomFilter = m_szCustomFilter;
	openFileName.nMaxCustFilter = WIN_MAX_FILTER - 1;
	//
	openFileName.lpstrFile = m_szPath;
	openFileName.nMaxFile = WIN_FILEDLG_MAXPATH;
	//
	openFileName.lpstrFileTitle = m_szFileName;
	openFileName.nMaxFileTitle = WIN_FILEDLG_MAXPATH;
	//
	openFileName.lpstrDefExt = m_szDefaultExt; //Default extension
	//
	openFileName.lpstrInitialDir = NULL;
	openFileName.Flags = OFN_OVERWRITEPROMPT | OFN_EXPLORER;
}

Nap::FileDlg::~FileDlg(void)
{
}

void Nap::FileDlg::Clear()
{
	m_szFileName[0] = '\0';
	m_szPath[0] = '\0';
	m_szFilePath[0] = '\0';
}

void Nap::FileDlg::ClearFileName()
{
	m_szFileName[0] = '\0';
}

vector<wstring> Nap::FileDlg::GetMultipleFileName()
{
	vector<wstring> fileNames;
	wchar_t* str = m_szFileName;
	std::wstring directory = str;
	str += (directory.length() + 1);
	while (*str) {
		std::wstring filename = str;
		str += (filename.length() + 1);
		fileNames.push_back(filename);
	}
	fileNames.erase(fileNames.begin() + 0);
	return fileNames;
}

const wchar_t* Nap::FileDlg::GetFileName()
{
	return m_szFileName;
}

bool Nap::FileDlg::SetFileName(const wchar_t* fileName)
{
	if (fileName == NULL) return false;
	const int length = (int)wcslen(fileName);
	lstrcpyn(m_szPath, fileName, WIN_FILEDLG_MAXPATH);
	m_szFileName[WIN_FILEDLG_MAXPATH - 1] = '\0';
	return true;
}

// return the file name with the full path
vector<wstring> Nap::FileDlg::GetMultipleFileNameFullPath()
{
	vector<wstring> fileNames;
	wchar_t* str = m_szPath;
	std::wstring directory = str;
	str += (directory.length() + 1);
	while (*str) {
		std::wstring filename = str;
		str += (filename.length() + 1);
		fileNames.push_back(directory + L"\\" + filename);
	}
	return fileNames;
}

// return the file name with the full path
const wchar_t* Nap::FileDlg::GetFileNameFullPath()
{
	return m_szPath;
}

wstring Nap::FileDlg::GetSelectedFileName()
{
	return m_szPath;
}

void Nap::FileDlg::SetSelectedFileName(const wstring fileName)
{
	const int len = (int)fileName.length();
	if (len > 0)
	{
		SetFileName(fileName.c_str());
	}
	else
	{
		m_szPath[0] = '\0';
	}
}

wstring& Nap::FileDlg::GetWorkingFolder()
{
	_workingFolder = GetFilePath();
	return _workingFolder;
}

void Nap::FileDlg::SetWorkingFolder(const wstring& folderName)
{
	_workingFolder = folderName;
	this->openFileName.lpstrInitialDir = _workingFolder.c_str();
}

// returns the path where the file is located
const wchar_t* Nap::FileDlg::GetFilePath()
{
	const int n = (int)(wcslen(m_szPath) - wcslen(m_szFileName));
	lstrcpyn(m_szFilePath, m_szPath, n);
	return m_szFilePath;
}

void Nap::FileDlg::SetFilter(const wchar_t* pszFilter, int nFilterIndex, const wchar_t* pszDefaultExt)
{
	const wchar_t* p = NULL;
	int i = 0;

	for (p = pszFilter, i = 0; (*p != '\0' || *(p + 1) != '\0') && i < WIN_MAX_FILTER - 2; p++, i++)
	{
		m_szFilter[i] = *p;
	}
	m_szFilter[i++] = '\0';
	m_szFilter[i] = '\0';

	openFileName.nFilterIndex = nFilterIndex;
	lstrcpyn(m_szDefaultExt, pszDefaultExt, 32);
	m_szDefaultExt[32 - 1] = '\0';
}

bool Nap::FileDlg::BeginDialog(HWND hWndParent, const wchar_t* caption)
{
	openFileName.lpstrTitle = caption;
	openFileName.hwndOwner = hWndParent;
	openFileName.Flags = OFN_OVERWRITEPROMPT | OFN_PATHMUSTEXIST | OFN_EXPLORER;
	return (::GetSaveFileName(&openFileName) == TRUE);
}

bool Nap::FileDlg::BeginDialog(HWND hWndParent, const wchar_t* caption, bool isMultiple)
{
	openFileName.lpstrTitle = caption;
	openFileName.hwndOwner = hWndParent;
	if (isMultiple == true)
	{
		openFileName.Flags = OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_EXPLORER | OFN_ALLOWMULTISELECT;
		return (::GetOpenFileName(&openFileName) == TRUE);
	}
	openFileName.Flags = OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_EXPLORER;
	return (::GetOpenFileName(&openFileName) == TRUE);
}

//=============================================================
//					       Screen
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

int Nap::Screen::GetScreenSizeX() {
	return GetSystemMetrics(SM_CXSCREEN);
}

int Nap::Screen::GetScreenSizeY() {
	return GetSystemMetrics(SM_CYSCREEN);
}

int Nap::Screen::GetHalfScreenSizeX() {
	return int(GetSystemMetrics(SM_CXSCREEN) * 0.5);
}

int Nap::Screen::GetHalfScreenSizeY() {
	return int(GetSystemMetrics(SM_CYSCREEN) * 0.5);
}

//=============================================================
//					       Text
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::Text::Join(vector<wstring> input, wchar_t byWhat) {
	if (input.empty()) return L"";
	wstring temp;
	for (int i = 0; i < input.size(); i++) {
		temp += input[i];
		if (i < input.size() - 1) temp += byWhat;
	}
	return temp;
}

void Nap::Text::Capitalize(wstring &input)
{
	vector<wstring> text = Nap::Text::Split(input, L' ');
	for (size_t i = 0; i < text.size(); i++) {
		wstring word = Nap::Text::ToUpper(text[i]);
		wstring aux;
		aux += text[i][0];
		for (int j = 0; j < text[i].size(); j++) {
			aux += Nap::Text::ToLower(text[i][j]);
		}
		text[i] = aux;
	}
	input = Nap::Text::Join(text, L' ');
}

void Nap::Text::Capitalize(vector<wstring> &input)
{
	for (int i = 0; i < input.size(); i++) {
		Nap::Text::Capitalize(input[i]);
	}
}

void Nap::Text::Capitalize(vector<vector<wstring>> &input)
{
	for (int i = 0; i < input.size(); i++) {
		Nap::Text::Capitalize(input[i]);

	}
}

wstring Nap::Text::ToLower(wstring input)
{
	wstring accentLower = L"áéíóúñ";
	wstring accentUpper = L"ÁÉÍÓÚÑ";
	transform(input.begin(), input.end(), input.begin(), towlower);
	for (size_t i = 0; i < input.length(); i++)
		for (size_t j = 0; j < accentUpper.length(); j++)
			if (input[i] == accentUpper[j])
				input[i] = accentLower[j];
	return input;
}

wchar_t Nap::Text::ToLower(wchar_t input)
{
	wstring accentLower = L"abcdefghijklmnopqrstuvwxyzáéíóúñ";
	wstring accentUpper = L"ABCDEFGHIJKLMNOPQRSTUVWXYZÁÉÍÓÚÑ";
	for (int i = 0; i < accentUpper.length(); i++) {
		if (accentUpper[i] == input) {
			input = accentLower[i];
			break;
		}
	}
	return input;
}

void Nap::Text::ToLower(vector<wstring> &input) {
	for (int i = 0; i < input.size(); i++) {
		input[i] = Nap::Text::ToLower(input[i]);
	}
}

void Nap::Text::ToLower(vector<vector<wstring>> &input) {
	for (int i = 0; i < input.size(); i++) {
		Nap::Text::ToLower(input[i]);
	}
}

wstring Nap::Text::ToUpper(wstring input)
{
	wstring accentLower = L"áéíóúñ";
	wstring accentUpper = L"ÁÉÍÓÚÑ";
	transform(input.begin(), input.end(), input.begin(), towupper);
	for (size_t i = 0; i < input.length(); i++)
		for (size_t j = 0; j < accentLower.length(); j++)
			if (input[i] == accentLower[j])
				input[i] = accentUpper[j];
	return input;
}

wchar_t Nap::Text::ToUpper(wchar_t input)
{
	wstring accentLower = L"abcdefghijklmnopqrstuvwxyzáéíóúñ";
	wstring accentUpper = L"ABCDEFGHIJKLMNOPQRSTUVWXYZÁÉÍÓÚÑ";
	for (int i = 0; i < accentLower.length(); i++) {
		if (accentLower[i] == input) {
			input = accentUpper[i];
			break;
		}
	}
	return input;
}

void Nap::Text::ToUpper(vector<wstring> &input) {
	for (int i = 0; i < input.size(); i++) {
		input[i] = Nap::Text::ToUpper(input[i]);
	}
}

void Nap::Text::ToUpper(vector<vector<wstring>> &input) {
	for (int i = 0; i < input.size(); i++) {
		Nap::Text::ToUpper(input[i]);
	}
}

wstring Nap::Text::Extract(wstring input, wstring leftX, wstring rightX)
{
	unsigned first = input.find_last_of(leftX);
	unsigned last = input.find_last_of(rightX);
	return input.substr(first, last - first);
}

bool Nap::Text::ReplaceFirst(string& input, const string& from, const string& to) {
	size_t start_pos = input.find(from);
	if (start_pos == string::npos) return false;
	input.replace(start_pos, from.length(), to);
	return true;
}

bool Nap::Text::ReplaceFirst(wstring& input, const wstring& from, const wstring& to) {
	size_t start_pos = input.find(from);
	if (start_pos == wstring::npos) return false;
	input.replace(start_pos, from.length(), to);
	return true;
}

void Nap::Text::ReplaceAll(wstring& input, const wstring& from, const wstring& to) {
	if (from.empty()) return;
	size_t start_pos = 0;
	while ((start_pos = input.find(from, start_pos)) != wstring::npos) {
		input.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

vector<wstring> Nap::Text::Split(wstring input, wchar_t byWhat) {
	wstring temp;
	vector<wstring> parts;
	wstringstream wss(input);
	while (getline(wss, temp, byWhat))
		parts.push_back(temp);
	return parts;
}

//=============================================================
//					       FILE
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::File::GetType(wstring filename)
{
	filename = Nap::File::GetExtension(filename);
	Nap::Text::ReplaceFirst(filename, L".", L"");
	return filename;
}

bool Nap::File::Copy(wstring existingFile, wstring newFile) {
	if (CopyFileW(existingFile.c_str(), newFile.c_str(), FALSE) == FALSE) {
		return false;
	}
	return true;
}

bool Nap::File::Cut(wstring existingFile, wstring newFile) {
	if (MoveFileW(existingFile.c_str(), newFile.c_str()) == FALSE) {
		return false;
	}
	return true;
}

bool Nap::File::CreateFolder(wstring pathNewFolder) {
	DWORD verifyFolder = GetFileAttributesW(pathNewFolder.c_str());
	if (verifyFolder == INVALID_FILE_ATTRIBUTES) return false;
	if (CreateDirectoryW(L"\\\\srv-mx03\\engineering\\test", NULL) == FALSE) {
		return false;
	}
	return true;
}

bool Nap::File::Save(vector<wstring> &data, wstring name, bool isUTF8) {
	vector<string> dataS;
	for (int i = 0; i < data.size(); i++) {
		dataS.push_back(Nap::Convert::ToUTF8(data[i]));
	}
	ofstream outFile(name, ofstream::out);
	for (const auto &it : dataS) {
		outFile << it.c_str() << "\n";
	}
	outFile.close();
	return true;
}

bool Nap::File::Save(vector<wstring> &data, wstring name) {
	wofstream outFile(name, wofstream::out);
	for (const auto &it : data) {
		outFile << it.c_str() << L"\n";
	}
	outFile.close();
	return true;
}

bool Nap::File::Save(vector<string> &data, string name) {
	ofstream outFile(name, ofstream::out);
	for (const auto &it : data) {
		for (size_t i = 0; i < it.length(); i++) {
			outFile << it[i];
		}
		outFile << "\n";
	}
	outFile.close();
	return true;
}

bool Nap::File::Save(wstring data, wstring name) {
	wofstream output(name);
	output << data;
	output.close();
	return true;
}

bool Nap::File::Save(string data, string name) {
	ofstream output(name);
	output << data;
	output.close();
	return true;
}

wstring Nap::File::Open(wstring root) {
	wifstream fs(root);
	return { istreambuf_iterator<wchar_t>(fs), istreambuf_iterator<wchar_t>() };
}

vector<wstring> Nap::File::OpenL(wstring root) {
	vector<wstring> fullText;
	wifstream fs(root);
	wstring line;
	while (getline(fs, line)) {
		wistringstream iss(line);
		fullText.push_back(iss.str());
	}
	return fullText;
}

bool Nap::File::OpenL64(wstring path, vector<string> &output, bool isEncode) {
	FILE *file;
	char *bufferAux;
	string pathS = Nap::Convert::ToString(path);
	fopen_s(&file, pathS.c_str(), "rb");
	if (!file) {
		throw L"Unable to open file";
		return false;
	}
	fseek(file, 0, SEEK_END);
	size_t fileLen = ftell(file);
	fseek(file, 0, SEEK_SET);
	bufferAux = (char *)malloc(fileLen + 1);
	if (!bufferAux) {
		fclose(file);
		throw L"Error: memory not enoght";
		return false;
	}
	fread(bufferAux, fileLen, 1, file);
	output = Nap::Encrypting::Base64L(bufferAux, fileLen);
	free(bufferAux);
	return true;
}

wstring Nap::File::GetName(wstring fileName) {
	size_t indexFindDot = fileName.rfind(L".", fileName.length());
	if (indexFindDot != wstring::npos) {
		size_t indexFindDiagonal = fileName.rfind(L"\\", fileName.length());
		if (indexFindDiagonal != wstring::npos) {
			return fileName.substr(indexFindDiagonal + 1, indexFindDot);
		}
		else {
			return fileName.substr(0, indexFindDot);
		}
	}
	return L"";
}

wstring  Nap::File::GetExtension(wstring fileName) {
	size_t indexFind = fileName.rfind(L".", fileName.length());
	if (indexFind != wstring::npos) {
		return fileName.substr(indexFind);
	}
	return L"";
}

wstring  Nap::File::GetPath(wstring fileName) {
	size_t indexFind = fileName.rfind(L"\\", fileName.length());
	if (indexFind != wstring::npos) {
		return fileName.substr(0, indexFind);
	}
	return L"";
}

vector<wstring> Nap::File::GetListFolder(wstring path) {
	vector<wstring> listFiles;
	if (path[path.length() - 1] == L'\\') path = path + L"*";
	else if (path[path.length() - 1] == L'*' && path[path.length() - 2] == L'\\') path = path;
	else path = path + L"\\*";
	WIN32_FIND_DATA data;
	HANDLE hFind = FindFirstFileW(path.c_str(), &data);
	if (hFind != INVALID_HANDLE_VALUE) {
		do {
			listFiles.push_back(data.cFileName);
		} while (FindNextFileW(hFind, &data));
		FindClose(hFind);
	}
	if (listFiles[0] == L".") listFiles.erase(listFiles.begin());
	if (listFiles[0] == L"..") listFiles.erase(listFiles.begin());
	return listFiles;
}

wstring Nap::File::GetLastErrorWindows() {
	DWORD errorMessageID = ::GetLastError();
	if (errorMessageID == 0)
		return wstring();

	LPSTR messageBuffer = nullptr;
	size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);

	std::string message(messageBuffer, size);
	LocalFree(messageBuffer);
	wstring auxW = Nap::Convert::ToWstring(message);
	Nap::Text::ReplaceFirst(auxW, L"\r\n", L"");
	return auxW;
}

//=============================================================
//					       TIME
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

string Nap::Time::GetCurrent(string format)
{
	time_t rawtime;
	struct tm * timeinfo = new tm();
	char buffer[256];
	time(&rawtime);
	localtime_s(timeinfo, &rawtime);
	strftime(buffer, sizeof(buffer), format.c_str(), timeinfo);
	string currentTime(buffer);
	return currentTime;
}

wstring Nap::Time::GetCurrent(wstring format)
{
	time_t rawtime;
	struct tm * timeinfo = new tm();
	wchar_t buffer[80];
	time(&rawtime);
	localtime_s(timeinfo, &rawtime);
	wcsftime(buffer, sizeof(buffer), format.c_str(), timeinfo);
	wstring currentTime(buffer);
	return currentTime;
}

bool Nap::Time::IsDayOff(Sys::Time t)
{
	wstring monthMX[] = { L"Ene", L"Feb", L"Mar", L"Abr", L"May", L"Jun", L"Jul", L"Ago", L"Sep", L"Oct", L"Nov", L"Dic" };
	wstring dayWeekMX[] = { L"Lunes", L"Martes", L"Miércoles", L"Jueves", L"Viernes", L"Sábado", L"Domingo" };
	wstring dayOff[] = { L"Ene 1", L"May 1", L"Sep 16", L"Dic 25" };
	wstring dateS;
	dateS = monthMX[t.wMonth - 1] + L" " + Nap::Convert::ToWstring(t.wDay);
	for (int i = 0; i < dayOff->size(); i++) if (dateS == dayOff[i]) return true;
	vector<vector<wstring>> dayOffIrregular;
	vector<wstring> aux;
	//Vaciar días de asueto
	aux.push_back(L"1"); aux.push_back(L"Lunes"); aux.push_back(L"Feb");
	dayOffIrregular.push_back(aux);
	aux.clear();
	aux.push_back(L"3"); aux.push_back(L"Lunes"); aux.push_back(L"Mar");
	dayOffIrregular.push_back(aux);
	aux.clear();
	aux.push_back(L"3"); aux.push_back(L"Lunes"); aux.push_back(L"Nov");
	dayOffIrregular.push_back(aux);
	vector<wstring> dayOfMonth = Nap::Time::DayOfMonth(t);
	for (size_t i = 0; i < dayOffIrregular.size(); i++) {
		if (dayOffIrregular[i][0] == dayOfMonth[0]) {
			if (dayOffIrregular[i][1] == dayOfMonth[1]) {
				if (dayOffIrregular[i][2] == dayOfMonth[2]) {
					return true;
				}
			}
		}
	}
	return false;
}

wstring Nap::Time::GetDayWeekMX(int day)
{
	wstring dayWeekMX[] = { L"Lunes", L"Martes", L"Miércoles", L"Jueves", L"Viernes", L"Sábado", L"Domingo" };
	if (day < 0 || day> 7) return L"";
	return dayWeekMX[day - 1];
}

int Nap::Time::GetNumberDayWeek(wstring date)
{
	wstring dayWeekUS[] = { L"Monday", L"Tuesday", L"Wednesday", L"Thursday", L"Friday", L"Saturday", L"Sunday" };
	wstring dayWeekMX[] = { L"Lunes", L"Martes", L"Miércoles", L"Jueves", L"Viernes", L"Sábado", L"Domingo" };
	for (int i = 0; i < 7; i++) {
		size_t indexBegin = 0;
		indexBegin = date.find(dayWeekUS[i]);
		if (indexBegin != wstring::npos) {
			return ++i;
		}
		indexBegin = date.find(dayWeekUS[i]);
		if (indexBegin != wstring::npos) {
			return ++i;
		}
	}
	return -1;
}

wstring Nap::Time::ChangeDateUStoMX(wstring date)
{
	wstring monthUS[] = { L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun", L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec" };
	wstring monthMX[] = { L"Ene", L"Feb", L"Mar", L"Abr", L"May", L"Jun", L"Jul", L"Ago", L"Sep", L"Oct", L"Nov", L"Dic" };
	for (int i = 0; i < 12; i++) {
		size_t indexBegin = 0;
		indexBegin = date.find(monthUS[i]);
		if (indexBegin != wstring::npos) {
			date.replace(indexBegin, 3, monthMX[i].c_str());
		}
	}
	return date;
}

wstring Nap::Time::ChangeDateMXtoUS(wstring date)
{
	wstring monthUS[] = { L"Jan", L"Feb", L"Mar", L"Apr", L"May", L"Jun", L"Jul", L"Aug", L"Sep", L"Oct", L"Nov", L"Dec" };
	wstring monthMX[] = { L"Ene", L"Feb", L"Mar", L"Abr", L"May", L"Jun", L"Jul", L"Ago", L"Sep", L"Oct", L"Nov", L"Dic" };
	for (int i = 0; i < 12; i++) {
		size_t indexBegin = 0;
		indexBegin = date.find(monthMX[i]);
		if (indexBegin != wstring::npos) {
			date.replace(indexBegin, 3, monthUS[i].c_str());
		}
	}
	return date;
}

Sys::Time Nap::Time::GetFromString(wstring date)
{
	Sys::Time timeT;
	wstring monthMX[] = { L"Ene", L"Feb", L"Mar", L"Abr", L"May", L"Jun", L"Jul", L"Ago", L"Sep", L"Oct", L"Nov", L"Dic" };
	date = Nap::Time::ChangeDateUStoMX(date);
	//________________Split Date
	Nap::Text::ReplaceFirst(date, L",", L"");
	vector<wstring> spDate = Nap::Text::Split(date, L' ');
	//________________Search Month
	int month = 1;
	if (date.empty()) return timeT;
	for (size_t i = 0; i < 12; i++, month++) {
		if (spDate[1] == monthMX[i]) break;
	}
	//________________Search Day
	int day = Sys::Convert::ToInt(spDate[0]);
	//________________Search Year
	int year = Sys::Convert::ToInt(spDate[2]);
	//________________Assign
	timeT.wDay = day;
	timeT.wYear = year;
	timeT.wMonth = month;
	return timeT;
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

vector<wstring> Nap::Time::DayOfMonth(Sys::Time t)
{
	wstring monthMX[] = { L"Ene", L"Feb", L"Mar", L"Abr", L"May", L"Jun", L"Jul", L"Ago", L"Sep", L"Oct", L"Nov", L"Dic" };
	wstring dayWeekMX[] = { L"Lunes", L"Martes", L"Miércoles", L"Jueves", L"Viernes", L"Sábado", L"Domingo" };
	vector<wstring> dayOfMonth;
	if (t.wDay >= 1 && t.wDay <= 7) dayOfMonth.push_back(L"1");
	else if (t.wDay >= 8 && t.wDay <= 14) dayOfMonth.push_back(L"2");
	else if (t.wDay >= 15 && t.wDay <= 21) dayOfMonth.push_back(L"3");
	else if (t.wDay >= 22 && t.wDay <= 28) dayOfMonth.push_back(L"4");
	else if (t.wDay >= 29 && t.wDay <= 31) dayOfMonth.push_back(L"5");
	if (t.wDayOfWeek > 0 && t.wDayOfWeek < 8)dayOfMonth.push_back(dayWeekMX[t.wDayOfWeek - 1]);
	if (t.wMonth > 0 && t.wMonth < 13)dayOfMonth.push_back(monthMX[t.wMonth - 1]);
	return dayOfMonth;
}

//=============================================================
//					    WINTEMPLA
//=============================================================
//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Wintempla::MouseIsOver(Win::ListView &lvAux, HWND &hWnd)
{
	POINT p;
	if (GetCursorPos(&p) == TRUE) {
		RECT rect;
		GetWindowRect(hWnd, &rect);
		if (p.x - 9 > lvAux.GetPositionX() + rect.left && p.x - 9 < lvAux.GetPositionX() + rect.left + lvAux.GetWidth()) {
			if (p.y - 38 > lvAux.GetPositionY() + rect.top && p.y - 38 < lvAux.GetPositionY() + lvAux.GetHeight() + rect.top) {
				return true;
			}
		}
	}
	return false;
}

vector<wstring> Nap::Wintempla::DropDownGetItems(Win::DropDownList &ddList)
{
	vector<wstring> output;
	size_t countItems = ddList.GetItemCount();
	for (size_t i = 0; i < countItems; i++) {
		wstring item;
		ddList.GetItemText(i, item);
		output.push_back(item);
	}
	return output;
}

bool Nap::Wintempla::DropDownCopyValues(vector<wstring> &from, Win::DropDownList &to)
{
	size_t countVector = from.size();
	to.Items.DeleteAll();
	for (size_t i = 0; i < countVector; i++) {
		to.Items.Add(from[i]);
	}
	int itemsCount = to.GetItemCount();
	int itemsCounts = to.Items.Count;
	if (itemsCount != from.size()) return false;
	return true;
}

bool Nap::Wintempla::DropDownCopyValues(Win::DropDownList &from, Win::DropDownList &to)
{
	size_t countItems = from.GetItemCount();
	to.Items.DeleteAll();
	for (size_t i = 0; i < countItems; i++) {
		wstring item;
		from.GetItemText(i, item);
		to.Items.Add(item);
	}
	return true;
}

//=============================================================
//					  PROGRESS BAR
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

void Nap::Wintempla::ProgressBar::StepIt(Win::ProgressBar &pbAux)
{
	pbAux.StepIt();
	pbAux.Update();
}

void Nap::Wintempla::ProgressBar::SetPosition(int position, Win::ProgressBar &pbAux)
{
	pbAux.SetPosition(position);
	pbAux.Update();
}

vector<wstring> Nap::Wintempla::ProgressBar::OpenL(wstring root, int percentage, Win::ProgressBar &pbAux)
{
	vector<wstring> fullText;
	wifstream fs(root);
	int countFile = Nap::Convert::ToInt(Nap::Text::Extract(Nap::Execute(L"find /v /c \"\" \"" + root + L"\""), L": ", L"\n"));
	wstring line;
	int moduleStep = countFile / double(percentage), i = 0;
	if (moduleStep <= 1) moduleStep = 1;
	while (getline(fs, line)) {
		if (i % moduleStep == 0 && i > moduleStep) {
			pbAux.StepIt();
			pbAux.SetText(Nap::Convert::ToWstring(pbAux.GetPosition()) + L"%");
			pbAux.Update();
		}
		wistringstream iss(line);
		fullText.push_back(iss.str());
		i++;
	}
	if (pbAux.GetPosition() > 97) {
		pbAux.SetPosition(100);
		pbAux.SetText(L"100%");
		pbAux.Update();
	}
	return fullText;
}

//=============================================================
//					     IMAGE
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Wintempla::Image::Open(HWND &hWnd, Win::Image &aux)
{
	Win::HourGlassCursor hgc(true);
	Win::FileDlg dlg;
	dlg.Clear();
	dlg.SetFilter(L"JPG (*.jpg)\0*.jpg\0PNG (*.png)\0*.png\0\0", 0, L"png");
	if (dlg.BeginDialog(hWnd, L"Abrir", false)) {
		aux.SetFileName(dlg.GetFileNameFullPath());
		return true;
	}
	return false;
}

//=============================================================
//					     LIST VIEW
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Wintempla::ListView::Fill(vector<vector<wstring>> &data, Win::ListView &lvItems)
{
	bool isHeader = false; 
	if (data.empty()) return false;
	if (data[0].empty()) return false;
	if (lvItems.GetColumnCount() == 0) {
		if (data.size() < 2) return false;
		for (size_t i = 0; i < data[0].size(); i++)
			lvItems.Cols.Add(i, LVCFMT_LEFT, 100, data[0][i]);
	}
	else if (lvItems.GetColumnCount() < data[0].size()) return false;
	lvItems.SetRedraw(false);
	lvItems.DeleteAllItems();
	for (size_t i = isHeader ? 1 : 0; i < data.size(); i++) {
		lvItems.Items.Add(i, data[i][0]);
		for (size_t j = 1; j < data[i].size(); j++)
			lvItems.Items[i][j].Text = data[i][j];
	}
	lvItems.SetRedraw(true);
	lvItems.Redraw();
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, wstring value, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, value);
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = value;
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::FillMoney(int nRow, int nColumn, double doubleItem, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, L"$" + Nap::Convert::ToWstring(doubleItem, 2));
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = L"$" + Nap::Convert::ToWstring(doubleItem, 2);
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, double value, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, Nap::Convert::ToWstring(value, 2));
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = Nap::Convert::ToWstring(value, 2);
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, bool value, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, Sys::Convert::ToString(value));
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = Sys::Convert::ToString(value);
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, int value, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, Sys::Convert::ToString(value));
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = Sys::Convert::ToString(value);
	else return false;
	return true;
}
bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, Win::DateTimeBox &dtboxItem, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, Nap::Time::ChangeDateUStoMX(dtboxItem.GetText()));
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = Nap::Time::ChangeDateUStoMX(dtboxItem.GetText());
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, Win::Textbox &tbxItem, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, tbxItem.Text);
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = tbxItem.Text;
	else return false;
	return true;
}

bool Nap::Wintempla::ListView::Fill(int nRow, int nColumn, Win::DropDownList &ddItem, Win::ListView &lvItems)
{
	if (nColumn == 0) lvItems.Items.Add(nRow, ddItem.Text);
	else if (nColumn > 0) lvItems.Items[nRow][nColumn].Text = ddItem.Text;
	else return false;
	return true;
}

//=============================================================
//					       SQL
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::Wintempla::SQL::QueryW(HWND &hWnd, wstring select, wstring from, wstring wheres)
{
	Win::HourGlassCursor hgc(true);
	Sql::SqlConnection conn;
	wstring cmd = L"SELECT " + select + L" FROM " + from + L" WHERE " + wheres;
	wstring output;
	try {
		conn.OpenSession(hWnd, CONNECTUSR_STRING);
		conn.GetString(cmd, output, 300);
		conn.CloseSession();
	}
	catch (Sql::SqlException e) {
		conn.CloseSession();
		return false;
	}
	return output;
}

int Nap::Wintempla::SQL::Query(HWND &hWnd, wstring select, wstring from, wstring wheres)
{
	Win::HourGlassCursor hgc(true);
	Sql::SqlConnection conn;
	wstring cmd = L"SELECT " + select + L" FROM " + from + L" WHERE " + wheres;
	int idItem;
	try {
		conn.OpenSession(hWnd, CONNECTUSR_STRING);
		idItem = conn.GetInt(cmd);
		conn.CloseSession();
	}
	catch (Sql::SqlException e) {
		conn.CloseSession();
		return -1;
	}
	return idItem;
}

wstring Nap::Wintempla::SQL::QueryW(Sql::SqlConnection &conn, wstring select, wstring from, wstring wheres)
{
	Win::HourGlassCursor hgc(true);
	wstring cmd = L"SELECT " + select + L" FROM " + from + L" WHERE " + wheres, output;
	conn.GetString(cmd, output, 900);
	return output;
}

int Nap::Wintempla::SQL::Query(Sql::SqlConnection &conn, wstring select, wstring from, wstring wheres)
{
	Win::HourGlassCursor hgc(true);
	wstring cmd = L"SELECT " + select + L" FROM " + from + L" WHERE " + wheres;
	int idItem = conn.GetInt(cmd);
	return idItem;
}

//=============================================================
//					    DROPDOWNLIST
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Wintempla::DropDownList::Fill(Win::DropDownList &ddList) {
	if (this->item.empty()) return false;
	if (this->selectedIndex < 0) return false;
	ddList.DeleteAllItems();
	size_t countItem = item.size();
	for (int i = 0; i < countItem; i++) {
		ddList.Items.Add(this->item[i]);
	}
	ddList.SetSelectedIndex(this->selectedIndex);
	return true;
}

bool Nap::Wintempla::DropDownList::AddItem(wstring item) {
	if (item.empty()) return false;
	this->item.push_back(item);
	this->item_id.push_back(GetLastItemID() + 1);
	return true;
}

bool Nap::Wintempla::DropDownList::AddItem(wstring item, int item_id) {
	if (item.empty()) return false;
	for (size_t i = 0; i < this->item_id.size(); i++) {
		if (item_id == this->item_id[i]) return false;
	}
	this->item.push_back(item);
	this->item_id.push_back(item_id);
	return true;
}

bool Nap::Wintempla::DropDownList::SetItems(vector<wstring> &items, vector<int> item_id) {
	if (items.empty()) return false;
	this->item_id = item_id;
	size_t itemsCount = items.size();
	this->item.clear();
	this->item_id.clear();
	for (size_t i = 0; i < itemsCount; i++) {
		this->item.push_back(items[i]);
		this->item_id.push_back((LPARAM)i);
	}
	return false;
}

bool Nap::Wintempla::DropDownList::SetItems(Win::DropDownList &ddList) {
	int itemsCount = ddList.Items.GetCount();
	if (itemsCount <= 0) return false;
	this->item.clear();
	this->selectedIndex = ddList.GetSelectedIndex();
	LPARAM localItem_id;
	for (int i = 0; i < itemsCount; i++) {
		wstring itemAux;
		ddList.GetItemText(i, itemAux);
		ddList.SetSelectedIndex(i);
		ddList.GetSelectedData(localItem_id);
		this->item.push_back(itemAux);
		this->item_id.push_back(localItem_id);
	}
	return true;
}

vector<wstring> Nap::Wintempla::DropDownList::GetAllItems() {
	return this->item;
}

bool Nap::Wintempla::DropDownList::SetSelectedIndex(int index) {
	if (index < 0) return false;
	if (index > item.size() - 1) return false;
	this->selectedIndex = index;
	return true;
}

int Nap::Wintempla::DropDownList::GetSelectedIndex() {
	return this->selectedIndex;
}

int Nap::Wintempla::DropDownList::GetItemId() {
	if (this->selectedIndex >= 0) {
		if (!this->item_id.empty()) {
			return this->item_id[this->selectedIndex];
		}
	}
	return -1;
}

wstring Nap::Wintempla::DropDownList::GetText() {
	if (!this->item.empty()) {
		if (this->selectedIndex >= 0) {
			return this->item[this->selectedIndex];
		}
	}
	return L"";
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

int Nap::Wintempla::DropDownList::GetLastItemID() {
	int aux = -1;
	for (size_t i = 0; i < item_id.size(); i++) {
		if (aux < item_id[i]) aux = item_id[i];
	}
	return aux;
}

//=============================================================
//					    SHOWBALLOONTIP
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Wintempla::ShowBalloonTip::Empty(Win::Textbox &tbxAux, wstring title) {
	if (!tbxAux.Text.empty()) return false;
	tbxAux.ShowBalloonTip(title, L"Este campo no puede estar vacío", TTI_ERROR);
	return true;
}

bool Nap::Wintempla::ShowBalloonTip::Different(Win::Textbox &tbxAux1, Win::Textbox &tbxAux2, wstring title, bool isMale) {
	if (!(tbxAux1.GetText() != tbxAux2.GetText())) return false;
	wstring word = Nap::Text::Split(title, L' ')[0];
	if(isMale) tbxAux2.ShowBalloonTip(title, L"Los " + Nap::Text::ToLower(word) + L"s deben ser iguales", TTI_ERROR);
	else tbxAux2.ShowBalloonTip(title, L"Las " + Nap::Text::ToLower(word) + L"s deben ser iguales", TTI_ERROR);
	return true;
}

//=============================================================
//					    XSLT
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::XSLT::GetXSL()
{
	if (this->xml.empty()) return L"";
	if (this->xslTemplate.empty()) return L"";
	this->GenerateXSLT();
	return xsl;
}

bool Nap::XSLT::SetXMLFromFile(wstring root)
{
	this->xml = Nap::File::Open(root);
	return true;
}

bool Nap::XSLT::SetXMLFromWstring(wstring xml)
{
	if (xml.empty()) return false;
	this->xml = xml;
	return true;
}

bool Nap::XSLT::SetXSLTemplateFromFile(wstring root)
{
	this->xslTemplate = Nap::File::Open(root);
	return true;
}

bool Nap::XSLT::SetXSLTemplateFromWstring(wstring xslTemplate)
{
	if (xslTemplate.empty()) return false;
	this->xslTemplate = xslTemplate;
	return true;
}

//-------------------------------------------------------------
//					FUNCIONES PROTEGIDAS
//-------------------------------------------------------------

void Nap::XSLT::GenerateXSLT()
{
	//xml = Nap::Correct::XMLtoHTML(xml);
	CoInitialize(NULL);
	variant_t vResult;
	LPCTSTR output = NULL;
	IXMLDOMDocumentPtr pXml(__uuidof(DOMDocument60));
	IXMLDOMDocumentPtr pXslt(__uuidof(FreeThreadedDOMDocument60));
	CComPtr<IXSLTemplate> pTemplate;
	pTemplate.CoCreateInstance(__uuidof(XSLTemplate60));
	CComPtr<IXSLProcessor> pProcessor;
	CComPtr<IStream> pOutStream;
	VARIANT_BOOL isSuccessful;
	string xmlName;
	Sys::Convert::WstringToString(xml, xmlName);
	string xsltName;
	Sys::Convert::WstringToString(xslTemplate, xsltName);
	try {
		pXml->put_async(false);
		vResult = pXml->loadXML(_bstr_t(xmlName.c_str()), &isSuccessful);
		pXslt->put_resolveExternals(VARIANT_TRUE);
		pXslt->put_async(false);
		vResult = pXslt->loadXML(_bstr_t(xsltName.c_str()), &isSuccessful);
	}
	catch (_com_error &e) {
		exit(-1);
	}
	try {
		vResult = pTemplate->putref_stylesheet(pXslt);
		pTemplate->createProcessor(&pProcessor);
	}
	catch (_com_error &e) {
		exit(-1);
	}
	HRESULT __fr = CreateStreamOnHGlobal(NULL, TRUE, &pOutStream);
	pProcessor->put_output(_variant_t(pOutStream));

	pProcessor->put_input(_variant_t((IUnknown*)pXml));
	pProcessor->transform(&isSuccessful);
	HGLOBAL hg = NULL;
	pOutStream->Write((void const*)"\0", 1, 0);
	GetHGlobalFromStream(pOutStream, &hg);
	output = (LPCTSTR)GlobalLock(hg);
	wstring aux = (const wchar_t*)output;
	GlobalUnlock(hg);
	//release before CoUninitialize()
	pXml.Release();
	pXslt.Release();
	pTemplate.Release();
	pProcessor.Release();
	CoUninitialize();
	aux = Nap::Correct::XMLtoHTML(aux);
	this->xsl = aux;
}

//=============================================================
//					    CORRECT
//=============================================================

//-------------------------------------------------------------
//					CLASE XML
//-------------------------------------------------------------

bool Nap::Correct::XML::ChangeChildName(Sys::Xml &xmlObjext, wstring oldChild, wstring newChild)
{
	if (xmlObjext.child.empty() == true) return false;
	list<Sys::Xml>::iterator p = xmlObjext.child.begin();
	while (p != xmlObjext.child.end()) {
		if (p->name == L"item") {
			if (p->child.empty() == true) return false;
			list<Sys::Xml>::iterator p2 = p->child.begin();
			while (p2 != p->child.end()) {
				if (p2->name == oldChild) {
					p2->name = newChild;
					break;
				}
				else p2++;
			}
		}
		p++;
	}
	return true;
}

bool Nap::Correct::XML::DeleteChild(Sys::Xml &xmlObjext, wstring childName, wstring fatherName)
{
	if (xmlObjext.child.empty() == true) return false;
	list<Sys::Xml>::iterator p = xmlObjext.child.begin();
	while (p != xmlObjext.child.end()) {
		if (p->name == fatherName) {
			if (p->child.empty() == true) return false;
			list<Sys::Xml>::iterator p2 = p->child.begin();
			while (p2 != p->child.end()) {
				if (p2->name == childName) {
					p2 = p->child.erase(p2);
					break;
				}
				else p2++;
			}
		}
		p++;
	}
	return true;
}

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::Correct::XMLtoHTML(wstring html)
{
	wstring accents[] = { L"Á", L"É", L"Í", L"Ó", L"Ú", L"Ñ", L"á", L"é", L"í", L"ó", L"ú", L"ñ", L"¡", L"¿" };
	wstring correct[] = { L"&Aacute;", L"&Eacute;", L"&Iacute;", L"&Oacute;", L"&Uacute;", L"&Ntilde;", L"&aacute;", L"&eacute;", L"&iacute;", L"&oacute;", L"&uacute;", L"&ntilde;", L"&iexcl;",L"&iquest;" };
	for (size_t i = 0; i < 15; i++) {
		Nap::Text::ReplaceAll(html, accents[i], correct[i]);
	}

	return html;
}

wstring Nap::Correct::Double(wstring input, int NAP_CV_DOUBLE)
{
	wstring decimalAccepted = L"0123456789.";
	wstring temp;
	int a, b;
	int countDot = 0;
	switch (NAP_CV_DOUBLE)
	{
	case NAP_CV_DOUBLE_DOUBLEDOT:
		countDot = 0;
		for (size_t i = 0; i < input.length(); i++) {
			if (input[i] == L'.' && countDot > 0) continue;
			for (int j = 0; j < decimalAccepted.length(); j++) {
				if (input[i] == decimalAccepted[j]) {
					temp += input[i];
					break;
				}
			}
			if (input[i] == L'.') countDot++;
		}
		break;
	case NAP_CV_DOUBLE_SIMBOL:
		countDot = 0;
		for (size_t i = 0; i < input.length(); i++) {
			for (int j = 0; j < decimalAccepted.length(); j++) {
				if (input[i] == decimalAccepted[j]) {
					temp += input[i];
					break;
				}
			}
		}
		break;
	case NAP_CV_DOUBLE_ISINTEGER:
		if (input == L"") temp = L"0.00";
		else temp = input + L".00";
		break;
	case NAP_CV_DOUBLE_OK:
		temp = input;
		if (input == L"") temp = L"0.00";
		if (input.find_last_of(L'.') == input.length() - 1) temp += L"00";
		if (input[0] == L'.') temp = L"0" + temp;
		break;
	default:
		return input;
		break;
	}
	return temp;
}

//=============================================================
//					    VERIFY
//=============================================================


//=============================================================
//                  REGULAR EXPRESSION
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Verify::RegularExpression::Wstring(const char *RegularExpression, wstring data)
{
	regex expReg(RegularExpression);
	if (regex_match(Nap::Convert::ToString(data), expReg) == false) {
		return false;
	}
	return true;
}

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::Verify::IsHTML(wstring text)
{
	size_t indexBegin = text.find(L"<html>");
	if (indexBegin == std::wstring::npos) return false;
	text.assign(text.begin() + indexBegin, text.begin() + 6);
	size_t indexEnd = text.find(L"</html>");
	if (indexBegin == std::wstring::npos) return false;
	return true;
}


int Nap::Verify::Double(wstring input)
{
	wstring decimalAccepted = L"0123456789.";
	int countDot = 0;
	for (size_t i = 0; i < input.length(); i++) {
		bool isIn = false;
		if (input[i] == L'.') countDot++;
		if (countDot > 1) return NAP_CV_DOUBLE_DOUBLEDOT;
		for (int j = 0; j < 11; j++) {
			if (input[i] == decimalAccepted[j]) isIn = true;
		}
		if (!isIn) return NAP_CV_DOUBLE_SIMBOL;
	}
	if (countDot == 0) return NAP_CV_DOUBLE_ISINTEGER;
	return NAP_CV_DOUBLE_OK;
}

//=============================================================
//					    CONVERTIR
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

vector<wstring> Nap::Convert::ToWstring(vector<string> input) {
	vector<wstring> output;
	for (size_t i = 0; i < input.size(); i++) {
		output.push_back(Nap::Convert::ToWstring(input[i]));
	}
	return output;
}

wstring Nap::Convert::ToWstring(string input) {
	wstring output;
	if (input.empty()) return output;
	const size_t len = (size_t)strlen(input.c_str());
	if (len == 0) return output;
	output.resize(len);
	for (size_t i = 0; i < len; i++) {
		output[i] = (wchar_t)(unsigned char)input[i];
	}
	return output;
}

wstring Nap::Convert::ToWstring(double input) {
	wstringstream inputString;
	inputString << input;
	return inputString.str();
}

wstring Nap::Convert::ToWstring(double input, int setPresicion) {
	wstringstream inputString;
	inputString << fixed << setprecision(setPresicion);
	inputString << input;
	return inputString.str();
}

wstring Nap::Convert::ToWstring(int input) {
	wstringstream inputString;
	inputString << input;
	return inputString.str();
}

wstring Nap::Convert::ToWstring(bool input, bool isBinary) {
	if (input & isBinary) return L"1";
	else if (!input & isBinary) return L"0";
	else if (input & !isBinary) return L"True";
	else return L"False";
}

string Nap::Convert::ToString(wstring input) {
	string output;
	if (input.empty()) return output;
	const size_t len = (size_t)wcslen(input.c_str());
	if (len == 0) return output;
	output.resize(len);
	for (size_t i = 0; i < len; i++) {
		output[i] = (char)(unsigned char)input[i];
	}
	return output;
}

string Nap::Convert::ToString(int input) {
	stringstream inputString;
	inputString << input;
	return inputString.str();
}

string Nap::Convert::ToUTF8(wstring input) {
	string output("");
	const int lengthUTF16 = (int)wcslen(input.c_str());
	if (lengthUTF16 <= 0) return output;
	DWORD dwConversionFlags = 0;
	//_____________________________________________________ Compute buffer length
	const int lengthUTF8 = ::WideCharToMultiByte(CP_UTF8, dwConversionFlags, input.c_str(), lengthUTF16, NULL, 0, NULL, NULL);
	if (lengthUTF8 == 0)
	{
		output.clear();
		return false;
	}
	output.resize(lengthUTF8);
	//_____________________________________________________ Perform conversion
	int len = (::WideCharToMultiByte(CP_UTF8, dwConversionFlags, input.c_str(), lengthUTF16, (char*)output.c_str(), lengthUTF8, NULL, NULL) != 0);
	return output;
}

double Nap::Convert::ToDouble(wstring input) {
	double output;
	wstringstream inputString(input);
	inputString >> output;
	if (!(inputString.eof() && !inputString.fail()))
		return 0.0;
	return output;
}

int Nap::Convert::ToInt(wstring input) {
	return stoi(input);
}

int Nap::Convert::ToInt(string input) {
	return stoi(input);
}

const char* Nap::Convert::ToChar(wstring input) {
	string output = Nap::Convert::ToString(input);
	return output.c_str();
}

//=============================================================
//					    ENCRYPTING
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::Encrypting::Cesar(wstring input, int id) {
	for (int i = 0; i < input.length(); i++) {
		input[i] = input[i] + id + 30;
		id--;
	}
	return input;
}

wstring Nap::Encrypting::Base64(wstring input) {
	if (input == L"") return L"";
	wchar_t *table = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	const int lengthInput = input.length();
	int lengthAux = 0, i = 0;
	wstring output, aux;
	while (i < lengthInput)
	{
		aux = L"";
		lengthAux = 0;
		for (int j = 0; j < 3; j++) {
			aux += input[i];
			if (i < lengthInput) {
				i++;
				lengthAux++;
			}
		}
		if (lengthAux) Encrypting::Encode64(aux, output, table, lengthAux);
	}
	return output;
}

string Nap::Encrypting::Base64(string input) {
	if (input == "") return "";
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	const int lengthInput = input.length();
	int lengthAux = 0, i = 0;
	string output, aux;
	while (i < lengthInput)
	{
		aux = "";
		lengthAux = 0;
		for (int j = 0; j < 3; j++) {
			aux += input[i];
			if (i < lengthInput) {
				i++;
				lengthAux++;
			}
		}
		if (lengthAux) Encrypting::Encode64(aux.c_str(), output, table);
	}
	return output;
}

string Nap::Encrypting::Base64(string input, size_t len) {
	if (input == "") return "";
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	int lengthAux = 0, i = 0;
	string output, aux;
	while (i < len) {
		aux = "";
		lengthAux = 0;
		for (int j = 0; j < 3; j++) {
			aux += input[i];
			if (i < len) {
				i++;
				lengthAux++;
			}
		}
		if (lengthAux) Encrypting::Encode64(aux.c_str(), output, table);
	}
	return output;
}

string Nap::Encrypting::Base64(const char* input, size_t len) {
	if (input == "") return "";
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	int lengthAux = 0, i = 0;
	string output, aux;
	while (i < len) {
		aux = "";
		lengthAux = 0;
		for (int j = 0; j < 3; j++) {
			aux += input[i];
			if (i < len) {
				i++;
				lengthAux++;
			}
		}
		if (lengthAux) Encrypting::Encode64(aux.c_str(), output, table);
	}
	return output;
}

vector<string> Nap::Encrypting::Base64L(const char* input, size_t len) {
	vector<string> output;
	if (input == "") return output;
	if (input == nullptr) return output;
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	int lengthAux = 0, i = 0, push = 0;
	bool itWasPush = true;
	string outputS, aux;
	while (i < len) {
		aux = "";
		lengthAux = 0;
		for (int j = 0; j < 3; j++) {
			aux += input[i];
			if (i < len) {
				i++;
				lengthAux++;
			}
		}
		if (lengthAux) {
			Encrypting::Encode64(aux.c_str(), outputS, table);
			itWasPush = false;
			if (push++ > 1000) {
				push = 0;
				itWasPush = true;
				output.push_back(outputS);
				outputS = "";
			}
		}
	}
	if (itWasPush == false) {
		output.push_back(outputS);
	}
	return output;
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

void Nap::Encrypting::Encode64(const wstring &input, wstring &output, wchar_t *table, int &length) {
	output += table[(input[0] & 0xFC) >> 2];
	output += table[((input[0] & 0x03) << 4) | ((input[1] & 0xF0) >> 4)];
	if (length > 1) output += table[((input[1] & 0x0F) << 2) | ((input[2] & 0xC0) >> 6)];
	else output += L"=";
	if (length > 2) output += table[input[2] & 0x3F];
	else output += L"=";
}

void Nap::Encrypting::Encode64(const char* input, string& output, char *table) {
	output += table[(input[0] & 0xFC) >> 2];
	output += table[((input[0] & 0x03) << 4) | ((input[1] & 0xF0) >> 4)];
	output += table[((input[1] & 0x0F) << 2) | ((input[2] & 0xC0) >> 6)];
	output += table[input[2] & 0x3F];
}

//=============================================================
//					    DECRYPTING
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

wstring Nap::Decrypting::Cesar(wstring input, int id) {
	for (int i = 0; i < input.length(); i++) {
		input[i] = input[i] - id - 30;
		id--;
	}
	return input;
}

wstring Nap::Decrypting::Base64(wstring input) {
	if (input == L"") return L"";
	wchar_t *table = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	const int lengthInput = input.length();
	const int lengthTable = (int)wcslen(table);
	int lengthAux = 0, i = 0;
	wstring output, aux;
	while (i < lengthInput) {
		aux = L"";
		lengthAux = 0;
		for (int j = 0; j < 4; j++) {
			if (input[i] != '=') {
				aux += input[i];
				if (i < lengthInput) {
					i++;
					lengthAux++;
				}
			}
			else {
				i = lengthInput;
				break;
			}
		}
		if (lengthAux) {
			for (int j = 0; j < aux.length();j++) {
				for (int k = 0; k < lengthTable;k++) {
					if (aux[j] == table[k]) {
						aux[j] = k;
						break;
					}
				}
			}
			Decrypting::Decode64(aux, output, lengthAux);
		}
	}
	return output;
}

string Nap::Decrypting::Base64(string input) {
	if (input == "") return "";
	char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	const int lengthInput = input.length();
	const int lengthTable = (int)strlen(table);
	int lengthAux = 0, i = 0;
	string output, aux;
	while (i < lengthInput) {
		aux = "";
		lengthAux = 0;
		for (int j = 0; j < 4; j++) {
			if (input[i] != '=') {
				aux += input[i];
				if (i < lengthInput) {
					i++;
					lengthAux++;
				}
			}
			else {
				i = lengthInput;
				break;
			}
		}
		if (lengthAux) {
			for (int j = 0; j < aux.length(); j++) {
				for (int k = 0; k < lengthTable; k++) {
					if (aux[j] == table[k]) {
						aux[j] = k;
						break;
					}
				}
			}
			Decrypting::Decode64(aux, output, lengthAux);
		}
	}
	return output;
}

//-------------------------------------------------------------
//					FUNCIONES PRIVADAS
//-------------------------------------------------------------

void Nap::Decrypting::Decode64(const wstring &input, wstring &output, int &length) {
	output += ((input[0] << 2) + ((input[1] & 0x30) >> 4));
	if (length > 2) output += (((input[1] & 0x0F) << 4) + ((input[2] & 0x3C) >> 2));
	if (length > 3) output += (((input[2] & 0x03) << 6) + input[3]);
}

void Nap::Decrypting::Decode64(const string &input, string &output, int &length) {
	output += ((input[0] << 2) + ((input[1] & 0x30) >> 4));
	if (length > 2) output += (((input[1] & 0x0F) << 4) + ((input[2] & 0x3C) >> 2));
	if (length > 3) output += (((input[2] & 0x03) << 6) + input[3]);
}

//=============================================================
//					    PDF
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

bool Nap::PDF::SetPDFfromHTML(wstring html) {
	this->html = Nap::Convert::ToString(html);
	return true;
}

bool Nap::PDF::SetPDFfromHTML(string html) {
	this->html = html;
	return true;
}

bool Nap::PDF::CreatePDF(wstring rootDestiny) {
	if (this->html.empty()) return false;
	//________________________________Delete file previous create
	const string rootDestinyS = Nap::Convert::ToString(rootDestiny);
	remove(rootDestinyS.c_str());
	//________________________________Settings PDF output
	wkhtmltopdf_set_global_setting(settingGPDF, "out", rootDestinyS.c_str());
	//________________________________Settings PDF Converter
	convertPDF = wkhtmltopdf_create_converter(settingGPDF);
	//________________________________Adding Header HTML
	string html = "data:text / html, <!DOCTYPE html>\r\n" + this->html;
	Nap::Text::ReplaceFirst(html, "ÿ", "");
	//________________________________Convert HTML to PDF
	wkhtmltopdf_set_object_setting(settingOPDF, "page", html.c_str());
	wkhtmltopdf_add_object(convertPDF, settingOPDF, NULL);
	if (wkhtmltopdf_convert(convertPDF) != 1) {
		int errorCode = wkhtmltopdf_http_error_code(convertPDF);
		return false;
	}
	wkhtmltopdf_destroy_converter(convertPDF);
	return true;
}

bool Nap::PDF::SetNormalSetting(string paperSize, string orientation, string colorMode) {
	wkhtmltopdf_set_global_setting(settingGPDF, "size.paperSize", paperSize.c_str());
	wkhtmltopdf_set_global_setting(settingGPDF, "orientation", orientation.c_str());
	wkhtmltopdf_set_global_setting(settingGPDF, "colorMode", colorMode.c_str());
	return true;
}

bool Nap::PDF::SetSettingPaperSize(string paperSize) {
	wkhtmltopdf_set_global_setting(settingGPDF, "size.paperSize", paperSize.c_str());
	return true;
}

bool Nap::PDF::SetSettingOrientation(string orientation) {
	wkhtmltopdf_set_global_setting(settingGPDF, "orientation", orientation.c_str());
	return true;
}

bool Nap::PDF::SetSettingColorMode(string colorMode) {
	wkhtmltopdf_set_global_setting(settingGPDF, "colorMode", colorMode.c_str());
	return true;
}

//=============================================================
//					     DESIGN
//=============================================================

//=============================================================
//					   AUTOCENTER
//=============================================================

void Nap::Design::AutoCenter::SetReferenceSizeX(int sizeReferenceX) { 
	this->sizeX = sizeReferenceX;
}

void Nap::Design::AutoCenter::SetReferenceSizeY(int sizeReferenceY) {
	this->sizeY = sizeReferenceY;
}

void Nap::Design::AutoCenter::SetReferenceSize(int sizeReferenceX, int sizeReferenceY) {
	this->SetReferenceSizeX(sizeReferenceX);
	this->SetReferenceSizeY(sizeReferenceY);
}

void Nap::Design::AutoCenter::ElementX(Win::Button &btAux) {
	if (!btAux.IsVisible()) return;
	int positionX = int(sizeX * 0.5 - btAux.GetWidth() * 0.5) - 10;
	btAux.SetPositionX(positionX);
}

void Nap::Design::AutoCenter::ElementY(Win::Button &btAux) {
	if (!btAux.IsVisible()) return;
	int positionY = int(sizeY * 0.5 - btAux.GetHeight() * 0.5) - 28;
	btAux.SetPositionY(positionY);
}

void Nap::Design::AutoCenter::Element(Win::Button &btAux) {
	this->ElementX(btAux);
	this->ElementY(btAux);
}

//=============================================================
//					    AUTOSIZE
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

void Nap::Design::AutoSizeWGbox::SetX(Win::Button &btAux) {
	if (!btAux.IsVisible()) return;
	btAux.SetWidth(sizeX - 20);
}

void Nap::Design::AutoSizeWGbox::SetY(Win::Button &btAux) {
	if (!btAux.IsVisible()) return;
	btAux.SetHeight(sizeY - 50);
}

void Nap::Design::AutoSizeWGbox::SetGbox(Win::Button &btAux) {
	if (!btAux.IsVisible()) return;
	btAux.SetWidth(sizeX - 40);
	btAux.SetHeight(sizeY - 70);
	sizeX = btAux.GetWidth();
	sizeY = btAux.GetHeight();
}


//=============================================================
//					  AUTOPOSITION
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

void Nap::Design::AutoPositionWGbox::SetGbox(Win::Button &btAux)
{
	if (!btAux.IsVisible()) return;
	Nap::Design::AutoCenter autoCenter;
	autoCenter.SetReferenceSize(sizeX, sizeY);
	autoCenter.Element(btAux);
	sizeX = btAux.GetWidth();
	sizeY = btAux.GetHeight();
	this->SetCurrentPositionY(btAux.PositionY + sizeY * 0.1);
	this->SetCurrentPositionX(btAux.PositionX);
}

void Nap::Design::AutoPositionWGbox::SetConstantPositionX(double constantPositionXLeft, double constantPositionXRight)
{
	this->constantPositionXLeft = constantPositionXLeft;
	this->constantPositionXRight = constantPositionXRight;
}

void Nap::Design::AutoPositionWGbox::SetConstantPositionY(double constantPositionY)
{
	this->constantPositionY = constantPositionY;
}

void Nap::Design::AutoPositionWGbox::SetCurrentPositionY(double currentPositionY)
{
	this->currentPositionY = currentPositionY;
}

void Nap::Design::AutoPositionWGbox::SetCurrentPositionX(double currentPositionX)
{
	this->currentPositionX = currentPositionX;
}

void Nap::Design::AutoPositionWGbox::SetX(Win::Button &btAux)
{
	if (!btAux.IsVisible()) return;
	btAux.SetPositionX(int(sizeX * 0.5 + currentPositionX - btAux.GetWidth() * 0.5));
}


void Nap::Design::AutoPositionWGbox::SetY(Win::Textbox &tbxAux, Win::Label &lbAux)
{
	if (!tbxAux.IsVisible()) return;
	tbxAux.SetPositionY(currentPositionY);
	lbAux.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);
}

void Nap::Design::AutoPositionWGbox::SetY(Win::Textbox &tbxAux, Win::Label &lbAux1, Win::Label &lbAux2)
{
	if (!tbxAux.IsVisible()) return;
	tbxAux.SetPositionY(currentPositionY);
	lbAux1.SetPositionY(currentPositionY);
	lbAux2.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);;
}

void Nap::Design::AutoPositionWGbox::SetY(Win::Button &btAux)
{
	if (!btAux.IsVisible()) return;
	btAux.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);
}

void Nap::Design::AutoPositionWGbox::SetY(Win::Button &ckButton1, Win::Button &ckButton2, Win::Label &lbAux)
{
	if (!ckButton1.IsVisible() || !ckButton2.IsVisible()) return;
	ckButton1.SetPositionY(currentPositionY);
	ckButton2.SetPositionY(currentPositionY);
	lbAux.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);
}

void Nap::Design::AutoPositionWGbox::SetY(Win::DropDownList &ddListAux, Win::Label &lbAux)
{
	if (!ddListAux.IsVisible()) return;
	ddListAux.SetPositionY(currentPositionY);
	lbAux.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);
}

void Nap::Design::AutoPositionWGbox::SetY(Win::DateTimeBox &dtboxAux, Win::Label &lbAux)
{
	if (!dtboxAux.IsVisible()) return;
	dtboxAux.SetPositionY(currentPositionY);
	lbAux.SetPositionY(currentPositionY);
	currentPositionY += (int)(sizeY * constantPositionY);
}

void Nap::Design::AutoPositionWGbox::Set(Win::Button &btAux) 
{
	this->SetX(btAux);
	this->SetY(btAux);
}

//=============================================================
//					  Element
//=============================================================

//-------------------------------------------------------------
//					FUNCIONES PUBLICAS
//-------------------------------------------------------------

//_____________________________________________________Activate

void Nap::Design::Element::Activate(Win::Button &btAux)
{
	btAux.SetEnabled(true);
	btAux.SetVisible(true);
}

void Nap::Design::Element::Activate(Win::Button &btAux1, Win::Button &btAux2)
{
	Nap::Design::Element::Activate(btAux1);
	Nap::Design::Element::Activate(btAux2);
}

//_____________________________________________________Deactivate

void Nap::Design::Element::Deactivate(Win::Button &btAux)
{
	btAux.SetEnabled(false);
	btAux.SetVisible(false);
}

void Nap::Design::Element::Deactivate(Win::Button &btAux1, Win::Button &btAux2)
{
	Nap::Design::Element::Deactivate(btAux1);
	Nap::Design::Element::Deactivate(btAux2);
}