// CarreraDropDownListWIX.cpp : Defines the exported functions for the DLL application.

#include "stdafx.h"
#pragma comment(linker, "/EXPORT:CheckPID=_CheckPID@4")

extern "C" UINT __stdcall CheckPID(MSIHANDLE hInstall) {
	char Carrera[MAX_PATH];
	DWORD CarreraLen = MAX_PATH;
	char InstallDir[MAX_PATH];
	DWORD InstallDirLen = MAX_PATH;
	MsiGetPropertyA(hInstall, "SETUPCARRERALIST", Carrera, &CarreraLen);
	MsiGetPropertyA(hInstall, "INSTALLFOLDER", InstallDir, &InstallDirLen);
	wstring CarreraW = Nap::Convert::ToWstring(Carrera);
	wstring InstallDirW = Nap::Convert::ToWstring(InstallDir);

	try
	{
		conn.OpenSession(hWnd, CONNECTUSR_STRING);
		conn.GetString(cmd, isActivate, MAX_PATH);
	}
	catch (Sql::SqlException e)
	{
		MsiSetPropertyA(hInstall, "PIDACCEPTED", "0");
		return ERROR_SUCCESS;
	}
	if (isActivate != L"1") {
		MsiSetPropertyA(hInstall, "PIDACCEPTED", "0");
		return ERROR_SUCCESS;;
	}
	cmd = L"SELECT FORMAT(licenseKey, '#### #### #### ####') FROM userx WHERE email = '" + UsernamexW + L"'";
	wstring licenseKey;
	try
	{
		conn.OpenSession(hWnd, CONNECTUSR_STRING);
		conn.GetString(cmd, licenseKey, MAX_PATH);
	}
	catch (Sql::SqlException e)
	{
		MsiSetPropertyA(hInstall, "PIDACCEPTED", "0");
		return ERROR_SUCCESS;
	}
	string licenseKeyS;
	Sys::Convert::WstringToString(licenseKey, licenseKeyS);
	bool isActive = true;
	for (size_t i = 0; i < licenseKeyS.length(); i++) {
		if (licenseKeyS[i] != Pid[i]) {
			isActive = false;
		}
	}
	MsiSetPropertyA(hInstall, "PIDACCEPTED", isActive ? "1" : "0");
	return ERROR_SUCCESS;
}
