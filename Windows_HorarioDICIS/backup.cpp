#include "stdafx.h"  //________________________________________ Windows_HorarioDICIS.cpp
#include "Windows_HorarioDICIS.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Windows_HorarioDICIS app;
	return app.BeginDialog(IDI_Windows_HorarioDICIS, hInstance);
}

void Windows_HorarioDICIS::Window_Open(Win::Event& e)
{
	//________________________________________________________ imgLogoUG
	imgLogoUG.SetBitmap(hInstance, IDB_LOGOUG);
	this->root = Nap::GetCurrentPathWork();
	//________________________________________________________ pbUpload
	pbUpload.SetVisible(false);
	pbUpload.SetRange(1, 100);
	pbUpload.SetBackColor(RGB(180, 180, 180));
	Nap::Screen::GetHalfScreenSizeX();

	//________________________________________________________ lvExcel
	lvExcel.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
	lvExcel.Cols.Add(1, LVCFMT_RIGHT, 200, L"Activity");
	lvExcel.Items.Add(0, L"Monday");
	lvExcel.Items[0][1].Text = L"Math Class";
}

void Windows_HorarioDICIS::lbUpload_CtlColorStatic(Win::Event& e)
{
}

void Windows_HorarioDICIS::customControlOpen_Click(Win::Event& e)
{
	const int x=(int)(short)LOWORD(e.lParam);
	const int y=(int)(short)HIWORD(e.lParam);
}

void Windows_HorarioDICIS::customControlBtUpload_Click(Win::Event& e)
{
	const int x=(int)(short)LOWORD(e.lParam);
	const int y=(int)(short)HIWORD(e.lParam);
}

void Windows_HorarioDICIS::customControlBtExcel_Click(Win::Event& e)
{
	const int x=(int)(short)LOWORD(e.lParam);
	const int y=(int)(short)HIWORD(e.lParam);
}

void Windows_HorarioDICIS::Window_User(Win::Event& e)
{
	if (e.lParam == WORK_ID) {
		threadObject.WaitForExit();
		this->EnableCloseButton(true);
	}
}

DWORD Windows_HorarioDICIS::ThreadFunc(Mt::BoolTs& cancel, Mt::DecimalTs& progress, Mt::BoolTs& resetTime) {
	Win::FileDlg dlg;
	dlg.Clear();
	dlg.SetFilter(L"Excel Files (*.xlsx)\0*.xlsx\0Excel Files 97-2003 (*.xls)\0*.xls\0\0\0", 0, L"*.*");
	if (dlg.BeginDialog(hWnd, L"Open File", false) == TRUE) {
		//Abrir archivo excel y pocesarlo
	}
	return 0;
}
