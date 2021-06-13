#pragma once
#include "MyForm1.h"

namespace Lab3t {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ noramalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ strechImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ centralImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ autoSizeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ koloToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noramalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->strechImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->centralImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autoSizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->koloToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->viewToolStripMenuItem, this->koloToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(396, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->noramalToolStripMenuItem,
					this->strechImageToolStripMenuItem, this->zoomToolStripMenuItem, this->centralImageToolStripMenuItem, this->autoSizeToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			// 
			// noramalToolStripMenuItem
			// 
			this->noramalToolStripMenuItem->Name = L"noramalToolStripMenuItem";
			this->noramalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->noramalToolStripMenuItem->Text = L"Noramal";
			this->noramalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noramalToolStripMenuItem_Click);
			// 
			// strechImageToolStripMenuItem
			// 
			this->strechImageToolStripMenuItem->Name = L"strechImageToolStripMenuItem";
			this->strechImageToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->strechImageToolStripMenuItem->Text = L"Strech image";
			this->strechImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noramalToolStripMenuItem_Click);
			// 
			// zoomToolStripMenuItem
			// 
			this->zoomToolStripMenuItem->Name = L"zoomToolStripMenuItem";
			this->zoomToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zoomToolStripMenuItem->Text = L"Zoom";
			this->zoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noramalToolStripMenuItem_Click);
			// 
			// centralImageToolStripMenuItem
			// 
			this->centralImageToolStripMenuItem->Name = L"centralImageToolStripMenuItem";
			this->centralImageToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->centralImageToolStripMenuItem->Text = L"Central image";
			this->centralImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noramalToolStripMenuItem_Click);
			// 
			// autoSizeToolStripMenuItem
			// 
			this->autoSizeToolStripMenuItem->Name = L"autoSizeToolStripMenuItem";
			this->autoSizeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->autoSizeToolStripMenuItem->Text = L"Auto size";
			this->autoSizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::noramalToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(396, 288);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// koloToolStripMenuItem
			// 
			this->koloToolStripMenuItem->Name = L"koloToolStripMenuItem";
			this->koloToolStripMenuItem->Size = System::Drawing::Size(42, 20);
			this->koloToolStripMenuItem->Text = L"kolo";
			this->koloToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::koloToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 312);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	//private: System::Void вир≥вн€тиѕо–озм≥руToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


private: System::Void noramalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void koloToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ fgs = gcnew MyForm1();
	fgs->Show();
	
}
};
}
