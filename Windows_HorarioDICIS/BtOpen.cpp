// BtOpen.cpp
#include "stdafx.h"
#include "BtOpen.h"

bool BtOpen::isRegistered = false;

BtOpen::BtOpen()
{
	if (!this->isRegistered)
	{

		this->RegisterClassEx(
			LoadCursor(NULL, IDC_ARROW), // Cursor: IDC_IBEAM, IDC_WAIT, IDC_CROSS, ...
			(HBRUSH)(COLOR_BTNFACE + 1)); //Background:  (HBRUSH)(COLOR_WINDOW+1)), ::GetStockObject(BLACK_BRUSH)...
		this->isRegistered = true;
	}
}

BtOpen::~BtOpen()
{
}

int BtOpen::WhereIsCursor()
{
	return this->mouseCursor;
}

void BtOpen::SetMouseCursor(int mouseCursor)
{
	if (WhereIsCursor() != mouseCursor) {
		this->mouseCursor = mouseCursor;
		switch (mouseCursor)
		{
		case NAP_MOUSE_IS_CLICK:
			backgroundC.SetFromCOLORREF(RGB(11, 84, 139));
			break;
		case NAP_MOUSE_IS_OVER:
			backgroundC.SetFromCOLORREF(RGB(97, 107, 109));
			break;
		case NAP_MOUSE_IS_NOTOVER:
			backgroundC.SetFromCOLORREF(RGB(93, 160, 229));
			break;
		default:
			break;
		}
		this->Repaint(NULL, true);
	}
}


void BtOpen::Window_Open(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
}

void BtOpen::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, true);
	Gdiplus::SolidBrush brush(backgroundC);
	gdi.Plus.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
	gdi.Plus.FillRectangle(&brush, 0, 0, this->Width, this->Height);
	//
	brush.SetColor(Gdiplus::Color::White);
	Gdiplus::REAL radio = 5;
	Gdiplus::REAL half = float(this->Height / 2.0 - (radio / 2.0));
	gdi.Plus.FillEllipse(&brush, float(this->Width * 0.25 - (radio / 2)), half, radio, radio);
	gdi.Plus.FillEllipse(&brush, float(this->Width * 0.5 - (radio / 2)), half, radio, radio);
	gdi.Plus.FillEllipse(&brush, float(this->Width * 0.75 - (radio / 2)), half, radio, radio);
}

void BtOpen::Window_Size(Win::Event& e)
{
}

void BtOpen::SetFont(Win::Gdi::Font& font)
{
	this->_hFont = font.GetHFONT();
	::InvalidateRect(hWnd, NULL, FALSE);
}

bool BtOpen::IsEvent(Win::Event& e, int notification)
{
	if (e.uMsg != WM_COMMAND) return false;
	const int id = LOWORD(e.wParam);
	const int notificationd = HIWORD(e.wParam);
	if (id != this->id) return false;
	if (notificationd != notification) return false;
	return true;
}

void BtOpen::Window_LButtonDown(Win::Event& e)
{
	Win::HourGlassCursor hgc(true);
	this->SetMouseCursor(NAP_MOUSE_IS_CLICK);
	if (Enabled == false) return;
	HWND nWndParent = ::GetParent(hWnd);
	::SendMessage(nWndParent, WM_COMMAND, MAKEWPARAM(this->id, WIN_CLICK), e.lParam);
	::SetFocus(hWnd);
}

void BtOpen::Window_LButtonUp(Win::Event& e)
{
	this->SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
	if (Enabled == false) return;
	::SetFocus(hWnd);
}

void BtOpen::Window_MouseMove(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IS_OVER);
}

void BtOpen::Window_Activate(Win::Event& e)
{
	const bool activated = (e.wParam != WA_INACTIVE);
	e.returnValue = 0;
}