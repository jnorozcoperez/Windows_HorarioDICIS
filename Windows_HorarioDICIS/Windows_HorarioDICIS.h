#pragma once  //______________________________________ Windows_HorarioDICIS.h  
#include "Resource.h"
#include "BtOpen.h"
#include "BtLvExcel.h"
#include "BtUpload.h"
constexpr auto WORK_ID = 100;
class Windows_HorarioDICIS: public Win::Window, public Mt::IThread
{
public:
	Windows_HorarioDICIS()
	{
		mouseCursor = 0;
		isExcel = false;
		isPDFReady = false;
		::SetRectEmpty(&rectWindow);
		::SetRectEmpty(&rectOldWindow);
		::SetRectEmpty(&rectOldClientArea);
		//______________Funciones de actualización
		win_sparkle_set_appcast_url("https://yivootr0pfmu5k7zrytncw-on.drv.tw/Server/Update.xml");
		win_sparkle_set_app_build_version(L"1.0.0.0");
		win_sparkle_set_app_details(L"HorarioDICIS", L"Horario DICIS", L"1.0.0.0");
		win_sparkle_set_automatic_check_for_updates(1);
		win_sparkle_set_dsa_pub_pem("MEQCICh10SofkNHa5iJgVWDi2O8RBYyN+nxkFEL7u/tBuWboAiB6VOV/WQMRJE+kRoICZXAhq5b24WkgqcDs0z7gyBkGVw==");
		win_sparkle_set_lang("es-MX");
		win_sparkle_set_registry_path("Software\\Microsoft\\HorarioDICIS");
		win_sparkle_set_update_check_interval(25200);
		win_sparkle_init();
	}
	~Windows_HorarioDICIS()
	{
		win_sparkle_cleanup();
	}
	wstring root;
	bool isExcel;
	wstring xmlFinal;
	//____________Create PDF
	bool isPDFReady;
	Nap::PDF pdfCreator;
	//____________Excel File
	Nap::ExcelFile excelFile;
	void Adjust(Sys::Xml &xmlAux, wstring listOld, wstring listNew);
	//____________Non Client Area
	Win::TitleBarButton buttonWindowIcon;
	Win::TitleBarButton buttonMinimize;
	Win::TitleBarButton buttonClose;
	CG::Region regionWindow;
	RECT rectOldClientArea;
	bool isWindowActive;
	RECT rectOldWindow;
	RECT rectWindow;
	//____________Mouse painting
	void TurnOff();
	int mouseCursor;
	int WhereIsCursor();
	void RepaintNonClientArea();
	void DrawNonClientArea(CG::Gdi& gdi);
	void SetMouseCursor(int mouseCursor, int state);
	//____________Multithreading
	Mt::ThreadObject threadObject;
	DWORD ThreadFunc(Mt::BoolTs& cancel, Mt::DecimalTs& progress, Mt::BoolTs& resetTime);
	const wchar_t * GetClassName() { return L"Windows_HorarioDICIS"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxPath;
	Win::Image imgLogoUG;
	Win::Label lbUpload;
	Win::ProgressBar pbUpload;
	Win::ListView lvExcel;
	Win::Toolbar toolbExcel;
	BtOpen customControlOpen;
	BtUpload customControlBtUpload;
	BtLvExcel customControlBtExcel;
protected:
	Win::Gdi::Font fontArial009A;
	Win::Gdi::Font fontArial012A;
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.dwExStyle = WS_EX_TRANSPARENT;
		createStruct.style = WS_CLIPCHILDREN;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Sincronizador de Horarios";
		tbxPath.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_DISABLED | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.93133, 3.85233, 9.18633, 0.55033, hWnd, 1000);
		imgLogoUG.CreateX(WS_EX_TRANSPARENT, NULL, WS_CHILD | WS_DISABLED | WS_VISIBLE, 0.93133, 0.12700, 9.14400, 2.89983, hWnd, 1001);
		lbUpload.CreateX(NULL, L"Subir", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.05417, 6.56167, 1.05833, 0.55033, hWnd, 1002);
		pbUpload.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE, 0.93133, 5.48217, 8.25500, 0.55033, hWnd, 1003);
		lvExcel.CreateX(NULL, NULL, WS_CHILD | WS_HSCROLL | WS_TABSTOP | WS_VSCROLL | LVS_REPORT, 13.84300, 0.63500, 13.27150, 6.56167, hWnd, 1004);
		toolbExcel.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | CCS_NORESIZE | CCS_NOPARENTALIGN | CCS_ADJUSTABLE | CCS_NODIVIDER | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS, 25.97150, 0.00000, 1.14300, 0.61383, hWnd, 1005);
		customControlOpen.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE, 10.45633, 3.85233, 0.93133, 0.55033, hWnd, 1006);
		customControlBtUpload.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE, 9.67317, 5.16467, 1.71450, 1.16417, hWnd, 1007);
		customControlBtExcel.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE, 12.74233, 0.00000, 0.88900, 7.19667, hWnd, 1008);
		lvExcel.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		fontArial012A.CreateX(L"Arial", 0.423333, false, false, false, false);
		tbxPath.Font = fontArial009A;
		lbUpload.Font = fontArial012A;
		pbUpload.Font = fontArial009A;
		lvExcel.Font = fontArial009A;
		customControlOpen.Font = fontArial009A;
		customControlBtUpload.Font = fontArial009A;
		customControlBtExcel.Font = fontArial009A;
		lbUpload.BackColor = RGB(48, 58, 60);
		lbUpload.TextColor = RGB(255, 255, 255);
	}
	//_________________________________________________
	void lbUpload_CtlColorStatic(Win::Event& e);
	void customControlOpen_Click(Win::Event& e);
	void customControlBtUpload_Click(Win::Event& e);
	void customControlBtExcel_Click(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	void Window_NcActivate(Win::Event& e);
	void Window_NcCalcSize(Win::Event& e);
	void Window_NcCreate(Win::Event& e);
	void Window_NcLButtonDown(Win::Event& e);
	void Window_NcLButtonUp(Win::Event& e);
	void Window_NcMouseMove(Win::Event& e);
	void Window_NcPaint(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_User(Win::Event& e);
	void Cmd_Delete(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (lbUpload.IsEvent(e, WM_CTLCOLORSTATIC)) {lbUpload_CtlColorStatic(e); return true;}
		if (customControlOpen.IsEvent(e, WIN_CLICK)) {customControlOpen_Click(e); return true;}
		if (customControlBtUpload.IsEvent(e, WIN_CLICK)) {customControlBtUpload_Click(e); return true;}
		if (customControlBtExcel.IsEvent(e, WIN_CLICK)) {customControlBtExcel_Click(e); return true;}
		if (this->IsEvent(e, IDM_DELETE)) {Cmd_Delete(e); return true;}
		return false;
	}
};
