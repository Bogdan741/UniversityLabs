#pragma once
namespace Lab4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ õ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğøèéÕToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğøèéÎToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->õ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğøèéÕToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğøèéÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ScrollBar;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridView1->Location = System::Drawing::Point(374, 48);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 40;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->Size = System::Drawing::Size(210, 210);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(107, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 59);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->õ³äToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(711, 25);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// õ³äToolStripMenuItem
			// 
			this->õ³äToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïåğøèéÕToolStripMenuItem,
					this->ïåğøèéÎToolStripMenuItem
			});
			this->õ³äToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->õ³äToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->õ³äToolStripMenuItem->Name = L"õ³äToolStripMenuItem";
			this->õ³äToolStripMenuItem->Size = System::Drawing::Size(66, 21);
			this->õ³äToolStripMenuItem->Text = L"Options";
			// 
			// ïåğøèéÕToolStripMenuItem
			// 
			this->ïåğøèéÕToolStripMenuItem->Name = L"ïåğøèéÕToolStripMenuItem";
			this->ïåğøèéÕToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïåğøèéÕToolStripMenuItem->Text = L"First Õ";
			this->ïåğøèéÕToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğøèéÕToolStripMenuItem_Click);
			// 
			// ïåğøèéÎToolStripMenuItem
			// 
			this->ïåğøèéÎToolStripMenuItem->Name = L"ïåğøèéÎToolStripMenuItem";
			this->ïåğøèéÎToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïåğøèéÎToolStripMenuItem->Text = L"First Î";
			this->ïåğøèéÎToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğøèéÎToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(711, 280);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Tic Tak Toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: char MYCHAR;
	private: System::Void grid();
	private: int isFull();
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: int win() { return isDiag() || isinRow() || isinColumn(); }
	private: int isDiag()
	{
		if (dataGridView1->Rows[0]->Cells[0]->Value==dataGridView1->Rows[1]->Cells[1]->Value &&
			dataGridView1->Rows[1]->Cells[1]->Value==dataGridView1->Rows[2]->Cells[2]->Value &&
			dataGridView1->Rows[0]->Cells[0]->Value != "")
			return 1;
		else if (dataGridView1->Rows[0]->Cells[2]->Value == dataGridView1->Rows[1]->Cells[1]->Value &&
			dataGridView1->Rows[1]->Cells[1]->Value == dataGridView1->Rows[2]->Cells[0]->Value &&
			dataGridView1->Rows[2]->Cells[0]->Value != "")
			return 1;
		else
			return 0;
	}
	private: int isinRow()
	{
		for (int i = 0; i < 3; i++)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value == dataGridView1->Rows[i]->Cells[1]->Value &&
				dataGridView1->Rows[i]->Cells[1]->Value == dataGridView1->Rows[i]->Cells[2]->Value &&
				dataGridView1->Rows[i]->Cells[1]->Value != "")
				return 1;

		}
		return 0;
	}
	private: int isinColumn()
	{
		for (int i = 0; i < 3; i++)
		{
			if (dataGridView1->Rows[0]->Cells[i]->Value == dataGridView1->Rows[1]->Cells[i]->Value &&
				dataGridView1->Rows[0]->Cells[i]->Value == dataGridView1->Rows[2]->Cells[i]->Value &&
				dataGridView1->Rows[0]->Cells[i]->Value != "")
				return 1;

		}
		return 0;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïåğøèéÕToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if(isEmpty())
		MYCHAR = 'X';
	}
	private: System::Void ïåğøèéÎToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (isEmpty())
		MYCHAR = 'O';
	}
	private: bool isEmpty()
	{
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			for (int j = 0; j < dataGridView1->ColumnCount; j++)
			{
				if (dataGridView1->Rows[i]->Cells[j]->Value == "")
					continue;
				else return false;
			}
		}
		return true;
	}
};
}
