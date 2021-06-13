#include "MyForm.h"
#include <msclr\marshal_cppstd.h>
using namespace System::Windows::Forms;
using namespace System;
using namespace Lab8;
//--------------------------------------------------------------------------------
System::Void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (d)
	{
		delete d;
		d = nullptr;
	}
	if (!d)
	{
		double p = Convert::ToDouble(textBox4->Text);
		double v = Convert::ToDouble(textBox5->Text);
		int m = Convert::ToInt32(textBox3->Text);
		d = new TermDeposit(v, m, p);
	}
}
//--------------------------------------------------------------------------------
System::Void MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	label5->Text = "TermDeposit" + " CumulitiveDeposit1" + " VIPDeposit";
}
//--------------------------------------------------------------------------------
System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	int m = Convert::ToInt32(textBox1->Text);
	TermDeposit* t = dynamic_cast<TermDeposit*>(d);
	t->AddDate(m);
}
//--------------------------------------------------------------------------------
System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	TermDeposit * t = dynamic_cast<TermDeposit*>(d);
	std::string s = t->print();
	String ^ const st = gcnew String(s.c_str());
	label6->Text = st;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string file = msclr::interop::marshal_as<std::string>(textBox2->Text);
	TermDeposit* t = dynamic_cast<TermDeposit*>(d);
	if (!(t->write_to_file(t->print() + ':' + std::to_string(t->GetIncome()), file)))
		MessageBox::Show("There is no such file in directory!!!");
}
//--------------------------------------------------------------------------------
System::Void  MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	TermDeposit* t = dynamic_cast<TermDeposit*>(d);
	label3->Text = Convert::ToString(t->GetIncome());
}
//--------------------------------------------------------------------------------
System::Void MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (d)
	{
		delete d;
		d = nullptr;
	}
	if (!d)
	{
		double p = Convert::ToDouble(textBox8->Text);
		double v = Convert::ToDouble(textBox6->Text);
		int m = Convert::ToInt32(textBox7->Text);
		d = new CumulitiveDeposit1(v, m, p);
	}
}
//--------------------------------------------------------------------------------
System::Void MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	label15->Text = "TermDeposit" + " CumulitiveDeposit1" + " VIPDeposit";
}
//--------------------------------------------------------------------------------
System::Void MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	int m = Convert::ToInt32(textBox10->Text);
	CumulitiveDeposit1* t = dynamic_cast<CumulitiveDeposit1*>(d);
	t->AddDate(m);
	//label17->Text = Convert::ToString(t->GetIncome());
}
//--------------------------------------------------------------------------------
System::Void MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	CumulitiveDeposit1* t = dynamic_cast<CumulitiveDeposit1*>(d);
	std::string s = t->print();
	String^ const st = gcnew String(s.c_str());
	label14->Text = st;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string file = msclr::interop::marshal_as<std::string>(textBox9->Text);
	CumulitiveDeposit1* c = dynamic_cast<CumulitiveDeposit1*>(d);
	if (!(c->write_to_file(c->print() + ':' + std::to_string(c->GetIncome()), file)))
		MessageBox::Show("There is no such file in directory!!!");
}
//--------------------------------------------------------------------------------
System::Void MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	CumulitiveDeposit1* t = dynamic_cast<CumulitiveDeposit1*>(d);
	label16->Text = Convert::ToString(t->GetIncome());
}
//--------------------------------------------------------------------------------
System::Void MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (d)
	{
		delete d;
		d = nullptr;
	}
	if (!d)
	{
		double p = Convert::ToDouble(textBox13->Text);
		double v = Convert::ToDouble(textBox11->Text);
		int m = Convert::ToInt32(textBox12->Text);
		double p_to_g = Convert::ToDouble(textBox16->Text);;
		double value_to_in = Convert::ToDouble(textBox17->Text);
		d = new VIPDeposit(v, m, p, p_to_g, value_to_in);
	}
}
//--------------------------------------------------------------------------------
System::Void MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	label24->Text = "TermDeposit" + " CumulitiveDeposit1" + " VIPDeposit";
}
//--------------------------------------------------------------------------------
System::Void MyForm::button18_Click(System::Object^ sender, System::EventArgs^ e)
{
	int m = Convert::ToInt32(textBox15->Text);
	VIPDeposit* t = dynamic_cast<VIPDeposit*>(d);
	t->AddDate(m);
}
//--------------------------------------------------------------------------------
System::Void MyForm::button19_Click(System::Object^ sender, System::EventArgs^ e)
{
	VIPDeposit* t = dynamic_cast<VIPDeposit*>(d);
	double p = Convert::ToDouble(textBox18->Text);
	t->DoInput(p);
}
//--------------------------------------------------------------------------------
System::Void MyForm::button17_Click(System::Object^ sender, System::EventArgs^ e)
{
	VIPDeposit* t = dynamic_cast<VIPDeposit*>(d);
	std::string s = t->print();
	String^ const st = gcnew String(s.c_str());
	label23->Text = st;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button16_Click(System::Object^ sender, System::EventArgs^ e)
{
	VIPDeposit* t = dynamic_cast<VIPDeposit*>(d);
	label25->Text = Convert::ToString(t->GetIncome());
}
//--------------------------------------------------------------------------------
System::Void MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string file = msclr::interop::marshal_as<std::string>(textBox14->Text);
	VIPDeposit* t = dynamic_cast<VIPDeposit*>(d);
	if (!(t->write_to_file(t->print() + ':' + std::to_string(t->GetIncome()), file)))
		MessageBox::Show("There is no such file in directory!!!");
}
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------