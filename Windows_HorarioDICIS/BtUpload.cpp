// BtUpload.cpp
#include "stdafx.h"
#include "BtUpload.h"

bool BtUpload::isRegistered= false;

BtUpload::BtUpload()
{	
	if (!this->isRegistered)
	{
		 
		this->RegisterClassEx(
			LoadCursor(NULL, IDC_ARROW), // Cursor: IDC_IBEAM, IDC_WAIT, IDC_CROSS, ...
			(HBRUSH)(COLOR_BTNFACE+1)); //Background:  (HBRUSH)(COLOR_WINDOW+1)), ::GetStockObject(BLACK_BRUSH)...
		this->isRegistered = true;
	}
}

BtUpload::~BtUpload()
{
}

void BtUpload::Window_Open(Win::Event& e)
{
}

void BtUpload::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, false);
	//gdi.SelectFont__(_hFont);
}

void BtUpload::Window_Size(Win::Event& e)
{
}

void BtUpload::SetFont(Win::Gdi::Font& font)
{
	this->_hFont = font.GetHFONT();
	::InvalidateRect(hWnd, NULL, FALSE);
}

bool BtUpload::IsEvent(Win::Event& e, int notification)
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

//void BtUpload::Window_Char(Win::Event& e)
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

//void BtUpload::Window_KeyDown(Win::Event& e)
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

//void BtUpload::Window_KeyUp(Win::Event& e)
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

//void BtUpload::Window_SetFocus(Win::Event& e)
//{
//}

//void BtUpload::Window_KillFocus(Win::Event& e)
//{
//}

//void BtUpload::Window_LButtonDblclk(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

//void BtUpload::Window_LButtonDown(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//	::SetFocus(hWnd);
//}

//void BtUpload::Window_LButtonUp(Win::Event& e)
//{
//	const int x = GET_X_LPARAM(e.lParam);
//	const int y = GET_Y_LPARAM(e.lParam);
//}

//void BtUpload::Window_MouseMove(Win::Event& e)
//{
//	const int x = LOWORD(e.lParam);
//	const int y = HIWORD(e.lParam);
//}

// The control needs to have the focus
//void BtUpload::Window_MouseWheel(Win::Event& e)
//{
//	if ((short) HIWORD (e.wParam) > 0)
//	{	
//	}
//	else
//	{
//	}
//}


