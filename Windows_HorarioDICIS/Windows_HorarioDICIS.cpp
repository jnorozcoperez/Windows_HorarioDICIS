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
}

void Windows_HorarioDICIS::lbUpload_CtlColorStatic(Win::Event& e)
{
}

void Windows_HorarioDICIS::customControlOpen_Click(Win::Event& e)
{
	this->EnableCloseButton(false);
	threadObject.StartThread(*this);
}

void Windows_HorarioDICIS::customControlBtUpload_Click(Win::Event& e)
{
	if (xmlFinal.empty()) return;
	Nap::Email::SMTP email(L"sch.dicis@gmail.com", L"10071994JnOp_Chicken");
	pbUpload.SetVisible(true);
	email.SetProgressBar(pbUpload);
	if (email.SendFileGoogle(root + L"\\xmlFinal.xml")) {
		this->MessageBox(L"Email error", L"Error", MB_OK | MB_ICONERROR);
	}
	this->MessageBox(L"File was uploaded", L"Done", MB_OK | MB_ICONINFORMATION);
	Nap::Wintempla::ProgressBar::SetPosition(0, pbUpload);
	pbUpload.SetVisible(false);
}

void Windows_HorarioDICIS::customControlBtExcel_Click(Win::Event& e)
{
	if (isExcel) {
		
	}
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
void Windows_HorarioDICIS::Window_MouseMove(Win::Event& e)
{
	const short x = GET_X_LPARAM(e.lParam);
	const short y = GET_Y_LPARAM(e.lParam);
}

void Windows_HorarioDICIS::Window_NcActivate(Win::Event& e)
{
	const bool isActive = (e.wParam == TRUE);
	e.returnValue = ::DefWindowProc(hWnd, WM_NCACTIVATE, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcCalcSize(Win::Event& e)
{
	if (e.wParam == TRUE)
	{
		NCCALCSIZE_PARAMS* calcSize_Params = (NCCALCSIZE_PARAMS*)e.lParam;
		RECT rectWindow = calcSize_Params->rgrc[0]; // the proposed new window coordinates.
		RECT rectOldWindow = calcSize_Params->rgrc[1]; // the window before it was moved or resized
		RECT rectOldClientArea = calcSize_Params->rgrc[2]; // window's client area before the window was moved or resized
	}
	e.returnValue = ::DefWindowProc(hWnd, WM_NCCALCSIZE, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcCreate(Win::Event& e)
{
	e.returnValue = ::DefWindowProc(hWnd, WM_NCCREATE, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcHitTest(Win::Event& e)
{
	e.returnValue = ::DefWindowProc(hWnd, WM_NCHITTEST, e.wParam, e.lParam);
	//switch (e.returnValue)r
	//{r
	//case HTCLOSE:r
	//case HTMAXBUTTON:r
	//case HTMINBUTTON:r
	//case HTSYSMENU:r
	//case HTNOWHERE:r
	//case HTHELP:r
	//case HTERROR:r
	//}r
}

void Windows_HorarioDICIS::Window_NcLButtonDown(Win::Event& e)
{
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	POINT point;
	point.x = GET_X_LPARAM(e.lParam) - rc.left;
	point.y = GET_Y_LPARAM(e.lParam) - rc.top;
	e.returnValue = ::DefWindowProc(hWnd, WM_NCLBUTTONDBLCLK, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcLButtonUp(Win::Event& e)
{
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	POINT point;
	point.x = GET_X_LPARAM(e.lParam) - rc.left;
	point.y = GET_Y_LPARAM(e.lParam) - rc.top;
	e.returnValue = ::DefWindowProc(hWnd, WM_NCLBUTTONDBLCLK, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcMouseMove(Win::Event& e)
{
	RECT rc;
	::GetWindowRect(hWnd, &rc);
	POINT point;
	point.x = GET_X_LPARAM(e.lParam) - rc.left;
	point.y = GET_Y_LPARAM(e.lParam) - rc.top;
	e.returnValue = ::DefWindowProc(hWnd, WM_NCLBUTTONDBLCLK, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_NcPaint(Win::Event& e)
{
	RECT rect;
	::GetWindowRect(hWnd, &rect);
	const int cx = rect.right - rect.left;
	const int cy = rect.bottom - rect.top;
	//____________________________ Get an HDC
	HDC hdc = NULL;
	HRGN region = NULL;
	if (e.wParam == 1)
	{
		region = CreateRectRgn(rect.left, rect.top, rect.right, rect.bottom);
		hdc = GetDCEx(hWnd, region, DCX_WINDOW|DCX_CACHE|DCX_INTERSECTRGN|DCX_LOCKWINDOWUPDATE);
	}
	else
	{
		hdc = GetDCEx(hWnd, (HRGN)e.wParam, DCX_WINDOW|DCX_CACHE|DCX_INTERSECTRGN|DCX_LOCKWINDOWUPDATE);
	}
	if (hdc == NULL) return;
	//___________________________ Change the rect to window coordinates
	rect.left = 0;
	rect.top = 0;
	rect.right = cx;
	rect.bottom = cy;
	HBRUSH brush = ::CreateSolidBrush(RGB(0, 0, 250));
	::FillRect(hdc, &rect, brush);
	::DeleteObject(brush);
	::ReleaseDC(hWnd, hdc);
	::RedrawWindow(hWnd, &rect, (HRGN)e.wParam, RDW_UPDATENOW);
	//e.returnValue = ::DefWindowProc(hWnd, WM_NCPAINT, e.wParam, e.lParam);
}

void Windows_HorarioDICIS::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, false);
}

