#include "stdafx.h"  //________________________________________ Windows_HorarioDICIS.cpp
#include "Windows_HorarioDICIS.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Windows_HorarioDICIS app;
	CG::Brush brushBackground;
	brushBackground.CreateSolid(RGB(48, 58, 60));
	app.CreateMainWindow(L"Windows_HorarioDICIS", cmdShow, IDI_Windows_HorarioDICIS, IDC_Windows_HorarioDICIS, brushBackground, hInstance);
	float propX = float(Nap::Screen::GetScreenSizeX() / 1920.0);
	float propY = float(Nap::Screen::GetScreenSizeY() / 1080.0);
	app.SetWidth(int(663 * propX));
	app.SetHeight(int(388 * propY));
	app.SetPositionX(int(Nap::Screen::GetHalfScreenSizeX() - (app.Width * 0.5)));
	app.SetPositionY(int(Nap::Screen::GetHalfScreenSizeY() - (app.Height * 0.5)));
	return app.MessageLoop(IDC_Windows_HorarioDICIS);
}

void Windows_HorarioDICIS::Window_Open(Win::Event& e)
{
	if (Nap::File::Exists(Nap::GetCurrentPathWork() + L"\\encryptedpid.dll") == false) {
		CarreraDlg carreraDlg;
		if (carreraDlg.BeginDialog(hWnd) != TRUE) {
			this->Destroy();
			return;
		}
	}
	carrera = Nap::Decrypting::Base64(Nap::Decrypting::Cesar(Nap::File::Open(Nap::GetCurrentPathWork() + L"\\encryptedpid.dll"), 100));
	//________________________________________________________ imgLogoUG
	imgLogoUG.SetBitmap(hInstance, IDB_LOGOUG);
	this->root = Nap::GetCurrentPathWork();
	//________________________________________________________ pbUpload
	pbUpload.SetVisible(false);
	pbUpload.SetRange(1, 100);
	pbUpload.SetBackColor(RGB(180, 180, 180));
	//________________________________________________________ toolbExcel
	TBBUTTON tbButton[2];
	int iconSizes[] ={16, 20, 24, 32, 40, 48, 64};
	const int pixelsIconSize = Sys::Metrics::GetBestIconSize(iconSizes, 2, Sys::Convert::CentimetersToScreenPixels(0.42333));
	const int pixelsButtonSize = pixelsIconSize + Sys::Convert::CentimetersToScreenPixels(0.1);
	toolbExcel.imageList.Create(pixelsIconSize, pixelsIconSize, 2);
	toolbExcel.imageList.AddIcon(this->hInstance, IDI_DELETE);
	toolbExcel.imageList.AddIcon(this->hInstance, IDI_REFRESH);
	toolbExcel.SendMessage(TB_BUTTONSTRUCTSIZE, (WPARAM)(int)sizeof(TBBUTTON), 0); 
	toolbExcel.SetImageList(toolbExcel.imageList);
	//_____________________________________
	tbButton[0].iBitmap=MAKELONG(0, 0); //<< IMAGE INDEX
	tbButton[0].idCommand=IDM_DELETE;
	tbButton[0].fsState=TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[0].fsStyle=BTNS_BUTTON;
	tbButton[0].dwData=0L; 
	tbButton[0].iString= (LONG_PTR)L"Borrar";
	//_____________________________________
	tbButton[1].iBitmap = MAKELONG(1, 0); //<< IMAGE INDEX
	tbButton[1].idCommand = IDM_UPDATE;
	tbButton[1].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[1].fsStyle = BTNS_BUTTON;
	tbButton[1].dwData = 0L;
	tbButton[1].iString = (LONG_PTR)L"Actualizar programa";
	toolbExcel.SetBitmapSize(pixelsIconSize, pixelsIconSize);
	toolbExcel.SetButtonSize(pixelsButtonSize, pixelsButtonSize);
	toolbExcel.AddButtons(tbButton, 2);// << EDIT HERE THE NUMBER OF BUTTONS
	toolbExcel.SendMessage(TB_AUTOSIZE, 0, 0);
	toolbExcel.SetMaxTextRows(0);// EDIT HERE TO DISPLAY THE BUTTON TEXT
	toolbExcel.Show(SW_SHOWNORMAL);
	//toolbExcel.ResizeToFit();
}

void Windows_HorarioDICIS::OpenExcel()
{
	Win::FileDlg dlg;
	dlg.Clear();
	dlg.SetFilter(L"Excel Files (*.xlsx)\0*.xlsx\0Excel Files 97-2003 (*.xls)\0*.xls\0\0\0", 0, L"*.*");
	if (dlg.BeginDialog(hWnd, L"Open File", false) == TRUE) {
		//Cursor en modo de espera
		Win::HourGlassCursor hgc(true);
		//Hacer visible la progressBar
		pbUpload.SetVisible(true);
		//Borrar todos los datos de la listView en caso de haber
		if (lvExcel.GetItemCount() > 0) lvExcel.DeleteAllItems();
		//Mostrar la ruta en la TextBox
		tbxPath.SetText(dlg.GetFileName());
		//________________________ Abrir archivo excel
		try {
			//Pasar el progressBar para que muestre el procentaje
			excelFile.SetProgressBar(pbUpload);
			//Abrir el archivo de excel
			excelFile.Open(dlg.GetFileNameFullPath());
			//Obtener los datos del archivo excel en un vector de vectores
			vector<vector<wstring>> data = excelFile.GetData();
			//Hacer que los datos obtenidos sean vaciados en una ListView
			excelFile.GetListView(lvExcel);
		}
		catch (Com::Exception excep) {
			excep.Display(hWnd, L"Excel Viewer");
		}
		Nap::Wintempla::ProgressBar::SetPosition(100, pbUpload);
		Sleep(500); //Pausar para que se vea que se ha terminado
		//Desaparecer el ProgressBar reiniciándolo para futuros usos
		Nap::Wintempla::ProgressBar::SetPosition(0, pbUpload);
		//Hacer invisible el ProgressBar
		pbUpload.SetVisible(false);
		//Fijar bandera de que existe un excel cargado en el programa
		isExcel = true;
	}
}

void Windows_HorarioDICIS::Publish()
{
	//Verificamos si hay un archivo de excel abierto
	if (!isExcel) {
		this->MessageBox(L"No se ha abierto un archivo de Excel", L"Error", MB_OK | MB_ICONERROR);
		return;
	}
	//________________________ Generación del archivo XML y posterior almacenamiento local
	//Cursor en modo de espera
	Win::HourGlassCursor hgc(true);
	//Se hace visible la progressBar
	pbUpload.SetVisible(true);
	//Creación de un objeto de la clase Xml
	Sys::Xml xmlReporteGastos;
	//Obtener el XML en base a la listView
	lvExcel.ExportToXml(true, xmlReporteGastos);
	//Avanzamos al 10% en la ProgressBar
	Nap::Wintempla::ProgressBar::SetPosition(20, pbUpload);
	//Cambiar todos los posibles nombres de las ramas para estandarizar los datos
	Nap::Correct::XML::DeleteChild(xmlReporteGastos, L"id", L"item");
	Adjust(xmlReporteGastos, L"Area De La Uda,Área De La Uda", L"AreaDeLaUda");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Unidad De Aprendizaje", L"UnidadDeAprendizaje");
	Adjust(xmlReporteGastos, L"Horas /sem,Horas /Sem,Horas/sem,Horas/Sem,Hrs / Sem,Hrs /Sem,Hrs /sem,Hrs/ Sem,Hrs/Sem", L"HorasSem");
	Adjust(xmlReporteGastos, L"Mié,Miércoles,Miercoles", L"Mie");
	Adjust(xmlReporteGastos, L"Sáb,Sábado,Sabado", L"Sab");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Salón", L"Salon");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Lunes", L"Lun");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Martes", L"Mar");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Jueves", L"Jue");
	Nap::Correct::XML::ChangeChildName(xmlReporteGastos, L"Viernes", L"Vie");
	//Avanzamos al 20% en la ProgressBar
	Nap::Wintempla::ProgressBar::SetPosition(30, pbUpload);
	//Obtener el texto del XML 
	xmlReporteGastos.GetXmlText(xmlFinal);
	//Quitar todos los saltos de línea y tabuladores no admitidos en la app de Android
	Nap::Text::ReplaceAll(xmlFinal, L"\t", L"");
	Nap::Text::ReplaceAll(xmlFinal, L"\r", L"");
	Nap::Text::ReplaceAll(xmlFinal, L"\n", L"");
	//Avanzamos al 40% en la ProgressBar
	Nap::Wintempla::ProgressBar::SetPosition(40, pbUpload);
	//Creación de un objeto de la clase Email::SMTP diseñada para enviar un correo
	Nap::Email::SMTP email(L"sch.dicis@gmail.com", L"10071994JnOp_Chicken");
	//Indicamos al objeto que use el progress bar y fijamos un porcentaje de la tarea del 50%
	email.SetProgressBar(pbUpload, 50);
	auto iteration = CARRERA.find(carrera);
	if (email.SendLocalFileGoogle(xmlFinal, "xml", Nap::Convert::ToString(iteration->second) + " " + Nap::Time::GetCurrent("%d-%m-%Y %H%M%S")) == false) {
		//Mostrar erro de envío
		this->MessageBox(L"El archivo no se pudo publicar, verifique los datos e intente de nuevo.", L"Error", MB_OK | MB_ICONERROR);
		//Desaparecer el ProgressBar reiniciándolo para futuros usos
		Nap::Wintempla::ProgressBar::SetPosition(0, pbUpload);
		//Hacer invisible el ProgressBar
		pbUpload.SetVisible(false);
		return;
	}
	Nap::Wintempla::ProgressBar::SetPosition(100, pbUpload);
	//Mostrar alerta de archivo publicado
	this->MessageBox(L"El archivo se ha publicado", L"Terminado", MB_OK | MB_ICONINFORMATION);
	//Desaparecer el ProgressBar reiniciándolo para futuros usos
	Nap::Wintempla::ProgressBar::SetPosition(0, pbUpload);
	//Hacer invisible el ProgressBar
	pbUpload.SetVisible(false);
}

void Windows_HorarioDICIS::lbUpload_CtlColorStatic(Win::Event& e) {}

void Windows_HorarioDICIS::customControlOpen_Click(Win::Event& e)
{
	this->triggerButton = TRIGGER_OPENEXCEL;
	this->EnableCloseButton(false);
	threadObject.StartThread(*this);
}


void Windows_HorarioDICIS::customControlBtUpload_Click(Win::Event& e)
{
	this->triggerButton = TRIGGER_PUBLISH;
	this->EnableCloseButton(false);
	threadObject.StartThread(*this);
}

void Windows_HorarioDICIS::customControlBtExcel_Click(Win::Event& e)
{
	float propX = float(Nap::Screen::GetScreenSizeX() / 1920.0);
	if (isExcel) {
		if (customControlBtExcel.ChangeDoor()) {
			this->SetWidth(int(1300 * propX));
			lvExcel.SetVisible(true);
		}
		else {
			this->SetWidth(int(663 * propX));
			lvExcel.SetVisible(false);
		}
	}
	else {
		MessageBox(L"No se ha abierto un archivo excel o este está siendo cargado", L"Error", MB_ICONERROR | MB_OK);
	}
}

void Windows_HorarioDICIS::Window_User(Win::Event& e)
{
	if (e.lParam == WORK_ID) {
		threadObject.WaitForExit();
		this->EnableCloseButton(true);
	}
}

DWORD Windows_HorarioDICIS::ThreadFunc(Mt::BoolTs& cancel, Mt::DecimalTs& progress, Mt::BoolTs& resetTime) 
{
	if (this->triggerButton == TRIGGER_OPENEXCEL) this->OpenExcel();
	else if (this->triggerButton == TRIGGER_PUBLISH) this->Publish();
	::PostMessage(hWnd, WM_USER + 1, (WPARAM)0, (LPARAM)WORK_ID);
	return 0;
}

void Windows_HorarioDICIS::Window_MouseMove(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IN_AREA, true);
	customControlOpen.SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
	customControlBtExcel.SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
	customControlBtUpload.SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
}

void Windows_HorarioDICIS::Window_NcActivate(Win::Event& e)
{
	isWindowActive = (e.wParam != FALSE);
	if (e.wParam == TRUE) { // Windows is activated repaint
		RepaintNonClientArea();
		customControlBtUpload.colorBackground.SetFromCOLORREF(RGB(48, 58, 60));
		customControlBtUpload.Repaint(NULL, true);
		customControlBtExcel.backgroundC.SetFromCOLORREF(RGB(48, 58, 60));
		customControlBtExcel.Repaint(NULL, true);
		lbUpload.SetBackColor(RGB(48, 58, 60));
	}
	else if (e.wParam == FALSE) { // Windows is losing activation
		RepaintNonClientArea();
		e.returnValue = TRUE; // Let other window be activated
		customControlBtUpload.colorBackground.SetFromCOLORREF(RGB(87, 97, 99));
		customControlBtUpload.Repaint(NULL, true);
		customControlBtExcel.backgroundC.SetFromCOLORREF(RGB(87, 97, 99));
		customControlBtExcel.Repaint(NULL, true);
		lbUpload.SetBackColor(RGB(87, 97, 99));
	}
	else { // e.wParam may take other values besides TRUE and FALSE
		e.returnValue = ::DefWindowProc(hWnd, WM_NCACTIVATE, e.wParam, e.lParam);
		RepaintNonClientArea();
		customControlBtUpload.colorBackground.SetFromCOLORREF(RGB(48, 58, 60));
		customControlBtUpload.Repaint(NULL, true);
		customControlBtExcel.backgroundC.SetFromCOLORREF(RGB(48, 58, 60));
		customControlBtExcel.Repaint(NULL, true);
		lbUpload.SetBackColor(RGB(48, 58, 60));
	}
}

void Windows_HorarioDICIS::Window_NcCalcSize(Win::Event& e)
{
	float propX = float(Nap::Screen::GetScreenSizeX() / 1920.0);
	if (e.wParam == TRUE) {
		NCCALCSIZE_PARAMS* calcSize_Params = (NCCALCSIZE_PARAMS*)e.lParam;
		rectWindow = calcSize_Params->rgrc[0]; // the proposed new window coordinates.
		rectOldWindow = calcSize_Params->rgrc[1]; // the window before it was moved or resized
		rectOldClientArea = calcSize_Params->rgrc[2]; // window's client area before the window was moved or resized
	}
	e.returnValue = ::DefWindowProc(hWnd, WM_NCCALCSIZE, e.wParam, e.lParam);
	if (e.wParam == TRUE) {
		//____________________________________________ Close Button
		const int titleBarHeight = rectOldClientArea.top - rectOldWindow.top;
		const int windowWidth = rectWindow.right - rectWindow.left;
		const int buttonWidth = 37;
		const int buttonHeight = 37;
		const int padding = (titleBarHeight > buttonHeight) ? (titleBarHeight - buttonHeight) / 2 : 0;
		RECT rect;
		rect.right = int(598 * propX) + (rectOldClientArea.left - rectOldWindow.left);//int((windowWidth - buttonWidth) * 0.978)
		rect.left = rect.right - buttonWidth;
		rect.top = padding;
		rect.bottom = rect.top + buttonHeight;
		buttonClose.NcCalcSize(rect);
		//____________________________________________ Minimize Button
		::OffsetRect(&rect, -(buttonWidth + 0 * int(propX)), 0);
		buttonMinimize.NcCalcSize(rect);
		//____________________________________________ Window Icon
		rect.left = padding;
		rect.right = long((rect.left + buttonWidth) * 1.7);
		buttonWindowIcon.NcCalcSize(rect);
	}
}

void Windows_HorarioDICIS::Window_NcCreate(Win::Event& e)
{
	buttonWindowIcon.drawButton = false;
	buttonWindowIcon.color = RGB(48, 58, 60);
	buttonMinimize.color = RGB(48, 58, 60);
	buttonClose.color = RGB(48, 58, 60);
	//
	buttonWindowIcon.NcCreate(hInstance, IDI_TITLEBAR, IDI_TITLEBAR);
	buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZE, IDI_WINDOW_MINIMIZED);
	buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSE, IDI_WINDOW_CLOSED);
	e.returnValue = ::DefWindowProc(hWnd, WM_NCCREATE, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcLButtonDown(Win::Event& e)
{
	if (buttonMinimize.NcLButtonDown(hWnd, e, regionWindow)) {
		buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZED, IDI_WINDOW_MINIMIZED);
		buttonMinimize.Redraw(hWnd, regionWindow);
		return;
	}
	if (buttonClose.NcLButtonDown(hWnd, e, regionWindow)) {
		buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSED, IDI_WINDOW_CLOSED);
		buttonClose.Redraw(hWnd, regionWindow);
		return;
	}
	e.returnValue = ::DefWindowProc(hWnd, WM_NCLBUTTONDOWN, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcLButtonUp(Win::Event& e)
{
	if (buttonMinimize.NcLButtonUp(hWnd, e, regionWindow)) {
		this->SetMouseCursor(NAP_MOUSE_IN_MINIMIZE, NAP_MOUSE_IS_NOTOVER);
		::SendMessage(hWnd, WM_SYSCOMMAND, SC_MINIMIZE, 0);
	}
	else if (buttonClose.NcLButtonUp(hWnd, e, regionWindow)) {
		this->SetMouseCursor(NAP_MOUSE_IN_MINIMIZE, NAP_MOUSE_IS_NOTOVER);
		::SendMessage(hWnd, WM_SYSCOMMAND, SC_CLOSE, 0);
	}
	else {
		e.returnValue = ::DefWindowProc(hWnd, WM_NCLBUTTONUP, e.wParam, e.lParam);
	}
}

void Windows_HorarioDICIS::Window_NcMouseMove(Win::Event& e)
{
	if (buttonMinimize.NcMouseMove(hWnd, e, regionWindow)) {
		SetMouseCursor(NAP_MOUSE_IN_MINIMIZE, NAP_MOUSE_IS_OVER);
	}
	else if (buttonClose.NcMouseMove(hWnd, e, regionWindow)) {
		SetMouseCursor(NAP_MOUSE_IN_CLOSE, NAP_MOUSE_IS_OVER);
	}
	else {
		SetMouseCursor(NAP_MOUSE_IN_NON_AREA, NAP_MOUSE_IS_OVER);
	}
	e.returnValue = ::DefWindowProc(hWnd, WM_NCMOUSEMOVE, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcPaint(Win::Event& e)
{
	if (e.wParam == 1) {
		regionWindow.CreateRect(rectWindow);
	}
	else {
		regionWindow.Set((HRGN)e.wParam);
	}
	CG::Gdi gdi(hWnd, regionWindow, DCX_WINDOW | DCX_CACHE | DCX_INTERSECTRGN | DCX_LOCKWINDOWUPDATE, false);
	this->DrawNonClientArea(gdi);
	::RedrawWindow(hWnd, &rectWindow, regionWindow.GetHRGN(), RDW_UPDATENOW);
}

void Windows_HorarioDICIS::Window_Paint(Win::Event& e)
{
	float propX = float(Nap::Screen::GetScreenSizeX() / 1920.0);
	CG::Gdi gdi(hWnd, true, false);
	CG::Brush brushSolid;
	gdi.SelectNullPen();
	brushSolid.CreateSolid(isWindowActive ? RGB(48, 58, 60) : RGB(87, 97, 99));
	gdi.FillRect(0, 0, this->Width, this->Height, brushSolid);
	imgLogoUG.SetBackColor(isWindowActive ? RGB(48, 58, 60) : RGB(87, 97, 99));
	imgLogoUG.SetBitmap(hInstance, isWindowActive ? IDB_LOGOUG : IDB_LOGOUGMO);
	imgLogoUG.Repaint(NULL, false);
	gdi.SelectNullBrush();
	CG::Pen pen(PS_SOLID, 4, RGB(255, 255, 255));
	gdi.Select(pen);
	int clientAreaWidth = GetClientWidth();
	int clientAreaHeight = GetClientHeight();
	gdi.Line(0, 0, int(600 * propX), 0); //Horizontal
	gdi.Line(int(600 * propX), 0, int(600 * propX), clientAreaHeight); //Vertical
}

void Windows_HorarioDICIS::TurnOff()
{
	buttonMinimize.NcCreate(hInstance, isWindowActive ? IDI_WINDOW_MINIMIZE : IDI_WINDOW_MINIMIZEMO, isWindowActive ? IDI_WINDOW_MINIMIZE : IDI_WINDOW_MINIMIZEMO);
	buttonClose.NcCreate(hInstance, isWindowActive ? IDI_WINDOW_CLOSE : IDI_WINDOW_CLOSEMO, isWindowActive ? IDI_WINDOW_CLOSE : IDI_WINDOW_CLOSEMO);
	buttonClose.Redraw(hWnd, regionWindow);
	buttonMinimize.Redraw(hWnd, regionWindow);
}

void Windows_HorarioDICIS::SetMouseCursor(int mouseCursor, int state)
{
	if (WhereIsCursor() != mouseCursor) {
		this->TurnOff();
		this->mouseCursor = mouseCursor;
		switch (mouseCursor) {
		case NAP_MOUSE_IN_CLOSE:
			if (state == NAP_MOUSE_IS_OVER) buttonClose.NcCreate(hInstance, isWindowActive ? IDI_WINDOW_CLOSEMO : IDI_WINDOW_CLOSE, isWindowActive ? IDI_WINDOW_CLOSEMO : IDI_WINDOW_CLOSE);
			else if (state == NAP_MOUSE_IS_NOTOVER) buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSE, IDI_WINDOW_CLOSE);
			else if (state == NAP_MOUSE_IS_CLICK) buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSED, IDI_WINDOW_CLOSED);
			buttonClose.Redraw(hWnd, regionWindow);
			break;
		case NAP_MOUSE_IN_MINIMIZE:
			if (state == NAP_MOUSE_IS_OVER) buttonMinimize.NcCreate(hInstance, isWindowActive ? IDI_WINDOW_MINIMIZEMO : IDI_WINDOW_MINIMIZE, isWindowActive ? IDI_WINDOW_MINIMIZEMO : IDI_WINDOW_MINIMIZE);
			else if (state == NAP_MOUSE_IS_NOTOVER) buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZE, IDI_WINDOW_MINIMIZE);
			else if (state == NAP_MOUSE_IS_CLICK) buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZED, IDI_WINDOW_MINIMIZED);
			buttonMinimize.Redraw(hWnd, regionWindow);
			break;
		case NAP_MOUSE_IN_NON_AREA:
			this->RepaintNonClientArea();
			break;
		case NAP_MOUSE_IN_AREA:
			this->RepaintNonClientArea();
			break;
		default:
			break;
		}
	}
}

int Windows_HorarioDICIS::WhereIsCursor()
{
	return this->mouseCursor;
}

void Windows_HorarioDICIS::RepaintNonClientArea()
{
	CG::Gdi gdi(hWnd, regionWindow, DCX_WINDOW | DCX_CACHE | DCX_INTERSECTRGN | DCX_LOCKWINDOWUPDATE, false);
	this->DrawNonClientArea(gdi);
}

void Windows_HorarioDICIS::DrawNonClientArea(CG::Gdi& gdi)
{
	const int titleBarHeight = rectOldClientArea.top - rectOldWindow.top;
	const int bottomBorderHeight = rectOldWindow.bottom - rectOldClientArea.bottom;
	const int leftBorderWidth = rectOldClientArea.left - rectOldWindow.left;
	const int rightBorderWidth = rectOldWindow.right - rectOldClientArea.right;
	const int windowWidth = rectWindow.right - rectWindow.left;
	const int windowHeight = rectWindow.bottom - rectWindow.top;
	this->Repaint(NULL, false);
	CG::Brush brush(isWindowActive ? RGB(48, 58, 60) : RGB(87, 97, 99));
	if (isWindowActive) {
		buttonWindowIcon.NcCreate(hInstance, IDI_TITLEBAR, IDI_TITLEBAR);
		buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZE, IDI_WINDOW_MINIMIZE);
		buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSE, IDI_WINDOW_CLOSE);
	}
	else {
		buttonWindowIcon.NcCreate(hInstance, IDI_TITLEBARMO, IDI_TITLEBARMO);
		buttonMinimize.NcCreate(hInstance, IDI_WINDOW_MINIMIZEMO, IDI_WINDOW_MINIMIZEMO);
		buttonClose.NcCreate(hInstance, IDI_WINDOW_CLOSEMO, IDI_WINDOW_CLOSEMO);
	}
	//___________________________________________________ Title Bar
	CG::DDBitmap bitmap;
	RECT rcPaint = { 0, 0, windowWidth, titleBarHeight };
	bitmap.CreateCompatible(hWnd, windowWidth, titleBarHeight);
	CG::Gdi gdiBitmap(bitmap, rcPaint, true);
	gdiBitmap.FillRect(0, 0, rectWindow.right - rectWindow.left, titleBarHeight, brush);
	//___________________________________________________ Buttons
	buttonWindowIcon.NcPaint(gdiBitmap);
	buttonMinimize.NcPaint(gdiBitmap);
	buttonClose.NcPaint(gdiBitmap);
	//___________________________________________________ Text
	wchar_t text[64];
	const int len = ::GetWindowText(hWnd, text, 64);
	if (len > 0)
	{
		RECT rc;
		CG::Font font;
		font.Create(L"sans-serif", int(titleBarHeight * 0.68), false, false, 0);
		gdiBitmap.Select(font);
		gdiBitmap.SetTextColor(RGB(255, 255, 255));
		buttonWindowIcon.GetRect(rc);
		SIZE size;
		gdiBitmap.GetTextExtentPoint32W(text, size);
		gdiBitmap.SetBkMode(true);
		gdiBitmap.TextOut(rc.right + 10, int(((titleBarHeight - size.cy) / 2) * 1.4), text);
	}
	//___________________________________________________ Text
	RECT rc2;
	CG::Font fonts;
	fonts.Create(L"sans-serif", int(titleBarHeight * 0.68), false, false, 0);
	gdiBitmap.Select(fonts);
	gdiBitmap.SetTextColor(RGB(255, 255, 255));
	buttonClose.GetRect(rc2);
	SIZE sizes;
	gdiBitmap.GetTextExtentPoint32W(L"Vista Preliminar del Horario", sizes);
	gdiBitmap.SetBkMode(true);
	gdiBitmap.TextOut(rc2.right + 86, int(((titleBarHeight - sizes.cy) / 2) * 1.4), L"Vista Preliminar del Horario"); // + 60 EN X
	gdi.DrawCompatibleBitmap(bitmap, 0, 0);
	//___________________________________________________ Left Border
	gdi.FillRect(0, titleBarHeight, leftBorderWidth, windowHeight - bottomBorderHeight, brush);
	//___________________________________________________ Right Border
	gdi.FillRect(windowWidth - rightBorderWidth, titleBarHeight, windowWidth, windowHeight - bottomBorderHeight, brush);
	//___________________________________________________ Bottom Border
	gdi.FillRect(0, windowHeight - bottomBorderHeight, windowWidth, windowHeight, brush);
	//___________________________________________________ Line Draw
	float propX = float(Nap::Screen::GetScreenSizeX() / 1920.0);
	CG::Pen pen(PS_SOLID, 3, RGB(255, 255, 255));
	gdi.Select(pen);
	gdi.Line(0, titleBarHeight, int(600 * propX) + rightBorderWidth, titleBarHeight); //Horizontal
	gdi.Line(int(600 * propX) + rightBorderWidth, 0, int(600 * propX) + rightBorderWidth, windowWidth); //Vertical
}

void Windows_HorarioDICIS::Adjust(Sys::Xml &xmlAux, wstring listOld, wstring newElement)
{
	vector<wstring> older = Nap::Text::Split(listOld, L',');
	for (size_t i = 0; i < older.size(); i++) {
		Nap::Correct::XML::ChangeChildName(xmlAux, older[i], newElement);
	}
}

void Windows_HorarioDICIS::Cmd_Delete(Win::Event& e)
{
	Win::HourGlassCursor hgc(true);
	LPARAM item_id;
	if (lvExcel.GetSelectedData(item_id) == false) return;
	const int selectedCount = lvExcel.GetSelectedCount();
	if (selectedCount < 0) return;
	if (this->MessageBox(L"¿Está seguro?", L"Vista Preliminar del Archivo Excel", MB_YESNO | MB_ICONQUESTION) != IDYES)
		return;
	int index = -1;
	for (int i = 0; i < selectedCount; i++) {
		index = lvExcel.GetNextSelectedIndex(i);
		if (index < 0) break;
		lvExcel.DeleteItem(index);
	}
}
void Windows_HorarioDICIS::Cmd_Update(Win::Event& e)
{
	win_sparkle_check_update_with_ui();
}
