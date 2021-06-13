#include"MyForm.h"
using namespace System;
using namespace Lab4;
System::Void MyForm::grid()
{
	int b = 70;
	if (dataGridView1->ColumnCount != 3)
	{
		dataGridView1->Columns->Add("", "");
		dataGridView1->Columns->Add("", "");
		dataGridView1->Columns->Add("", "");
		dataGridView1->Rows->Add("", "");
		dataGridView1->Rows->Add("", "");
		dataGridView1->Rows->Add("", "");

		dataGridView1->Columns[0]->Width = b;
		dataGridView1->Columns[1]->Width = b;
		dataGridView1->Columns[2]->Width = b;

		dataGridView1->Rows[0]->Height = b;
		dataGridView1->Rows[1]->Height = b;
		dataGridView1->Rows[2]->Height = b;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = "";
			}
		}
	}
}

System::Void MyForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{	
	if (win())
		return;
	if (dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value == "")
	{
		if (MYCHAR == 'X')
		{
				dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "X";
				MYCHAR = 'O';
		}
		else
		{
				dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = "O";
				MYCHAR = 'X';
		}
	}
	if (win())
	{
		if (MYCHAR == 'O')
			MessageBox::Show("X has won.", "congratulation", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		else
			MessageBox::Show("O has won.", "congratulation", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		return;
	}
	if(isFull())
	{
		//dataGridView1->ClearSelection();
		MessageBox::Show("DRAW", "congratulation", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		return;
	}
}
System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	grid();
	MYCHAR = 'X';
}
int MyForm::isFull()
{
	int FLAG = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (dataGridView1->Rows[i]->Cells[j]->Value == "")
			{
				return 0;
			}
		}
	}
	return 1;
 }
System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	//dataGridView1->Rows->Clear();
	for (int i = 0; i < 3; i++)
	{
		if (dataGridView1->ColumnCount > 0)
		{
			dataGridView1->Rows->RemoveAt(0);
			dataGridView1->Columns->RemoveAt(0);
		}
	}
	grid();
}