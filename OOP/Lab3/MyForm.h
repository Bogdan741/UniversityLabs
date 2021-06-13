#pragma once

namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontsToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Rockwell", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(769, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + S";
			this->������������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + W";
			this->�����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsTab = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13, 30);
			this->textBox1->Margin = System::Windows::Forms::Padding(10);
			this->textBox1->MinimumSize = System::Drawing::Size(400, 200);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(745, 224);
			this->textBox1->TabIndex = 1;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->copyToolStripMenuItem,
					this->saveToolStripMenuItem, this->deleteToolStripMenuItem, this->fontsToolStripMenuItem, this->colorToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(151, 114);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + C";
			this->copyToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			// 
			// fontsToolStripMenuItem
			// 
			this->fontsToolStripMenuItem->Name = L"fontsToolStripMenuItem";
			this->fontsToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->fontsToolStripMenuItem->Text = L"Fonts";
			this->fontsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontsToolStripMenuItem_Click);
			// 
			// colorToolStripMenuItem
			// 
			this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			this->colorToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->colorToolStripMenuItem->Text = L"Color";
			this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::colorToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(769, 260);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Text editor";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		//openFileDialog1->FileName = "test.txt";
		openFileDialog1->InitialDirectory = "C:\\";
		fontDialog1->MaxSize = 32;
		fontDialog1->MinSize = 10;
		openFileDialog1->Filter = "������� ����� (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->Filter = "������� ����� (*.txt)|*.txt|All files (*.*)|*.*";
	}

private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->ShowDialog();
	if (openFileDialog1->FileName == nullptr) return;
	try
	{
		auto MyReader = gcnew IO::StreamReader(openFileDialog1->FileName);//, System::Text::Encoding::GetEncoding(1251));
		textBox1->Text = MyReader->ReadToEnd();
		MyReader->Close();
	}
	catch (IO::FileNotFoundException^ ��������)
	{
		MessageBox::Show(��������->Message + "\n���� �� ��������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	catch (Exception^ ��������)
	{
		MessageBox::Show(��������->Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = openFileDialog1->FileName;
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) Save();
}
	   void Save()
	   {
		   try
		   {
			   auto MyWriter = gcnew IO::StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::GetEncoding(1251));
			   MyWriter->Write(textBox1->Text);
			   MyWriter->Close(); textBox1->Modified = false;
		   }
		   catch (Exception^ ��������)
		   {
			   MessageBox::Show(��������->Message, "�������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		   }
	   }

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (textBox1->Modified == false) return;
	auto MeBox = MessageBox::Show("����� ��� �������. \n�������� ����?",
		"������� ��������", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
	if (MeBox == Windows::Forms::DialogResult::No) return;
	if (MeBox == Windows::Forms::DialogResult::Cancel) e->Cancel = true;
	if (MeBox == Windows::Forms::DialogResult::Yes)
	{
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			Save(); return;
		}
		else e->Cancel = true;
	}
}
	


private: System::Void fontsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (fontDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		textBox1->Font = fontDialog1->Font;
		//textBox1->BackColor = fontDialog1->Color;
	}
}
private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text != "") {
		Clipboard::SetDataObject(textBox1->SelectedText);
	}
}
private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (colorDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		textBox1->BackColor = colorDialog1->Color;
	}
}
};
}
