#pragma once   //_____________________________________________ CarreraDlg.h  
#include "resource.h"

class CarreraDlg: public Win::Dialog
{
public:
	CarreraDlg()
	{
	}
	~CarreraDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::DropDownList ddCarrera;
	Win::Label lb1;
	Win::Label lb2;
	Win::Button btOK;
	Win::Button btCancel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(9.71550);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(4.27567);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Configuración Inicial";
		ddCarrera.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 0.27517, 0.91017, 9.24983, 0.55033, hWnd, 1000);
		lb1.CreateX(NULL, L"Por favor, seleccione la carrera:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.27517, 0.19050, 4.63550, 0.55033, hWnd, 1001);
		lb2.CreateX(NULL, L"Nota: Esta ventana sólo se mostrará la primera vez que se ejecuta el programa, tenga cuidado de no seleccionar una carrera incorrecta", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.27517, 1.79917, 9.29217, 1.16417, hWnd, 1002);
		btOK.CreateX(NULL, L"Aceptar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.99017, 3.49250, 3.57717, 0.63500, hWnd, 1003);
		btCancel.CreateX(NULL, L"Cancelar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.27517, 3.49250, 3.74650, 0.63500, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		ddCarrera.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		btOK.Font = fontArial009A;
		btCancel.Font = fontArial009A;
	}
	//_________________________________________________
	void btOK_Click(Win::Event& e);
	void btCancel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btOK.IsEvent(e, BN_CLICKED)) {btOK_Click(e); return true;}
		if (btCancel.IsEvent(e, BN_CLICKED)) {btCancel_Click(e); return true;}
		return false;
	}
};
