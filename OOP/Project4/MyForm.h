#pragma once
#include "Project4.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ num2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ num3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(173, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Мій калькулятор\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(320, 60);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(136, 20);
			this->num1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(292, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"х";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(320, 126);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(136, 20);
			this->num2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(292, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"y";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 8;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(183, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 9;
			this->button3->Text = L"/";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(121, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 10;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(320, 204);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(136, 20);
			this->num3->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(575, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(604, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(773, 261);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"home";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = System::Convert::ToDouble(num1->Text);
		double b = System::Convert::ToDouble(num2->Text);
		double result = plus_home(a, b);
		num3->Text = System::Convert::ToString(result);
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = System::Convert::ToDouble(num1->Text);
		double b = System::Convert::ToDouble(num2->Text);
		double res = minus(a, b);
		num3->Text = System::Convert::ToString(res);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = System::Convert::ToDouble(num1->Text);
		double b = System::Convert::ToDouble(num2->Text);
		if (b != 0)
		{
			double res = div_home(a, b);
			num3->Text = System::Convert::ToString(res);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Cannot divide over zero","", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = System::Convert::ToDouble(num1->Text);
		double b = System::Convert::ToDouble(num2->Text);
		double res = mult(a, b);
		num3->Text = System::Convert::ToString(res);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Items->Add("d");
	comboBox1->Items->Add("c");
	comboBox1->Items->Add("l");
}
};
}
