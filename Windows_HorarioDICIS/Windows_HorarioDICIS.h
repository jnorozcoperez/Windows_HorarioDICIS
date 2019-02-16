#pragma once  //______________________________________ Windows_HorarioDICIS.h  
#include "Resource.h"
class Windows_HorarioDICIS: public Win::Dialog
{
public:
	Windows_HorarioDICIS()
	{
		//______________Funciones de actualización
		win_sparkle_set_appcast_url("https://yivootr0pfmu5k7zrytncw-on.drv.tw/Server/Update.xml");
		win_sparkle_set_app_build_version(L"1.0.0.0");
		win_sparkle_set_app_details(L"HorarioDICIS", L"Horario DICIS", L"1.0.0.0");
		win_sparkle_set_automatic_check_for_updates(1);
		win_sparkle_set_dsa_pub_pem("MEQCICh10SofkNHa5iJgVWDi2O8RBYyN+nxkFEL7u/tBuWboAiB6VOV/WQMRJE+kRoICZXAhq5b24WkgqcDs0z7gyBkGVw==");
		win_sparkle_set_lang("es-MX");
		win_sparkle_set_registry_path("Software\\Microsoft\\HorarioDICIS");
		win_sparkle_set_update_check_interval(25200);
		win_sparkle_init();
	}
	~Windows_HorarioDICIS()
	{
		win_sparkle_cleanup();
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
