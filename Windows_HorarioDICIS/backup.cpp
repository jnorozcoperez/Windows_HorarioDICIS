#include "stdafx.h"  //_____________________________________________ CarreraDlg.cpp
#include "CarreraDlg.h"

void CarreraDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddCarrera
	ddCarrera.Items.Add(L"Artes Digitales", 10);
	ddCarrera.Items.Add(L"Ingeniería en Comunicaciones y Electrónica", 20);
	ddCarrera.Items.Add(L"Ingeniería en Eléctrica", 30);
	ddCarrera.Items.Add(L"Enseñanza del Inglés", 40);
	ddCarrera.Items.Add(L"Gestión Empresarial", 50);
	ddCarrera.Items.Add(L"Ingeniería Mecánica", 60);
	ddCarrera.Items.Add(L"Ingeniería Mecatrónica", 70);
	ddCarrera.Items.Add(L"Ingeniería en Sistemas Computacionales", 80);
}
void CarreraDlg::btOK_Click(Win::Event& e)
{
}

void CarreraDlg::btCancel_Click(Win::Event& e)
{
}

