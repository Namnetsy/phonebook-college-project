#pragma once

#include "MainForm.h"

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AskBeforeClosingDialog
	/// </summary>
	public ref class AskBeforeClosingDialog : public System::Windows::Forms::Form
	{
	public:
		AskBeforeClosingDialog(MainForm^ mainForm, System::String^ path);
		AskBeforeClosingDialog(MainForm^ mainForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AskBeforeClosingDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panControlButtons;
	protected:
	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::PictureBox^  picAccount;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnClose;


	private: System::Windows::Forms::Panel^  leftBorder;
	private: System::Windows::Forms::Panel^  rightBorder;
	private: System::Windows::Forms::Panel^  panBottom;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AskBeforeClosingDialog::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->picAccount = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->leftBorder = (gcnew System::Windows::Forms::Panel());
			this->rightBorder = (gcnew System::Windows::Forms::Panel());
			this->panBottom = (gcnew System::Windows::Forms::Panel());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->BeginInit();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->picAccount);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(339, 39);
			this->panControlButtons->TabIndex = 1;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AskBeforeClosingDialog::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AskBeforeClosingDialog::panControlButtons_MouseMove);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(306, 6);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(30, 27);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &AskBeforeClosingDialog::picXout_Click);
			// 
			// picAccount
			// 
			this->picAccount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAccount.Image")));
			this->picAccount->Location = System::Drawing::Point(3, 7);
			this->picAccount->Name = L"picAccount";
			this->picAccount->Size = System::Drawing::Size(34, 27);
			this->picAccount->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAccount->TabIndex = 7;
			this->picAccount->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Зберегти дані перед виходом\?";
			// 
			// btnSave
			// 
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Location = System::Drawing::Point(72, 160);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(78, 30);
			this->btnSave->TabIndex = 3;
			this->btnSave->Text = L"Зберегти";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &AskBeforeClosingDialog::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(184, 160);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(78, 30);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Вийти";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &AskBeforeClosingDialog::btnClose_Click);
			// 
			// leftBorder
			// 
			this->leftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->leftBorder->Location = System::Drawing::Point(0, 0);
			this->leftBorder->Name = L"leftBorder";
			this->leftBorder->Size = System::Drawing::Size(1, 214);
			this->leftBorder->TabIndex = 5;
			// 
			// rightBorder
			// 
			this->rightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->rightBorder->Location = System::Drawing::Point(338, 0);
			this->rightBorder->Name = L"rightBorder";
			this->rightBorder->Size = System::Drawing::Size(1, 212);
			this->rightBorder->TabIndex = 6;
			// 
			// panBottom
			// 
			this->panBottom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottom->Location = System::Drawing::Point(0, 211);
			this->panBottom->Name = L"panBottom";
			this->panBottom->Size = System::Drawing::Size(339, 1);
			this->panBottom->TabIndex = 7;
			// 
			// AskBeforeClosingDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(339, 212);
			this->Controls->Add(this->panBottom);
			this->Controls->Add(this->rightBorder);
			this->Controls->Add(this->leftBorder);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AskBeforeClosingDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AskBeforeClosingDialog";
			this->panControlButtons->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			MainForm^ mainForm;
			Point^ mouseLocation;
			System::String^ path = "None";
		
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
};
}
