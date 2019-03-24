// BtLvExcel.cpp
#include "stdafx.h"
#include "BtLvExcel.h"

bool BtLvExcel::isRegistered = false;

BtLvExcel::BtLvExcel()
{
	if (!this->isRegistered)
	{

		this->RegisterClassEx(
			LoadCursor(NULL, IDC_ARROW), // Cursor: IDC_IBEAM, IDC_WAIT, IDC_CROSS, ...
			(HBRUSH)(COLOR_BTNFACE + 1)); //Background:  (HBRUSH)(COLOR_WINDOW+1)), ::GetStockObject(BLACK_BRUSH)...
		this->isRegistered = true;
	}
}

BtLvExcel::~BtLvExcel()
{
}

int BtLvExcel::WhereIsCursor()
{
	return this->mouseCursor;
}

void BtLvExcel::SetMouseCursor(int mouseCursor)
{
	if (WhereIsCursor() != mouseCursor) {
		this->mouseCursor = mouseCursor;
		switch (mouseCursor)
		{
		case NAP_MOUSE_IS_CLICK:
			//penC.SetFromCOLORREF(RGB(11, 84, 139));
			//backgroundC.SetFromCOLORREF(RGB(87, 97, 99));
			break;
		case NAP_MOUSE_IS_OVER:
			penC.SetFromCOLORREF(RGB(255, 255, 255));
			break;
		case NAP_MOUSE_IS_NOTOVER:
			penC.SetFromCOLORREF(RGB(200, 200, 200));
			break;
		default:
			break;
		}
		this->Repaint(NULL, true);
	}
}

void BtLvExcel::Window_Open(Win::Event& e)
{
	backgroundC.SetFromCOLORREF(RGB(48, 58, 60));
	this->SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
	halfY = float(this->Height * 0.5);
	halfX = float(this->Width * 0.5);
	isOpen = false;
	isActive = true;
	m = 1;
}

void BtLvExcel::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, true);
	Gdiplus::SolidBrush brush(backgroundC);
	//Draw background of customControl
	gdi.Plus.SetSmoothingMode(Gdiplus::SmoothingModeHighSpeed);
	gdi.Plus.FillRectangle(&brush, -1, -1, this->Width + 1, this->Height + 1);
	gdi.Plus.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
	//Draw arrow in the custom control
	Gdiplus::Pen pen(penC, float(5.0 * Nap::Screen::GetProportionY()));
	if (isOpen) {
		gdi.Plus.DrawLine(&pen, float(halfX + (0.17 * this->Width)), float(halfY + (0.04 * this->Height)), float(halfX - (0.17 * this->Width)), halfY - m);
		gdi.Plus.DrawLine(&pen, float(halfX + (0.17 * this->Width)), float(halfY - (0.04 * this->Height)), float(halfX - (0.17 * this->Width)), halfY + m);
	}
	else {
		gdi.Plus.DrawLine(&pen, float(halfX - (0.17 * this->Width)), float(halfY - (0.04 * this->Height)), float(halfX + (0.17 * this->Width)), halfY + m);
		gdi.Plus.DrawLine(&pen, float(halfX - (0.17 * this->Width)), float(halfY + (0.04 * this->Height)), float(halfX + (0.17 * this->Width)), halfY - m);
	}
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
	if (e.uMsg != WM_COMMAND) return false;
	const int id = LOWORD(e.wParam);
	const int notificationd = HIWORD(e.wParam);
	if (id != this->id) return false;
	if (notificationd != notification) return false;
	return true;
}


void BtLvExcel::Window_LButtonDown(Win::Event& e)
{
	Win::HourGlassCursor hgc(true);
	this->SetMouseCursor(NAP_MOUSE_IS_CLICK);
	if (Enabled == false) return;
	HWND nWndParent = ::GetParent(hWnd);
	::SendMessage(nWndParent, WM_COMMAND, MAKEWPARAM(this->id, WIN_CLICK), e.lParam);
	::SetFocus(hWnd);
}

void BtLvExcel::Window_LButtonUp(Win::Event& e)
{
	this->SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
}

void BtLvExcel::Window_MouseMove(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IS_OVER);
}

bool BtLvExcel::ChangeDoor()
{
	this->isOpen = !isOpen;
	this->Repaint(NULL, true);
	return this->isOpen;
}