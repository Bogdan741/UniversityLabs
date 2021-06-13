#pragma once
#include "Array.h"
#include "NewComplex.h"
#include <sstream>
//using namespace mytype;

namespace Lab10e {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ Complex;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Complex = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(201, 150);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"pull";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(339, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(169, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(339, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(169, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(339, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(169, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(258, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"min";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(258, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"sum";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(258, 161);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"product";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Complex
			// 
			this->Complex->AutoSize = true;
			this->Complex->Location = System::Drawing::Point(13, 13);
			this->Complex->Name = L"Complex";
			this->Complex->Size = System::Drawing::Size(47, 13);
			this->Complex->TabIndex = 9;
			this->Complex->Text = L"Complex";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 261);
			this->Controls->Add(this->Complex);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Array";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 2;
		dataGridView1->RowCount = 2;
		dataGridView1->Columns[0]->HeaderText = "Real";
		dataGridView1->Columns[1]->HeaderText = "Imiginary";

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		mytype::Array<mytype::Complex> a(dataGridView1->RowCount - 1);
		
		for (auto i = 0; i < a.size(); ++i)
		{
			mytype::Real r = mytype::Real(Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value));
			mytype::Img im = mytype::Img(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
			a[i] = mytype::Complex(r, im);
		}
		std::ostringstream is;
		is << a;
		String^ st = gcnew String(is.str().c_str());
		MessageBox::Show(st);
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	mytype::Array<mytype::Complex> a(dataGridView1->RowCount - 1);

	for (auto i = 0; i < a.size(); ++i)
	{
		mytype::Real r = mytype::Real(Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value));
		mytype::Img im = mytype::Img(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
		a[i] = mytype::Complex(r, im);
	}
	std::ostringstream is;
	is << a.min();
	String^ st = gcnew String(is.str().c_str());
	textBox1->Text = st;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	mytype::Array<mytype::Complex> a(dataGridView1->RowCount - 1);

	for (auto i = 0; i < a.size(); ++i)
	{
		mytype::Real r = mytype::Real(Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value));
		mytype::Img im = mytype::Img(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
		a[i] = mytype::Complex(r, im);
	}
	std::ostringstream is;
	is << a.sum();
	String^ st = gcnew String(is.str().c_str());
	textBox3->Text = st;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	mytype::Array<mytype::Complex> a(dataGridView1->RowCount - 1);

	for (auto i = 0; i < a.size(); ++i)
	{
		mytype::Real r = mytype::Real(Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value));
		mytype::Img im = mytype::Img(Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value));
		a[i] = mytype::Complex(r, im);
	}
	std::ostringstream is;
	is << a.mult();
	String^ st = gcnew String(is.str().c_str());
	textBox2->Text = st;
}
};
}
