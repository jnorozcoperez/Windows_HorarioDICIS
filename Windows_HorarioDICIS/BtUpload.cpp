// BtUpload.cpp
#include "stdafx.h"
#include "BtUpload.h"

bool BtUpload::isRegistered = false;
CG::Brush BtUpload::brushBackground;

BtUpload::BtUpload()
{
	if (!this->isRegistered)
	{
		brushBackground.CreateSolid(RGB(48, 58, 60));
		this->RegisterClassEx(
			LoadCursor(NULL, IDC_ARROW),
			brushBackground.GetHBRUSH()); //Background
		this->isRegistered = true;
	}
}

void BtUpload::SetMouseCursor(int mouseCursor)
{
	if (WhereIsCursor() != mouseCursor) {
		this->mouseCursor = mouseCursor;
		switch (mouseCursor)
		{
		case NAP_MOUSE_IS_CLICK:
			colorButton.SetFromCOLORREF(RGB(93, 160, 229));
			break;
		case NAP_MOUSE_IS_OVER:
			colorButton.SetFromCOLORREF(RGB(108, 118, 120));
			break;
		case NAP_MOUSE_IS_NOTOVER:
			colorButton.SetFromCOLORREF(RGB(68, 78, 80));
			break;
		default:
			break;
		}
		this->Repaint(NULL, true);
	}
}

int BtUpload::WhereIsCursor()
{
	return this->mouseCursor;
}

BtUpload::~BtUpload()
{
}

void BtUpload::Window_Open(Win::Event& e)
{
	colorButton.SetFromCOLORREF(RGB(68, 78, 80));
	colorBackground.SetFromCOLORREF(RGB(48, 58, 60));
}

void BtUpload::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, true);
	Gdiplus::Pen penWhite(Gdiplus::Color(255, 255, 255, 255));
	gdi.Plus.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
	//Background
	Gdiplus::SolidBrush brush(colorBackground);
	gdi.Plus.FillRectangle(&brush, -1, -1, int(this->Width * 1.0 + 1), int(this->Height * 1.0 + 1));
	//
	brush.SetColor(colorButton);
	Gdiplus::REAL radio = float((Width)*0.22);
	Gdiplus::REAL conv = 1.0;
	Gdiplus::REAL diameter = radio * 2;
	Gdiplus::REAL center = float(this->Width / 2.0 - diameter);
	Gdiplus::REAL heigthRec = float((this->Height)*0.3);
	//1er
	gdi.Plus.FillEllipse(&brush, 0.0, (this->Height - diameter), diameter, diameter);
	//2do
	gdi.Plus.FillEllipse(&brush, float((this->Width - diameter)*0.1864), float(0.0), diameter, diameter);
	//3er
	gdi.Plus.FillEllipse(&brush, float((this->Width - diameter)*0.6127), float((this->Height - diameter)*0.4), diameter, diameter);
	//4to
	gdi.Plus.FillEllipse(&brush, this->Width - diameter - 1, (this->Height - diameter), diameter, diameter);
	//Rectangle
	gdi.Plus.FillRectangle(&brush, radio, this->Height - heigthRec, float(this->Width * 0.5 + 2), heigthRec);
	//Arrow
	brush.SetColor(Gdiplus::Color(255, 255, 255, 255));
	gdi.Plus.FillRectangle(&brush, float(this->Width * 0.45f), float(this->Height * 0.5), float(this->Width * 0.1), float(this->Height * 0.3));
	Gdiplus::Point point[] =
	{
		Gdiplus::Point(int(this->Width * 0.35f), int(this->Height * 0.6)),
		Gdiplus::Point(int(this->Width * 0.5f), int(this->Height * 0.4)),
		Gdiplus::Point(int(this->Width * 0.65f), int(this->Height * 0.6))
	};
	gdi.Plus.FillPolygon(&brush, point, 3);
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
	if (e.uMsg != WM_COMMAND) return false;
	const int id = LOWORD(e.wParam);
	const int notificationd = HIWORD(e.wParam);
	if (id != this->id) return false;
	if (notificationd != notification) return false;
	return true;
}

void BtUpload::Window_LButtonDown(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IS_CLICK);
	Win::HourGlassCursor hgc(true);
	::SetFocus(hWnd);
}

void BtUpload::Window_LButtonUp(Win::Event& e)
{
	SetMouseCursor(NAP_MOUSE_IS_NOTOVER);
	if (Enabled == false) return;
	HWND nWndParent = ::GetParent(hWnd);
	::SendMessage(nWndParent, WM_COMMAND, MAKEWPARAM(this->id, WIN_CLICK), e.lParam);
}

void BtUpload::Window_MouseMove(Win::Event& e)
{
	if (this->mouseCursor != NAP_MOUSE_IS_CLICK) SetMouseCursor(NAP_MOUSE_IS_OVER);
}

void BtUpload::Window_NcActivate(Win::Event& e)
{
	const bool isActive = (e.wParam == TRUE);
	e.returnValue = ::DefWindowProc(hWnd, WM_NCACTIVATE, e.wParam, e.lParam);
}