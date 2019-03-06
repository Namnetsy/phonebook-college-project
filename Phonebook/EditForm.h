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
	/// Summary for EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		EditForm(DataGridViewRow^ row, MainForm^ mainForm);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ToolTip^  toolTip;
	protected:
	private: System::Windows::Forms::PictureBox^  picHelp;
	private: System::Windows::Forms::Panel^  panBottomBorder2;
	private: System::Windows::Forms::Label^  lbInfo;
	private: System::Windows::Forms::Panel^  panInfo;
	private: System::Windows::Forms::Panel^  panBottomBorder;
	private: System::Windows::Forms::Panel^  panRightBorder;
	private: System::Windows::Forms::Panel^  panLeftBorder;
	private: System::Windows::Forms::Button^  btnAddEntry;
	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::Label^  lbWindowTitle;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Panel^  panControlButtons;
	private: System::Windows::Forms::TextBox^  tbCity;
	private: System::Windows::Forms::Label^  lbCity;
	private: System::Windows::Forms::TextBox^  tbAddress;
	private: System::Windows::Forms::Label^  lbAddress;
	private: System::Windows::Forms::TextBox^  tbEmail;
	private: System::Windows::Forms::Label^  lbEmail;
	private: System::Windows::Forms::TextBox^  tbMobilePhone;
	private: System::Windows::Forms::Label^  lbMobilePhone;
	private: System::Windows::Forms::TextBox^  tbWorkPhone;
	private: System::Windows::Forms::Label^  lbWorkPhone;
	private: System::Windows::Forms::TextBox^  tbHomePhone;
	private: System::Windows::Forms::Label^  lbHomePhone;
	private: System::Windows::Forms::TextBox^  tbNote;
	private: System::Windows::Forms::Label^  lbNote;
	private: System::Windows::Forms::TextBox^  tbFullName;
	private: System::Windows::Forms::Label^  lbFullName;
















	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EditForm::typeid));
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->picHelp = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddEntry = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->panBottomBorder2 = (gcnew System::Windows::Forms::Panel());
			this->lbInfo = (gcnew System::Windows::Forms::Label());
			this->panInfo = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder = (gcnew System::Windows::Forms::Panel());
			this->panRightBorder = (gcnew System::Windows::Forms::Panel());
			this->panLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->tbCity = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->tbMobilePhone = (gcnew System::Windows::Forms::TextBox());
			this->lbMobilePhone = (gcnew System::Windows::Forms::Label());
			this->tbWorkPhone = (gcnew System::Windows::Forms::TextBox());
			this->lbWorkPhone = (gcnew System::Windows::Forms::Label());
			this->tbHomePhone = (gcnew System::Windows::Forms::TextBox());
			this->lbHomePhone = (gcnew System::Windows::Forms::Label());
			this->tbNote = (gcnew System::Windows::Forms::TextBox());
			this->lbNote = (gcnew System::Windows::Forms::Label());
			this->tbFullName = (gcnew System::Windows::Forms::TextBox());
			this->lbFullName = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->BeginInit();
			this->panInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->panControlButtons->SuspendLayout();
			this->SuspendLayout();
			// 
			// picHelp
			// 
			this->picHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHelp.Image")));
			this->picHelp->Location = System::Drawing::Point(432, 2);
			this->picHelp->Name = L"picHelp";
			this->picHelp->Size = System::Drawing::Size(28, 19);
			this->picHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picHelp->TabIndex = 7;
			this->picHelp->TabStop = false;
			this->toolTip->SetToolTip(this->picHelp, L"Help");
			// 
			// btnAddEntry
			// 
			this->btnAddEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddEntry->Location = System::Drawing::Point(332, 294);
			this->btnAddEntry->Name = L"btnAddEntry";
			this->btnAddEntry->Size = System::Drawing::Size(116, 23);
			this->btnAddEntry->TabIndex = 45;
			this->btnAddEntry->Text = L"Save";
			this->toolTip->SetToolTip(this->btnAddEntry, L"Save");
			this->btnAddEntry->UseVisualStyleBackColor = true;
			this->btnAddEntry->Click += gcnew System::EventHandler(this, &EditForm::btnAddEntry_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(195, 294);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(116, 23);
			this->btnReset->TabIndex = 51;
			this->btnReset->Text = L"Reset";
			this->toolTip->SetToolTip(this->btnReset, L"Reset to the previous state");
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// panBottomBorder2
			// 
			this->panBottomBorder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder2->Location = System::Drawing::Point(0, 360);
			this->panBottomBorder2->Name = L"panBottomBorder2";
			this->panBottomBorder2->Size = System::Drawing::Size(466, 3);
			this->panBottomBorder2->TabIndex = 50;
			// 
			// lbInfo
			// 
			this->lbInfo->AutoSize = true;
			this->lbInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbInfo->Location = System::Drawing::Point(9, 5);
			this->lbInfo->Name = L"lbInfo";
			this->lbInfo->Size = System::Drawing::Size(170, 13);
			this->lbInfo->TabIndex = 8;
			this->lbInfo->Text = L"Please, fill out all of these fileds";
			// 
			// panInfo
			// 
			this->panInfo->Controls->Add(this->lbInfo);
			this->panInfo->Controls->Add(this->picHelp);
			this->panInfo->Location = System::Drawing::Point(3, 336);
			this->panInfo->Name = L"panInfo";
			this->panInfo->Size = System::Drawing::Size(462, 23);
			this->panInfo->TabIndex = 49;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder->Location = System::Drawing::Point(0, 333);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(466, 3);
			this->panBottomBorder->TabIndex = 48;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panRightBorder->Location = System::Drawing::Point(465, 3);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 363);
			this->panRightBorder->TabIndex = 47;
			// 
			// panLeftBorder
			// 
			this->panLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panLeftBorder->Location = System::Drawing::Point(0, 0);
			this->panLeftBorder->Name = L"panLeftBorder";
			this->panLeftBorder->Size = System::Drawing::Size(3, 363);
			this->panLeftBorder->TabIndex = 46;
			// 
			// picPhonebookIcon
			// 
			this->picPhonebookIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPhonebookIcon.Image")));
			this->picPhonebookIcon->Location = System::Drawing::Point(7, 10);
			this->picPhonebookIcon->Name = L"picPhonebookIcon";
			this->picPhonebookIcon->Size = System::Drawing::Size(36, 26);
			this->picPhonebookIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picPhonebookIcon->TabIndex = 6;
			this->picPhonebookIcon->TabStop = false;
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(424, 8);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &EditForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &EditForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &EditForm::picXout_MouseLeave);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 12);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(46, 25);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Edit";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panControlButtons->Controls->Add(this->picPhonebookIcon);
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->lbWindowTitle);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(469, 46);
			this->panControlButtons->TabIndex = 44;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &EditForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &EditForm::panControlButtons_MouseMove);
			// 
			// tbCity
			// 
			this->tbCity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbCity->Location = System::Drawing::Point(268, 246);
			this->tbCity->Name = L"tbCity";
			this->tbCity->Size = System::Drawing::Size(163, 22);
			this->tbCity->TabIndex = 33;
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbCity->Location = System::Drawing::Point(240, 224);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(29, 17);
			this->lbCity->TabIndex = 32;
			this->lbCity->Text = L"City";
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbAddress->Location = System::Drawing::Point(268, 189);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(163, 22);
			this->tbAddress->TabIndex = 31;
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbAddress->Location = System::Drawing::Point(240, 166);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(56, 17);
			this->lbAddress->TabIndex = 30;
			this->lbAddress->Text = L"Address";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbEmail->Location = System::Drawing::Point(268, 135);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(163, 22);
			this->tbEmail->TabIndex = 29;
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbEmail->Location = System::Drawing::Point(240, 111);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(39, 17);
			this->lbEmail->TabIndex = 28;
			this->lbEmail->Text = L"Email";
			// 
			// tbMobilePhone
			// 
			this->tbMobilePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMobilePhone->Location = System::Drawing::Point(268, 83);
			this->tbMobilePhone->Name = L"tbMobilePhone";
			this->tbMobilePhone->Size = System::Drawing::Size(163, 22);
			this->tbMobilePhone->TabIndex = 27;
			// 
			// lbMobilePhone
			// 
			this->lbMobilePhone->AutoSize = true;
			this->lbMobilePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbMobilePhone->Location = System::Drawing::Point(240, 58);
			this->lbMobilePhone->Name = L"lbMobilePhone";
			this->lbMobilePhone->Size = System::Drawing::Size(89, 17);
			this->lbMobilePhone->TabIndex = 26;
			this->lbMobilePhone->Text = L"Mobile Phone";
			// 
			// tbWorkPhone
			// 
			this->tbWorkPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbWorkPhone->Location = System::Drawing::Point(32, 248);
			this->tbWorkPhone->Name = L"tbWorkPhone";
			this->tbWorkPhone->Size = System::Drawing::Size(163, 22);
			this->tbWorkPhone->TabIndex = 25;
			// 
			// lbWorkPhone
			// 
			this->lbWorkPhone->AutoSize = true;
			this->lbWorkPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWorkPhone->Location = System::Drawing::Point(13, 224);
			this->lbWorkPhone->Name = L"lbWorkPhone";
			this->lbWorkPhone->Size = System::Drawing::Size(78, 17);
			this->lbWorkPhone->TabIndex = 24;
			this->lbWorkPhone->Text = L"Work Phone";
			// 
			// tbHomePhone
			// 
			this->tbHomePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbHomePhone->Location = System::Drawing::Point(32, 191);
			this->tbHomePhone->Name = L"tbHomePhone";
			this->tbHomePhone->Size = System::Drawing::Size(163, 22);
			this->tbHomePhone->TabIndex = 23;
			// 
			// lbHomePhone
			// 
			this->lbHomePhone->AutoSize = true;
			this->lbHomePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbHomePhone->Location = System::Drawing::Point(13, 166);
			this->lbHomePhone->Name = L"lbHomePhone";
			this->lbHomePhone->Size = System::Drawing::Size(83, 17);
			this->lbHomePhone->TabIndex = 22;
			this->lbHomePhone->Text = L"Home Phone";
			// 
			// tbNote
			// 
			this->tbNote->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->tbNote->Location = System::Drawing::Point(32, 135);
			this->tbNote->Name = L"tbNote";
			this->tbNote->Size = System::Drawing::Size(163, 22);
			this->tbNote->TabIndex = 21;
			// 
			// lbNote
			// 
			this->lbNote->AutoSize = true;
			this->lbNote->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbNote->Location = System::Drawing::Point(13, 111);
			this->lbNote->Name = L"lbNote";
			this->lbNote->Size = System::Drawing::Size(37, 17);
			this->lbNote->TabIndex = 20;
			this->lbNote->Text = L"Note";
			// 
			// tbFullName
			// 
			this->tbFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFullName->Location = System::Drawing::Point(32, 83);
			this->tbFullName->Name = L"tbFullName";
			this->tbFullName->Size = System::Drawing::Size(163, 22);
			this->tbFullName->TabIndex = 19;
			// 
			// lbFullName
			// 
			this->lbFullName->AutoSize = true;
			this->lbFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbFullName->Location = System::Drawing::Point(12, 58);
			this->lbFullName->Name = L"lbFullName";
			this->lbFullName->Size = System::Drawing::Size(66, 17);
			this->lbFullName->TabIndex = 18;
			this->lbFullName->Text = L"Full Name";
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 363);
			this->Controls->Add(this->tbCity);
			this->Controls->Add(this->panBottomBorder2);
			this->Controls->Add(this->lbCity);
			this->Controls->Add(this->panInfo);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->panLeftBorder);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->btnAddEntry);
			this->Controls->Add(this->tbMobilePhone);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lbMobilePhone);
			this->Controls->Add(this->panControlButtons);
			this->Controls->Add(this->tbWorkPhone);
			this->Controls->Add(this->lbFullName);
			this->Controls->Add(this->lbWorkPhone);
			this->Controls->Add(this->tbFullName);
			this->Controls->Add(this->tbHomePhone);
			this->Controls->Add(this->lbNote);
			this->Controls->Add(this->lbHomePhone);
			this->Controls->Add(this->tbNote);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EditForm";
			this->Text = L"EditForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->panInfo->ResumeLayout(false);
			this->panInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Point mouseLocation;
		MainForm^ mainForm;
		DataGridViewRow^ row;
		Resources::ResourceManager^ rmEditForm;
		Resources::ResourceManager^ rmGlobal;

	private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnAddEntry_Click(System::Object^  sender, System::EventArgs^  e);
};
}