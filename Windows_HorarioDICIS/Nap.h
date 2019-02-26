#pragma once
#include <fstream>
#include <MsXml6.h>
#include <algorithm>
#include <iomanip>
#include "Constants.h"
#include "Excel.h"
#include "wkhtmltox/pdf.h"
#pragma comment(lib, "wkhtmltox.lib")

class Nap
{
public:
	Nap();
	~Nap();
	//Get the current directory path of the program, in most cases is C:\ProgramFiles\FolderProgramName or if your working on VS is the current debug folder
	static wstring GetCurrentPathWork();
	//Open an image and it will stored in a pointer, to read it
	static char* OpenImage(wstring root, int &lenOutput);
	//Execute a windows command and return it in wstring
	static wstring Execute(wstring cmd);
	//Execute a windows command and return it in string
	static string Execute(string cmd);
	class ExcelFile {
	public:
		ExcelFile() {
			this->isProgressBar = false;
		}
		~ExcelFile() {}
		//Open an exel file
		bool Open(wstring fileName);
		//Set a progress bar in case you want to use it
		bool SetProgressBar(Win::ProgressBar &pbAux);
		//Get XML code based in excel file
		wstring GetXML();
		//Get data in vector<vector> wstring
		vector<vector<wstring>> GetData();
		//Get listView of data
		void GetListView(Win::ListView& listAux);

	private:
		bool isProgressBar;
		Win::ListView listView;
		Win::ProgressBar *pbAux;
		wstring GetCols(long cols);
		vector<vector<wstring>> data;
		wstring GetXML(wstring name);
		bool GetHorario(vector<vector<wstring>> &preHorario);
		void CleanningData(vector<vector<wstring>> &data);
	};
	class Email {
	public:
		class SMTP {
		public:
			SMTP(wstring user, wstring password) {
				if (user.empty() || password.empty()) return;
				this->user.clear();
				this->password.clear();
				this->user = user;
				this->password = password;
				percentageToAdvance = 0;
			}
			~SMTP() {
				Disconnect();
			}
			//Send email with an attachement file open in local PC using a google account
			bool SendFileGoogle(wstring path);
			//Send email with only text message usign a google account
			bool SendEmailGoogle(wstring message);
			//Send email with an attachement file store in program passing extension example "pdf" using a google account
			bool SendLocalFileGoogle(wstring file, string extensionFile);
			//Send email with an attachement file store in program passing extension example "pdf" using a google account
			bool SendLocalFileGoogle(wstring file, string extensionFile, string subject);
			//Set a progress bar in case you want to use it, and the percentage that going to advance
			bool SetProgressBar(Win::ProgressBar &pbActual, int percentageToAdvance);
		private:
			bool Connect(wchar_t *servername, int port);
			bool Disconnect();
			bool SendEmail(int typeEmail);
			bool VerifyProtocol(string &protocolSMTP, int code, wstring messageError);
			bool PreparingDataAttached(string &body);
			bool SendAttachmentFile(string &body);
		protected:
			string GetBody(string &emailFrom, string &emailTo, int &typeEmail);
			Sys::SecuritySupportProvider ssp;
			Sys::Socket socket;
			string subject;
			wstring path;
			wstring user;
			wstring password;
			wstring message;
			wstring file;
			string extensionFile;
			bool isProgressBar;
			Win::ProgressBar *pbAux;
			int percentageToAdvance;
		};
	};
	class FileDlg {
	public:
		FileDlg(void);
		virtual ~FileDlg(void);
		//Start a save dialog
		bool BeginDialog(HWND hWndParent, const wchar_t* caption);
		//Start a open dialog, it can be multiple or single
		bool BeginDialog(HWND hWndParent, const wchar_t* caption, bool isMultiple);
		//Default extension is appended if the user does not provide one
		//SetFilter(L"Text Documents (*.txt)\0*.txt\0All Files (*.*)\0*.*\0\0", 0, L"txt");
		//The first pair of strings has an nFilterIndex value of 1, the second pair 2, and so on. 
		//An nFilterIndex of zero indicates the custom filter specified by lpstrCustomFilter.
		void SetFilter(const wchar_t* pszFilter, int nFilterIndex, const wchar_t* pszDefaultExtenstion);
		//Return the file name, only when is a multiple file
		vector<wstring> GetMultipleFileName();
		//Return the file name, only when is a single file
		const wchar_t* GetFileName();
		//Set the file name for the save folder
		bool SetFileName(const wchar_t* fileName);
		//Return full path and name of the file selected
		vector<wstring> GetMultipleFileNameFullPath();
		//Return full path and name of the file selected
		const wchar_t* GetFileNameFullPath();
		//Return the path of the file
		const wchar_t* GetFilePath();
		//Clean the selection
		void Clear();
		//Clean the file name
		void ClearFileName();
		//Return the working flder
		wstring& GetWorkingFolder();
		//Can be Set the working folder
		void SetWorkingFolder(const wstring& folderName);
		__declspec(property(get = GetWorkingFolder, put = SetWorkingFolder)) wstring WorkingFolder;
		//Return the file name
		wstring GetSelectedFileName();
		//Set the file name
		void SetSelectedFileName(const wstring fileName);
		__declspec(property(get = GetSelectedFileName, put = SetSelectedFileName)) wstring SelectedFileName;
		OPENFILENAME openFileName;
	private:
		wchar_t m_szFileName[WIN_FILEDLG_MAXPATH];
		wchar_t m_szPath[WIN_FILEDLG_MAXPATH];
		wchar_t m_szFilePath[WIN_FILEDLG_MAXPATH];
		wchar_t m_szDefaultExt[32];
		wchar_t m_szFilter[WIN_MAX_FILTER];
		static wchar_t m_szCustomFilter[WIN_MAX_FILTER];
		wstring _workingFolder;
	};
	class Screen {
	public:
		//Get screen size X, this is adaptative of each screen
		static int GetScreenSizeX();
		//Get screen size X, this is adaptative of each screen
		static int GetScreenSizeY();
		//Get half screen size Y, this is adaptative of each screen
		static int GetHalfScreenSizeX();
		//Get half screen size Y, this is adaptative of each screen
		static int GetHalfScreenSizeY();
	};
	class Text {
	public:
		//Replace only the first character found
		static bool ReplaceFirst(wstring& input, const wstring& from, const wstring& to);
		//Replace only the first character found
		static bool ReplaceFirst(string& input, const string& from, const string& to);
		//Replace all characters from any wstring to another
		static void ReplaceAll(wstring& input, const wstring& from, const wstring& to);
		//This gonna split a wstring based in a character, for example c = L"Hello World", AfterSplit = { L"Hello", L"World" }
		static vector<wstring> Split(wstring input, wchar_t byWhat);
		//Return wstring between two wstring, for example (L"Hace mucho \\ tiempo en * una...", L'\\', L'') = L" tiempo en "
		static wstring Extract(wstring input, wstring left, wstring right);
		//Convert all text in upper case
		static wstring ToUpper(wstring input);
		//Convert all text in upper case
		static wchar_t ToUpper(wchar_t input);
		//Convert all vector text in lower casr
		static void ToUpper(vector<wstring> &input);
		//Convert all vector<vector> in lower case
		static void ToUpper(vector<vector<wstring>> &input);
		//Convert all text in lower case
		static wstring ToLower(wstring input);
		//Convert all vector text in lower casr
		static void ToLower(vector<wstring> &input);
		//Convert all vector<vector> in lower case
		static void ToLower(vector<vector<wstring>> &input);
		//Convert all text in lower case
		static wchar_t ToLower(wchar_t input);
		//Capitalize all text, for example input = L"hola ángel cómo estás" output = L"Hola Ángel Cómo Estás"
		static void Capitalize(wstring &input);
		//Capitalize all vector text
		static void Capitalize(vector<wstring> &input);
		//Capitalize all vector<vector> text
		static void Capitalize(vector<vector<wstring>> &input);
		//This gonna joint a vector<wstring> based in a character, for example c = { L"Hello", L"World"}, AfterJoin = L"Hello World"
		static wstring Join(vector<wstring> input, wchar_t byWhat);
	};
	class File {
	public:
		//Return true if the file exists, and if not exists return false
		static bool Exists(wstring file);
		//Remember use GetLastErrorWindows() to get the error if exist
		static bool Copy(wstring existingFile, wstring newFile);
		//Remember use GetLastErrorWindows() to get the error if exist
		static bool Cut(wstring existingFile, wstring newFile);
		//Remember use GetLastErrorWindows() to get the error if exist
		static bool CreateFolder(wstring pathNewFolder);
		//Save a data stored in a wstring but in UTF-8
		static bool Save(wstring &data, wstring name, bool isUTF8);
		//Save a data stored in a vector<wstring> Line per Line, with a jump line between item and item vector but in UTF-8
		static bool Save(vector<wstring> &data, wstring name, bool isUTF8);
		//Save a data stored in a vector<wstring> Line per Line, with a jump line between item and item vector
		static bool Save(vector<wstring> &data, wstring name);
		//Save a data stored in a vector<string> Line per Line, with a jump line between item and item vector
		static bool Save(vector<string> &data, string name);
		//Save a data stored in a wstring to any file
		static bool Save(wstring data, wstring name);
		//Save a data stored in a string to any file
		static bool Save(string data, string name);
		//Open a file using the path, and it will be stored in a wstring
		static wstring Open(wstring root);
		//Open a big file, and return all file split in a vector<wstring>
		static vector<wstring> OpenL(wstring root);
		//Open a big file and encode or decode to base 64 or from base 64 file
		static bool OpenL64(wstring wpath, vector<string> &output, bool isEncode);
		//Return only the name of a file, example: input = L"C:\\Users\\User\\Desktop\\FileName.txt" output = L"FileName"
		static wstring GetName(wstring fileName);
		//Return only the extension of a file, example: input = L"C:\\Users\\User\\Desktop\\FileName.txt" output = L".txt"
		static wstring GetExtension(wstring fileName);
		/*Return only the path of a file, example: input = L"C:\\Users\\User\\Desktop\\FileName.txt" output = L"C:\\Users\\User\\Desktop\\*/
		static wstring GetPath(wstring fileName);
		//Return a list of the files or directories in a given path
		static vector<wstring> GetListFolder(wstring path);
		//Return the last window error, used after Copy, Cut, CreateFoler, etc..
		static wstring GetLastErrorWindows();
		//Return only the type of file, example: input = "C:\\Users\\User\\Desktop\\FileName.txt" output = L"txt"
		static wstring GetType(wstring filename);
	};
	 class Time {
	public:
		//Return the actual time using a format like: L"%d-%m-%y %H:%M:%S" -> 05-12-18  21:59:48 OR L"%a %b %Y %I:%M:%S" -> Fri Oct 2018 09:59:48
		static wstring GetCurrent(wstring format);
		//Return the actual time using a format like: "%d-%m-%y %H:%M:%S" -> 05-12-18  21:59:48 OR "%a %b %Y %I:%M:%S" -> Fri Oct 2018 09:59:48
		static string GetCurrent(string format);
		//Return if is a day off, or day break using Mexican Official Calendar
		static bool IsDayOff(Sys::Time t);
		//Return the number of the day in the week usign a letter name as input, example: Lunes->1, Martes->2, Miercoles->3, ..., Domingo->7
		//You can send a long date, Lunes Octubre 2018
		static int GetNumberDayWeek(wstring date);
		//Return the name of the day week number, example: 1->Lunes, 2->Martes, 3->Miércoles, ..., 7->Domingo
		static wstring GetDayWeekMX(int day);
		//Change a date from US to MX, for example 05 Dec 2018 to 05 Dic 2018
		static wstring ChangeDateUStoMX(wstring date);
		//Change a date from MX to US, for example 05 Dic 2018 to 05 Dec 2018
		static wstring ChangeDateMXtoUS(wstring date);
		//Return the time converted to Sys::Time giving a string date
		static Sys::Time GetFromString(wstring date);
	private:
		static vector<wstring> DayOfMonth(Sys::Time t);
	};
	class Wintempla {
	public:
		//Mouse is over an item
		static bool MouseIsOver(Win::ListView &lvAux, HWND &hWnd);
		//Copy all items from a dropDowList to another one
		static bool DropDownCopyValues(Win::DropDownList &from, Win::DropDownList &to);
		//Copy all items from a vector<wstring> to a dropDownList
		static bool DropDownCopyValues(vector<wstring> &from, Win::DropDownList &to);
		//Return all items from a dropDownList into a vector<wstring>
		static vector<wstring> DropDownGetItems(Win::DropDownList &ddList);
		class ProgressBar {
		public:
			//Open a large file, and display progress bar, you need to set the percentage. For example, 100% is normal, but if you have
			//more than one process set 50%, or 3 process that represent 100% choose 33%
			static vector<wstring> OpenL(wstring root, int percentage, Win::ProgressBar &pbAux);
			//Step In with update integrated
			static void StepIt(Win::ProgressBar &pbAux);
			//Set position of progress bar with update integrated
			static void SetPosition(int position, Win::ProgressBar &pbAux);
		};
		class Image {
		public:
			//Call a Open File Dialog, and save it in the image element
			static bool Open(HWND &hWnd, Win::Image &aux);
		};
		class ListView {
		public:
			//Fill out one value using the current text in the dropDownList
			static bool Fill(int nRow, int nColumn, Win::DropDownList &ddItem, Win::ListView &lvItems);
			//Fill out one value using the current text in the textBox
			static bool Fill(int nRow, int nColumn, Win::Textbox &tbxItem, Win::ListView &lvItems);
			//Fill out one value using the current text in the dateBox
			static bool Fill(int nRow, int nColumn, Win::DateTimeBox &dtbxItem, Win::ListView &lvItems);
			//Fill out one value using a double as input in the listView
			static bool Fill(int nRow, int nColumn, double value, Win::ListView &lvItems);
			//Fill out one value using a bool as input in the listView
			static bool Fill(int nRow, int nColumn, bool value, Win::ListView &lvItems);
			//Fill out one value using an int as input in the listView
			static bool Fill(int nRow, int nColumn, int value, Win::ListView &lvItems);
			//Fill out one value using a wstring as input in the listView
			static bool Fill(int nRow, int nColumn, wstring value, Win::ListView &lvItems);
			//Fill out all values in a listView
			static bool Fill(vector<vector<wstring>> &data, Win::ListView &lvItems);
			//Fill out an amount money give it in double in the listView, this add $ at begging
			static bool FillMoney(int nRow, int nColumn, double value, Win::ListView &lvItems);
		};
		class SQL {
		public:
			//Return an integer with the query request, example: (conn, hWnd, L"userx_id", L"userx", L"email = r.gomez@hotmail.com") -> 25
			static int Query(Sql::SqlConnection &conn, wstring select, wstring from, wstring wheres);
			//Return a wstring with the query request, example: (conn, hWnd, L"email", L"userx", L"userx_id = 25") -> L"r.gomez@hotmail.com"
			static wstring QueryW(Sql::SqlConnection &conn, wstring select, wstring from, wstring wheres);
			//Return an integer with the query request, example: (conn, hWnd, L"userx_id", L"userx", L"email = r.gomez@hotmail.com") -> 25
			static int Query(HWND &hWnd, wstring select, wstring from, wstring wheres);
			//Return a wstring with the query request, example: (conn, hWnd, L"email", L"userx", L"userx_id = 25") -> L"r.gomez@hotmail.com"
			static wstring QueryW(HWND &hWnd, wstring select, wstring from, wstring wheres);
		};
		class DropDownList {
		public:
			DropDownList(void)
			{
				this->selectedIndex = -1;
			}
			DropDownList(Win::DropDownList &ddList)
			{
				this->SetItems(ddList);
			}
			~DropDownList()
			{
			}
			//Return the current itemId, where selectedIndex is
			int GetItemId();
			//Return the value of the item, where selectedIndex is
			wstring GetText();
			//Set the selectedIndex, in case that is bigger or shorter than size of items do nothing and return false
			bool SetSelectedIndex(int index);
			//Return the current selectedIndex
			int GetSelectedIndex();
			//Set all items using the vector of data and the vector of id's
			bool SetItems(vector<wstring> &items, vector<int> item_id);
			//Set all items using a dropDownList as reference
			bool SetItems(Win::DropDownList &ddList);
			//Fill Out a DropDownList using the current data
			bool Fill(Win::DropDownList &ddList);
			//Return a vector<wstring> with all data
			vector<wstring> GetAllItems();
			//Add a single item
			bool AddItem(wstring item);
			//Add a single item given the id
			bool AddItem(wstring item, int item_id);
		protected:
			vector<wstring> item;
			vector<int> item_id;
			int selectedIndex;
		private:
			int GetLastItemID();
		};
		class ShowBalloonTip {
		public:
			//Verify if a textbox is empty and show an error if it doesn't
			static bool Empty(Win::Textbox &tbxAux, wstring title);
			//Verify if two textbox have same text and show an error if they don't, you need to set the gender of the
			//title word, for example: contraseña -> female so gender = false, RFC -> male so gender = true
			static bool Different(Win::Textbox &tbxAux1, Win::Textbox &tbxAux2, wstring title, bool isMale);
		};
	};
	class XSLT {
	public:
		XSLT()
		{
		}
		~XSLT()
		{
		}
		//===================================
		//		FUNCIONES PUBLICAS XSLT
		//===================================
		bool SetXSLTemplateFromWstring(wstring xslTemplate);
		bool SetXSLTemplateFromFile(wstring root);
		bool SetXMLFromWstring(wstring xml);
		bool SetXMLFromFile(wstring root);
		wstring GetXSL();
	private:
		//===================================
		//		VARIABLES PRIVADAS XSLT
		//===================================
		wstring xslTemplate;
		wstring xml;
	protected:
		wstring xsl;
		void GenerateXSLT();
	};
	class Correct {
	public:
		//===================================
		//		FUNCIONES PUBLICAS VERIFY
		//===================================
		static wstring Double(wstring input, int NAP_CV_DOUBLE);
		static wstring XMLtoHTML(wstring html);
		class XML {
		public:
			static bool DeleteChild(Sys::Xml &xmlObjext, wstring childName, wstring fatherName);
			static bool ChangeChildName(Sys::Xml &xmlObjext, wstring oldChild, wstring newChild);
		};
	};
	class Verify {
	public:
		class RegularExpression {
		public:
			//===================================
			//		FUNCIONES REGULAR EXPRESSION
			//===================================
			//Puedes usar constantes NAP_VERIFY_REGULAREXPRESSION_
			static bool Wstring(const char *RegularExpression, wstring data);
		};
		//===================================
		//		FUNCIONES PUBLICAS VERIFY
		//===================================
		static int Double(wstring input);
		static bool IsHTML(wstring text);
	};
	class Convert {
	public:
		//===================================
		//		FUNCIONES PUBLICAS CONVERT
		//===================================
		static vector<wstring> ToWstring(vector<string> input);
		static wstring ToWstring(string input);
		static wstring ToWstring(double input);
		static wstring ToWstring(double input, int setPresicion);
		static wstring ToWstring(int input);
		static wstring ToWstring(bool input, bool isBinary);
		static string ToString(wstring input);
		static string ToString(int input);
		static string ToUTF8(wstring input);
		static double ToDouble(wstring input);
		static int ToInt(wstring input);
		static int ToInt(string input);
		static const char* ToChar(wstring input);

	};
	class Encrypting {
	public:
		//===================================
		//		FUNCIONES PUBLICAS ENCRYPTING
		//===================================
		static string Base64(string input);
		static string Base64(string input, size_t len);
		static string Base64(const char* input, size_t len);
		static wstring Base64(wstring input);
		static vector<string> Base64L(const char* input, size_t len);
		static wstring Cesar(wstring input, int id);
	private:
		//===================================
		//		FUNCIONES PRIVADAS ENCRYPTING
		//===================================
		static void Encode64(const char* input, string& output, char *table);
		static void Encode64(const wstring &input, wstring &output, wchar_t *table, int &length);
	};
	class Decrypting {
	public:
		//===================================
		//		FUNCIONES PUBLICAS DECRYPTING
		//===================================
		static string Base64(string input);
		static wstring Base64(wstring input);
		static wstring Cesar(wstring input, int id);
	private:
		//===================================
		//		FUNCIONES PRIVADAS DECRYPTING
		//===================================
		static void Decode64(const wstring &input, wstring &output, int &length);
		static void Decode64(const string &input, string &output, int &length);
	};
	class PDF {
	public:
		PDF() {
			this->settingGPDF = wkhtmltopdf_create_global_settings();
			SetNormalSetting(NAP_PDF_PAPERSIZE_LETTER, NAP_PDF_ORIENTATION_LANDSCAPE, NAP_PDF_COLORMODE_COLOR);
			this->settingOPDF = wkhtmltopdf_create_object_settings();
			wkhtmltopdf_set_object_setting(settingOPDF, "load.blockLocalFileAccess", "false");
			this->convertPDF = nullptr;
			wkhtmltopdf_init(false);
		}
		~PDF() {
			wkhtmltopdf_destroy_global_settings(settingGPDF);
			wkhtmltopdf_destroy_object_settings(settingOPDF);
			if (this->convertPDF != nullptr) wkhtmltopdf_destroy_converter(this->convertPDF);
			wkhtmltopdf_deinit();
		}
		//===================================
		//		FUNCIONES PUBLICAS PDF
		//===================================
		bool CreatePDF(wstring rootDestiny);
		bool SetNormalSetting(string paperSize, string orientation, string colorMode);
		bool SetSettingPaperSize(string paperSize);
		bool SetSettingOrientation(string orientation);
		bool SetSettingColorMode(string colorMode);
		bool SetPDFfromHTML(wstring html);
		bool SetPDFfromHTML(string html);
	protected:
		//===================================
		//		VARIABLES PROTEGIDAS PDF
		//===================================
		wkhtmltopdf_global_settings *settingGPDF;
		wkhtmltopdf_object_settings *settingOPDF;
		wkhtmltopdf_converter *convertPDF;
		string html;
	};
	class Design {
	public:
		//===================================
		//		FUNCIONES PUBLICAS DESIGN
		//===================================
		class AutoCenter {
		public:
			AutoCenter() {
				this->sizeX = 0.0;
				this->sizeY = 0.0;
			}
			~AutoCenter() {}
			//______________Functions
			void Element(Win::Button &btAux);
			void ElementX(Win::Button &btAux);
			void ElementY(Win::Button &btAux);
			//______________SetFunctions
			void SetReferenceSizeX(int sizeReferenceX);
			void SetReferenceSizeY(int sizeReferenceY);
			void SetReferenceSize(int sizeReferenceX, int sizeReferenceY);
		private:
			//_____________InitialVariables
			double sizeX;
			double sizeY;
		};
		class AutoSizeWGbox {
		public:
			AutoSizeWGbox(double sizeX, double sizeY) {
				this->sizeX = sizeX;
				this->sizeY = sizeY;
				this->isFirstOne = true;
				this->isFirstTwo = true;
			}
			~AutoSizeWGbox() {}
			//______________SetSizeX
			void SetX(Win::Button &btAux);
			//______________SetSizeY
			void SetY(Win::Button &btAux);
			//______________Both
			void SetGbox(Win::Button &btAux);
		private:
			//_____________InitialVariables
			double sizeX;
			double sizeY;
			bool isFirstOne;
			bool isFirstTwo;
		};
		class AutoPositionWGbox {
		public:
			AutoPositionWGbox(double sizeX, double sizeY) {
				this->sizeX = sizeX;
				this->sizeY = sizeY;
				this->constantPositionY = 0.0;
				this->currentPositionY = 0.0;
				this->constantPositionXLeft = 0.0;
				this->constantPositionXRight = 0.0;
				
			}
			~AutoPositionWGbox() {}
			//______________SetPositionY
			void SetY(Win::Button &btAux);
			void SetY(Win::Textbox &tbxAux, Win::Label &lbAux);
			void SetY(Win::DateTimeBox &dtboxAux, Win::Label &lbAux);
			void SetY(Win::DropDownList &ddListAux, Win::Label &lbAux);
			void SetY(Win::Textbox &tbxAux, Win::Label &lbAux1, Win::Label &lbAux2);			
			void SetY(Win::Button &ckButton1, Win::Button &ckButton2, Win::Label &lbAux);
			//______________SetPositionX
			void SetX(Win::Button &btAux);
			//______________Both
			void Set(Win::Button &btAux);
			//______________SetFunctions
			void SetGbox(Win::Button &btAux);
			void SetConstantPositionY(double constantPositionY);
			void SetConstantPositionX(double constantPositionXLeft, double constantPositionXRight);
			void SetCurrentPositionY(double SetCurrentPositionY);
			void SetCurrentPositionX(double SetCurrentPositionX);
		private:
			//_____________InitialVariables
			double sizeY;
			double sizeX;
			double constantPositionY;
			double currentPositionY;
			double currentPositionX;
			double constantPositionXLeft;
			double constantPositionXRight;
		};
		class Element {
		public:
			//===================================
			//		FUNCIONES PUBLICAS Activate
			//===================================
			//__________________Activate
			static void Activate(Win::Button &btAux);
			static void Activate(Win::Button &btAux1, Win::Button &btAux2);
			//__________________Deactivate
			static void Deactivate(Win::Button &btAux);
			static void Deactivate(Win::Button &btAux1, Win::Button &btAux2);
		};
	};
};