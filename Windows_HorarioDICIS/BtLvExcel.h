//____________________________________________________________ BtLvExcel.h                                     
#pragma once
#include "resource.h"
//To create an object of this class, you must insert a Custom Control in the GUI

class BtLvExcel: public Win::Window
{
public:
	BtLvExcel();
	~BtLvExcel();
	int mouseCursor;
	Gdiplus::Color penC;
	Gdiplus::Color backgroundC;
	Gdiplus::REAL halfX;
	Gdiplus::REAL halfY;
	Gdiplus::REAL m;
	bool isOpen;
	bool isActive;
	bool ChangeDoor();
	//____________________________________________________ Font
	virtual void SetFont(Win::Gdi::Font& font);
	__declspec( property( put=SetFont) ) Win::Gdi::Font& Font;
	//____________________________________________________ Events
	bool IsEvent(Win::Event& e, int notification);
	void SetMouseCursor(int mouseCursor);
	int WhereIsCursor();
private:
	const wchar_t * GetClassName(void){return L"BtLvExcel";}
	static bool isRegistered;
protected:
	HFONT _hFont;
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void Window_Open(Win::Event& e);
	void Window_Paint(Win::Event& e);
	void Window_Size(Win::Event& e);
	//void Window_Char(Win::Event& e);
	//void Window_KeyDown(Win::Event& e);
	//void Window_KeyUp(Win::Event& e);
	//void Window_SetFocus(Win::Event& e);
	//void Window_KillFocus(Win::Event& e);
	//void Window_LButtonDblclk(Win::Event& e);
	void Window_LButtonDown(Win::Event& e);
	void Window_LButtonUp(Win::Event& e);
	void Window_MouseMove(Win::Event& e);
	//void Window_MouseWheel(Win::Event& e);
};
