﻿#pragma once  //______________________________________ Windows_HorarioDICIS.h  
#include "Resource.h"
class Windows_HorarioDICIS: public Win::Dialog
{
public:
	Windows_HorarioDICIS()
	{
	}
	~Windows_HorarioDICIS()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	void InitializeGui()
	{
		this->Text = L"Windows_HorarioDICIS";
	}
	void Window_Open(Win::Event& e);
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.style = DS_CENTER | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU;
	}
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
