// BtLvExcel.cpp
#include "stdafx.h"
#include "BtLvExcel.h"

bool BtLvExcel::isRegistered= false;

BtLvExcel::BtLvExcel()
{	
	if (!this->isRegistered)
	{
		 
		this->RegisterClassEx(
			LoadCursor(NULL, IDC_ARROW), // Cursor: IDC_IBEAM, IDC_WAIT, IDC_CROSS, ...
			(HBRUSH)(COLOR_BTNFACE+1)); //Background:  (HBRUSH)(COLOR_WINDOW+1)), ::GetStockObject(BLACK_BRUSH)...
		this->isRegistered = true;
	}
}

BtLvExcel::~BtLvExcel()
{
}

void BtLvExcel::Window_Open(Win::Event& e)
{
}

void BtLvExcel::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, false);
	//gdi.SelectFont__(_hFont);
}

void BtLvExcel::Window_Size(Win::Event& e)
{
}

void BtLvExcel::SetFont(Win::Gdi::Font& font)
{
	this->_hFont = font.GetHFONT();
	::InvalidateRect(hWnd, NULL, FALSE);
}

bool BtLvExcel::IsEvent(Win::Event& e, int notification)
{
//	if (e.uMsg == WM_NOTIFY)
//	{
//		NMHDR* pNMHDR= (LPNMHDR)e.lParam; 
//		if (pNMHDR->hwndFrom!=this->GetHWND()) return false;
//		if (notification == WIN_ALL_EVENTS)
//		{
//			// Your code here
//			return true;
//		}
//		if (pNMHDR->code!=notification) return false; 
//		return true;
//	}
//
	if (e.uMsg!=WM_COMMAND) return false;
	const int id = LOWORD(e.wParam);
	const int notificationd = HIWORD(e.wParam);
	if (id != this->id) return false;
	if (notificationd!=notification) return false;
	return true;
}

//void BtLvExcel::Window_Char(Win::Event& e)
//{
//	switch (e.wParam)
//	{
//	case 0x08:  // backspace 
//	case 0x0A:  // linefeed 
//	case 0x1B:  // escape 
//		break;
//	case 'A':
//		break;
//	}
//}

//void BtLvExcel::Window_KeyDown(Win::Event& e)
//{
//	switch (e.wParam)
//	{
//	case VK_SHIFT:
//		break;
//	case VK_UP:
//		break;
//	case 'A':
//		break;
//	}
//}

//void BtLvExcel::Window_KeyUp(Win::Event& e)
//{
//	switch (e.wParam)
//	{
//	case VK_SHIFT:
//		break;
//	case VK_UP:
//		break;
//	case 'A':
//		break;
//	}
//}

//void BtLvExcel::Window_SetFocus(Win::Event& e)
//{
//}

//void BtLvExcel::Window_KillFocus(Win::Event& e)
//{
//}

//void BtLvExcel::Window_LButtonDblclk(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

//void BtLvExcel::Window_LButtonDown(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//	::SetFocus(hWnd);
//}

//void BtLvExcel::Window_LButtonUp(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

//void BtLvExcel::Window_MouseMove(Win::Event& e)
//{
//	const int x = LOWORD(e.lParam);
//	const int y = HIWORD(e.lParam);
//}

// The control needs to have the focus
//void BtLvExcel::Window_MouseWheel(Win::Event& e)
//{
//	if ((short) HIWORD (e.wParam) > 0)
//	{	
//	}
//	else
//	{
//	}
//}


