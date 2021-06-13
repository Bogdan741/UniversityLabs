#include "MyForm.h"
#include "Header.h"
//#include <clocale>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab7::MyForm form;
	Application::Run(% form);


}


