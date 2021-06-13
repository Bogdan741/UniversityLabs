#include "MyForm.h"
#include "Header.h"
//#include <clocale>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Polynom p(0, 0, 0);
	//setlocale(LC_ALL, "rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5::MyForm form;
	Application::Run(% form);
	

}
