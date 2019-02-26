#include "stdafx.h"  //_____________________________________________ CarreraDlg.cpp
#include "CarreraDlg.h"

void CarreraDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddCarrera
	for (auto aux : CARRERA) ddCarrera.Items.Add(aux.first);
}

void CarreraDlg::btOK_Click(Win::Event& e)
{
	if (ddCarrera.GetSelectedIndex() < 0) {
		this->MessageBox(L"Es necesario seleccionar una carrera, para poder hacer así la configuración inicial", L"Error", MB_OK | MB_ICONERROR);
		return;
	}
	if (this->MessageBox(L"¿Está seguro de haber escogido " + ddCarrera.GetText() + L"?", L"Configuración Inicial", MB_YESNO | MB_ICONQUESTION) != IDYES)
		return;
	if (Nap::File::Exists(Nap::GetCurrentPathWork() + L"\\encryptedpid.dll") == false) {
		Nap::File::Save(Nap::Encrypting::Cesar(Nap::Encrypting::Base64(ddCarrera.GetText()), 100), Nap::GetCurrentPathWork() + L"\\encryptedpid.dll");
	}
	this->EndDialog(TRUE);
}

void CarreraDlg::btCancel_Click(Win::Event& e)
{
	this->EndDialog(FALSE);
}