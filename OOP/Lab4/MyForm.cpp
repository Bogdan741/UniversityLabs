#include "MyForm.h"
//#include <clocale>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{

	//setlocale(LC_ALL, "rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab4::MyForm form;
	Application::Run(% form);
}
