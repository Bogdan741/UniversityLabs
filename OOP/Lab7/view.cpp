#include "MyForm.h"
using namespace System;
using namespace Lab7;

System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!(dataGridView1->Columns->Contains("x") == true))
	{
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "x";
		dataGridView1->Columns[0]->HeaderText = "Data";
		dataGridView1->Columns[0]->Width = dataGridView1->Width;
	}
	dataGridView1->Rows->Add(1);
}
//--------------------------------------------------------------------------------
System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	try{
		dataGridView1->Rows->RemoveAt(0);
	}
	catch (const System::ArgumentOutOfRangeException^ b)
	{
		MessageBox::Show("Out of Range\n");
	}
}
//--------------------------------------------------------------------------------
System::Void  MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1 >> *l;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView2 << *l;
}
//--------------------------------------------------------------------------------
System::Void  MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox1 >> *l;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	listBox2 << *l;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1 << *l;
}
//--------------------------------------------------------------------------------
System::Void MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ b = (Button^)sender;
	if (b->Text == "min")
	{
		label2->Text = Convert::ToString((*l).min());
	}
	else if (b->Text == "max")
	{
		label1->Text = Convert::ToString((*l).max());
	}
	else if (b->Text == "average")
	{
		label3->Text = Convert::ToString((*l).average());
	}
}
//--------------------------------------------------------------------------------
System::Void MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ b = (Button^)sender;
	if (b->Text == "Bubble sort")
	{
		(*l).bubble_sort();
	}
	else if(b->Text == "Selection sort")
	{
		(*l).selectionD_sort();
	}
}
//--------------------------------------------------------------------------------