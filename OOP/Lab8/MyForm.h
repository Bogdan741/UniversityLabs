#pragma once
#include "Header.h"

namespace Lab8 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button18;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(618, 287);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(610, 261);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"TermDeposit";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(29, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 15);
			this->label9->TabIndex = 21;
			this->label9->Text = L"value:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(29, 91);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 21);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(29, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 15);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Time:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(32, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 21);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(29, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 15);
			this->label4->TabIndex = 17;
			this->label4->Text = L"percent:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(42, 177);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Push";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(29, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 21);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(205, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"m: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(406, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(201, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 32);
			this->label5->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(204, 20);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Вивести назву всіх класів";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(206, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(204, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Прибуток:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(406, 177);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Назва файлу:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(406, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(406, 135);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Вивести прибуток у файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(406, 91);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Вивести прибуток на форму";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(406, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Вивести назву класу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Пройшло m місяців";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(610, 261);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"CumulitiveDeposit1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(29, 75);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 15);
			this->label10->TabIndex = 41;
			this->label10->Text = L"value:";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(29, 91);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 21);
			this->textBox6->TabIndex = 40;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(29, 127);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 15);
			this->label11->TabIndex = 39;
			this->label11->Text = L"Time:";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(32, 143);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 21);
			this->textBox7->TabIndex = 38;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(29, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 15);
			this->label12->TabIndex = 37;
			this->label12->Text = L"percent:";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(42, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Push";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(29, 39);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 21);
			this->textBox8->TabIndex = 35;
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(205, 121);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 13);
			this->label13->TabIndex = 34;
			this->label13->Text = L"m: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(406, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 33;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(201, 56);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(156, 32);
			this->label15->TabIndex = 32;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(204, 20);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(153, 23);
			this->button8->TabIndex = 31;
			this->button8->Text = L"Вивести назву всіх класів";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(206, 203);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(13, 13);
			this->label16->TabIndex = 30;
			this->label16->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(204, 174);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 13);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Прибуток:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(406, 177);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 13);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Назва файлу:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(406, 196);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(180, 20);
			this->textBox9->TabIndex = 27;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(406, 135);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 23);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Вивести прибуток у файл";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(406, 91);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(180, 23);
			this->button10->TabIndex = 25;
			this->button10->Text = L"Вивести прибуток на форму";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(406, 20);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(180, 23);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Вивести назву класу";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(204, 143);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 23;
			this->textBox10->Text = L"0";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(204, 91);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(153, 23);
			this->button12->TabIndex = 22;
			this->button12->Text = L"Пройшло m місяців";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->button19);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->textBox17);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->textBox16);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Controls->Add(this->button16);
			this->tabPage3->Controls->Add(this->button17);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->button18);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(610, 261);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"VIPDeposit";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(202, 183);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 67;
			this->textBox18->Text = L"0";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(202, 154);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(153, 23);
			this->button19->TabIndex = 66;
			this->button19->Text = L"Вкласти ще:";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(24, 165);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(157, 13);
			this->label29->TabIndex = 65;
			this->label29->Text = L"Value to increase percent:";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(27, 180);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 64;
			this->textBox17->Text = L"0";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(24, 126);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(86, 13);
			this->label28->TabIndex = 63;
			this->label28->Text = L"Percent grow:";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(27, 142);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 62;
			this->textBox16->Text = L"0";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(27, 48);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 13);
			this->label19->TabIndex = 61;
			this->label19->Text = L"value:";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(27, 64);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 60;
			this->textBox11->Text = L"0";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(24, 88);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 59;
			this->label20->Text = L"Time:";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(27, 104);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 58;
			this->textBox12->Text = L"0";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(27, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 13);
			this->label21->TabIndex = 57;
			this->label21->Text = L"percent:";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(30, 216);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 56;
			this->button13->Text = L"Push";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(27, 22);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 55;
			this->textBox13->Text = L"0";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(202, 110);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(21, 13);
			this->label22->TabIndex = 54;
			this->label22->Text = L"m: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(404, 48);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 53;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(202, 48);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(153, 36);
			this->label24->TabIndex = 52;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(202, 20);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(153, 23);
			this->button14->TabIndex = 51;
			this->button14->Text = L"Вивести назву всіх класів";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(204, 245);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(13, 13);
			this->label25->TabIndex = 50;
			this->label25->Text = L"0";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(202, 216);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(58, 13);
			this->label26->TabIndex = 49;
			this->label26->Text = L"Прибуток:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(404, 176);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(76, 13);
			this->label27->TabIndex = 48;
			this->label27->Text = L"Назва файлу:";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(404, 195);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(180, 20);
			this->textBox14->TabIndex = 47;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(404, 134);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(180, 23);
			this->button15->TabIndex = 46;
			this->button15->Text = L"Вивести прибуток у файл";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(404, 90);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(180, 23);
			this->button16->TabIndex = 45;
			this->button16->Text = L"Вивести прибуток на форму";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(404, 19);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(180, 23);
			this->button17->TabIndex = 44;
			this->button17->Text = L"Вивести назву класу";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(202, 126);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 43;
			this->textBox15->Text = L"0";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(202, 88);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(153, 23);
			this->button18->TabIndex = 42;
			this->button18->Text = L"Пройшло m місяців";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 287);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Deposit* d = nullptr;


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
};
}
