#pragma once
#include "Header.h"


namespace Lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
		   //private: Polynom p;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(98, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 111);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(98, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(128, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(98, 197);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(128, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(98, 223);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(128, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"c";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 178);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"b";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(57, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"c";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(388, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 12;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(388, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(333, 308);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(232, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Enter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(232, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Enter";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(511, 281);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Z(         )      ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(529, 276);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(18, 20);
			this->textBox7->TabIndex = 20;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(529, 308);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(18, 20);
			this->textBox8->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(511, 313);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Z\'(        )       ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(511, 363);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Integral(Z(x)dx)       ";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(529, 340);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(18, 20);
			this->textBox9->TabIndex = 24;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(529, 379);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(18, 20);
			this->textBox10->TabIndex = 25;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(553, 276);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(24, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(585, 358);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(24, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"=";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(553, 308);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(24, 23);
			this->button7->TabIndex = 28;
			this->button7->Text = L"=";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(312, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 29;
			this->button8->Text = L"roots";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(309, 386);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"x1 =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(309, 418);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"x2 =";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(346, 82);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"P(x) = ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(346, 200);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 13);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Q(x) = ";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(290, 311);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(37, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Z(x) = ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 440);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: Polynom* p;
private: Polynom* q;
private: Polynom* z;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	p = new Polynom;
	q = new Polynom;
	z = new Polynom;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
		double a =  System::Convert::ToDouble(textBox1->Text);
		double b = System::Convert::ToDouble(textBox2->Text);
		double c = System::Convert::ToDouble(textBox3->Text);
		*p = Polynom(a, b, c);
		label7 << *p;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = System::Convert::ToDouble(textBox4->Text);
	double b = System::Convert::ToDouble(textBox5->Text);
	double c = System::Convert::ToDouble(textBox6->Text);
	*q = Polynom(a, b, c);
	label8 << *q;
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ b = (Button^)sender;
	if (b->Text == "+")
		*z = (*p).operator+(*q);
	else if (b->Text == "-")
		*z = (*p).operator-(*q);
	label9 << *z;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double r = z->function(Convert::ToDouble(textBox7->Text));
	label10->Text +="    "+ r;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	double r = z->firstDerivative(Convert::ToDouble(textBox8->Text));
	label11->Text +="    "+ r;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double r = Convert::ToDouble(textBox9->Text);
	double r1 = Convert::ToDouble(textBox10->Text);
	label12->Text += "    "+ z->integral(r1,r);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Polynom::roots r = z->findRoots();
	if (r.x1 == Polynom::UNDIFINITE && r.x2 == Polynom::UNDIFINITE)
	{
		label13->Text += "    UNDEFINITE";
		label14->Text += "    UNDEFINITE";
	}
	else if (r.x2 == Polynom::UNDIFINITE)
	{
		label13->Text += "    " + r.x1;
		label14->Text += "    UNDEFINITE";
	}
	else
	{
		label13->Text += "    " + r.x1;
		label14->Text += "    " + r.x2;
	}

}
};
}
