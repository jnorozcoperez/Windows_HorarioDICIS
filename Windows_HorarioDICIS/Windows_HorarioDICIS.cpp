#include "stdafx.h"  //________________________________________ Windows_HorarioDICIS.cpp
#include "Windows_HorarioDICIS.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Windows_HorarioDICIS app;
	return app.BeginDialog(IDI_Windows_HorarioDICIS, hInstance);
}

void Windows_HorarioDICIS::Window_Open(Win::Event& e)
{
	
}

