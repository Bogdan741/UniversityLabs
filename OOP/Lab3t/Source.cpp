#include "MyForm.h"
using namespace System;
using namespace Lab3t;

System::Void MyForm::openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.PNG)|*.BMP;*.JPG;*.PNG|All files (*.*)|*.*";
	openFileDialog1->ShowDialog();
	
	if (openFileDialog1->FileName == nullptr) return;
	try
	{
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
	}
	catch (IO::FileNotFoundException^ Event)
	{
		MessageBox::Show(Event->Message + "\nФайл не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	catch (Exception^ Event)
	{
		MessageBox::Show(Event->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

System::Void MyForm::noramalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::ToolStripMenuItem^ tmp = (System::Windows::Forms::ToolStripMenuItem^) sender;
	if (tmp->Text == "Noramal")
	{
		pictureBox1->SizeMode = PictureBoxSizeMode::Normal;
	}
	else if (tmp->Text == "Strech image")
	{
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	else if (tmp->Text == "Central image")
	{
		pictureBox1->SizeMode = PictureBoxSizeMode::CenterImage;
	}
	else if (tmp->Text == "Auto size")
	{
		pictureBox1->SizeMode = PictureBoxSizeMode::AutoSize;
	}
	else
	{
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
	}
}

