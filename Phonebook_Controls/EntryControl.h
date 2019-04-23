#pragma once

#include "../Phonebook/PhonebookEntry.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PhonebookControls {

	/// <summary>
	/// Summary for EntryControl
	/// </summary>
	public ref class EntryControl : public System::Windows::Forms::UserControl
	{
	public:
		EntryControl(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EntryControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picPhoto;
	protected:

	private: System::Windows::Forms::Label^  lbFullName;
	private: System::Windows::Forms::PictureBox^  picShowMore;
	private: System::Windows::Forms::RichTextBox^  rtbFullName;
	private: System::Windows::Forms::Panel^  panSeparator;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lbEmail;

	private: System::Windows::Forms::Label^  lbHeadingEmail;
	private: System::Windows::Forms::Label^  lbCity;


	private: System::Windows::Forms::Label^  lbHeadingCity;
	private: System::Windows::Forms::Label^  lbCountry;



	private: System::Windows::Forms::Label^  lbHeadingCountry;
	private: System::Windows::Forms::Label^  lbWorkPhone;


	private: System::Windows::Forms::Label^  lbHeadingWorkPhone;
	private: System::Windows::Forms::Label^  lbHomePhone;


	private: System::Windows::Forms::Label^  lbHeadingHomePhone;


	private: System::Windows::Forms::Label^  lbMobilePhone;
	private: System::Windows::Forms::Label^  lbHeadingMobilePhone;


	private: System::Windows::Forms::RichTextBox^  rtbMobilePhone;
	private: System::Windows::Forms::RichTextBox^  rtbHomePhone;
	private: System::Windows::Forms::RichTextBox^  rtbWorkPhone;
	private: System::Windows::Forms::RichTextBox^  rtbCountry;
	private: System::Windows::Forms::RichTextBox^  rtbCity;
	private: System::Windows::Forms::RichTextBox^  rtbEmail;
















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EntryControl::typeid));
			this->picPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->lbFullName = (gcnew System::Windows::Forms::Label());
			this->picShowMore = (gcnew System::Windows::Forms::PictureBox());
			this->rtbFullName = (gcnew System::Windows::Forms::RichTextBox());
			this->panSeparator = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbHeadingEmail = (gcnew System::Windows::Forms::Label());
			this->lbHeadingCity = (gcnew System::Windows::Forms::Label());
			this->lbHeadingCountry = (gcnew System::Windows::Forms::Label());
			this->lbHeadingWorkPhone = (gcnew System::Windows::Forms::Label());
			this->lbHeadingHomePhone = (gcnew System::Windows::Forms::Label());
			this->lbHeadingMobilePhone = (gcnew System::Windows::Forms::Label());
			this->rtbMobilePhone = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbHomePhone = (gcnew System::Windows::Forms::RichTextBox());
			this->lbMobilePhone = (gcnew System::Windows::Forms::Label());
			this->lbHomePhone = (gcnew System::Windows::Forms::Label());
			this->rtbWorkPhone = (gcnew System::Windows::Forms::RichTextBox());
			this->lbWorkPhone = (gcnew System::Windows::Forms::Label());
			this->rtbCountry = (gcnew System::Windows::Forms::RichTextBox());
			this->lbCountry = (gcnew System::Windows::Forms::Label());
			this->rtbCity = (gcnew System::Windows::Forms::RichTextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->rtbEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowMore))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// picPhoto
			// 
			this->picPhoto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPhoto.Image")));
			this->picPhoto->Location = System::Drawing::Point(4, 4);
			this->picPhoto->Name = L"picPhoto";
			this->picPhoto->Size = System::Drawing::Size(45, 39);
			this->picPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picPhoto->TabIndex = 0;
			this->picPhoto->TabStop = false;
			// 
			// lbFullName
			// 
			this->lbFullName->AutoSize = true;
			this->lbFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbFullName->Location = System::Drawing::Point(55, 4);
			this->lbFullName->Name = L"lbFullName";
			this->lbFullName->Size = System::Drawing::Size(158, 32);
			this->lbFullName->TabIndex = 1;
			this->lbFullName->Text = L"Vasya Pupkin";
			this->lbFullName->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbFullName_DoubleClick);
			// 
			// picShowMore
			// 
			this->picShowMore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picShowMore.Image")));
			this->picShowMore->Location = System::Drawing::Point(992, 10);
			this->picShowMore->Name = L"picShowMore";
			this->picShowMore->Size = System::Drawing::Size(28, 26);
			this->picShowMore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picShowMore->TabIndex = 2;
			this->picShowMore->TabStop = false;
			this->picShowMore->Click += gcnew System::EventHandler(this, &EntryControl::picShowMore_Click);
			// 
			// rtbFullName
			// 
			this->rtbFullName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->rtbFullName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbFullName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold));
			this->rtbFullName->HideSelection = false;
			this->rtbFullName->Location = System::Drawing::Point(61, 4);
			this->rtbFullName->Name = L"rtbFullName";
			this->rtbFullName->Size = System::Drawing::Size(838, 39);
			this->rtbFullName->TabIndex = 3;
			this->rtbFullName->Text = L"";
			this->rtbFullName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbFullName_KeyPress);
			// 
			// panSeparator
			// 
			this->panSeparator->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panSeparator->Location = System::Drawing::Point(0, 50);
			this->panSeparator->Name = L"panSeparator";
			this->panSeparator->Size = System::Drawing::Size(1029, 1);
			this->panSeparator->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->panel1->Controls->Add(this->lbHeadingEmail);
			this->panel1->Controls->Add(this->lbHeadingCity);
			this->panel1->Controls->Add(this->lbHeadingCountry);
			this->panel1->Controls->Add(this->lbHeadingWorkPhone);
			this->panel1->Controls->Add(this->lbHeadingHomePhone);
			this->panel1->Controls->Add(this->lbHeadingMobilePhone);
			this->panel1->Controls->Add(this->rtbMobilePhone);
			this->panel1->Controls->Add(this->rtbHomePhone);
			this->panel1->Controls->Add(this->lbMobilePhone);
			this->panel1->Controls->Add(this->lbHomePhone);
			this->panel1->Controls->Add(this->rtbWorkPhone);
			this->panel1->Controls->Add(this->lbWorkPhone);
			this->panel1->Controls->Add(this->rtbCountry);
			this->panel1->Controls->Add(this->lbCountry);
			this->panel1->Controls->Add(this->rtbCity);
			this->panel1->Controls->Add(this->lbCity);
			this->panel1->Controls->Add(this->rtbEmail);
			this->panel1->Controls->Add(this->lbEmail);
			this->panel1->Location = System::Drawing::Point(0, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1029, 49);
			this->panel1->TabIndex = 5;
			// 
			// lbHeadingEmail
			// 
			this->lbHeadingEmail->AutoSize = true;
			this->lbHeadingEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingEmail->Location = System::Drawing::Point(601, 4);
			this->lbHeadingEmail->Name = L"lbHeadingEmail";
			this->lbHeadingEmail->Size = System::Drawing::Size(43, 19);
			this->lbHeadingEmail->TabIndex = 27;
			this->lbHeadingEmail->Text = L"Email";
			// 
			// lbHeadingCity
			// 
			this->lbHeadingCity->AutoSize = true;
			this->lbHeadingCity->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingCity->Location = System::Drawing::Point(499, 4);
			this->lbHeadingCity->Name = L"lbHeadingCity";
			this->lbHeadingCity->Size = System::Drawing::Size(34, 19);
			this->lbHeadingCity->TabIndex = 25;
			this->lbHeadingCity->Text = L"City";
			// 
			// lbHeadingCountry
			// 
			this->lbHeadingCountry->AutoSize = true;
			this->lbHeadingCountry->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingCountry->Location = System::Drawing::Point(403, 4);
			this->lbHeadingCountry->Name = L"lbHeadingCountry";
			this->lbHeadingCountry->Size = System::Drawing::Size(60, 19);
			this->lbHeadingCountry->TabIndex = 23;
			this->lbHeadingCountry->Text = L"Country";
			// 
			// lbHeadingWorkPhone
			// 
			this->lbHeadingWorkPhone->AutoSize = true;
			this->lbHeadingWorkPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingWorkPhone->Location = System::Drawing::Point(269, 4);
			this->lbHeadingWorkPhone->Name = L"lbHeadingWorkPhone";
			this->lbHeadingWorkPhone->Size = System::Drawing::Size(86, 19);
			this->lbHeadingWorkPhone->TabIndex = 21;
			this->lbHeadingWorkPhone->Text = L"Work phone";
			// 
			// lbHeadingHomePhone
			// 
			this->lbHeadingHomePhone->AutoSize = true;
			this->lbHeadingHomePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingHomePhone->Location = System::Drawing::Point(151, 4);
			this->lbHeadingHomePhone->Name = L"lbHeadingHomePhone";
			this->lbHeadingHomePhone->Size = System::Drawing::Size(89, 19);
			this->lbHeadingHomePhone->TabIndex = 19;
			this->lbHeadingHomePhone->Text = L"Home phone";
			// 
			// lbHeadingMobilePhone
			// 
			this->lbHeadingMobilePhone->AutoSize = true;
			this->lbHeadingMobilePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10, System::Drawing::FontStyle::Bold));
			this->lbHeadingMobilePhone->Location = System::Drawing::Point(21, 4);
			this->lbHeadingMobilePhone->Name = L"lbHeadingMobilePhone";
			this->lbHeadingMobilePhone->Size = System::Drawing::Size(96, 19);
			this->lbHeadingMobilePhone->TabIndex = 17;
			this->lbHeadingMobilePhone->Text = L"Mobile phone";
			// 
			// rtbMobilePhone
			// 
			this->rtbMobilePhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbMobilePhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbMobilePhone->Location = System::Drawing::Point(36, 29);
			this->rtbMobilePhone->Name = L"rtbMobilePhone";
			this->rtbMobilePhone->Size = System::Drawing::Size(94, 15);
			this->rtbMobilePhone->TabIndex = 29;
			this->rtbMobilePhone->Text = L"";
			this->rtbMobilePhone->Visible = false;
			this->rtbMobilePhone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbMobilePhone_KeyPress);
			// 
			// rtbHomePhone
			// 
			this->rtbHomePhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbHomePhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbHomePhone->Location = System::Drawing::Point(169, 29);
			this->rtbHomePhone->Name = L"rtbHomePhone";
			this->rtbHomePhone->Size = System::Drawing::Size(79, 15);
			this->rtbHomePhone->TabIndex = 30;
			this->rtbHomePhone->Text = L"";
			this->rtbHomePhone->Visible = false;
			this->rtbHomePhone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbHomePhone_KeyPress);
			// 
			// lbMobilePhone
			// 
			this->lbMobilePhone->AutoSize = true;
			this->lbMobilePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbMobilePhone->Location = System::Drawing::Point(36, 29);
			this->lbMobilePhone->Name = L"lbMobilePhone";
			this->lbMobilePhone->Size = System::Drawing::Size(87, 15);
			this->lbMobilePhone->TabIndex = 18;
			this->lbMobilePhone->Text = L"+380778259376";
			this->lbMobilePhone->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbMobilePhone_DoubleClick);
			// 
			// lbHomePhone
			// 
			this->lbHomePhone->AutoSize = true;
			this->lbHomePhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbHomePhone->Location = System::Drawing::Point(166, 29);
			this->lbHomePhone->Name = L"lbHomePhone";
			this->lbHomePhone->Size = System::Drawing::Size(71, 15);
			this->lbHomePhone->TabIndex = 20;
			this->lbHomePhone->Text = L"72-490-3908";
			this->lbHomePhone->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbHomePhone_DoubleClick);
			// 
			// rtbWorkPhone
			// 
			this->rtbWorkPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbWorkPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbWorkPhone->Location = System::Drawing::Point(287, 29);
			this->rtbWorkPhone->Name = L"rtbWorkPhone";
			this->rtbWorkPhone->Size = System::Drawing::Size(100, 15);
			this->rtbWorkPhone->TabIndex = 31;
			this->rtbWorkPhone->Text = L"";
			this->rtbWorkPhone->Visible = false;
			this->rtbWorkPhone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbWorkPhone_KeyPress);
			// 
			// lbWorkPhone
			// 
			this->lbWorkPhone->AutoSize = true;
			this->lbWorkPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWorkPhone->Location = System::Drawing::Point(284, 29);
			this->lbWorkPhone->Name = L"lbWorkPhone";
			this->lbWorkPhone->Size = System::Drawing::Size(87, 15);
			this->lbWorkPhone->TabIndex = 22;
			this->lbWorkPhone->Text = L"+703884762864";
			this->lbWorkPhone->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbWorkPhone_DoubleClick);
			// 
			// rtbCountry
			// 
			this->rtbCountry->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbCountry->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbCountry->Location = System::Drawing::Point(421, 29);
			this->rtbCountry->Name = L"rtbCountry";
			this->rtbCountry->Size = System::Drawing::Size(54, 15);
			this->rtbCountry->TabIndex = 32;
			this->rtbCountry->Text = L"";
			this->rtbCountry->Visible = false;
			this->rtbCountry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbCountry_KeyPress);
			// 
			// lbCountry
			// 
			this->lbCountry->AutoSize = true;
			this->lbCountry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbCountry->Location = System::Drawing::Point(418, 29);
			this->lbCountry->Name = L"lbCountry";
			this->lbCountry->Size = System::Drawing::Size(47, 15);
			this->lbCountry->TabIndex = 24;
			this->lbCountry->Text = L"Ukraine";
			this->lbCountry->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbCountry_DoubleClick);
			// 
			// rtbCity
			// 
			this->rtbCity->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbCity->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbCity->Location = System::Drawing::Point(514, 29);
			this->rtbCity->Name = L"rtbCity";
			this->rtbCity->Size = System::Drawing::Size(57, 15);
			this->rtbCity->TabIndex = 33;
			this->rtbCity->Text = L"";
			this->rtbCity->Visible = false;
			this->rtbCity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbCity_KeyPress);
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbCity->Location = System::Drawing::Point(511, 29);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(60, 15);
			this->lbCity->TabIndex = 26;
			this->lbCity->Text = L"Chernivtsi";
			this->lbCity->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbCity_DoubleClick);
			// 
			// rtbEmail
			// 
			this->rtbEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->rtbEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbEmail->Location = System::Drawing::Point(616, 29);
			this->rtbEmail->Name = L"rtbEmail";
			this->rtbEmail->Size = System::Drawing::Size(138, 15);
			this->rtbEmail->TabIndex = 34;
			this->rtbEmail->Text = L"";
			this->rtbEmail->Visible = false;
			this->rtbEmail->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &EntryControl::rtbEmail_KeyPress);
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbEmail->Location = System::Drawing::Point(613, 29);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(141, 15);
			this->lbEmail->TabIndex = 28;
			this->lbEmail->Text = L"someone@domain.name";
			this->lbEmail->DoubleClick += gcnew System::EventHandler(this, &EntryControl::lbEmail_DoubleClick);
			// 
			// EntryControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panSeparator);
			this->Controls->Add(this->picShowMore);
			this->Controls->Add(this->picPhoto);
			this->Controls->Add(this->rtbFullName);
			this->Controls->Add(this->lbFullName);
			this->Margin = System::Windows::Forms::Padding(0);
			this->Name = L"EntryControl";
			this->Size = System::Drawing::Size(1029, 50);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowMore))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		PhonebookEntry::Entry getEntry();
	private:
		void editTextInLabel(RichTextBox^, Label^);

	private: System::Void picShowMore_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbFullName_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbFullName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbMobilePhone_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbMobilePhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbHomePhone_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbHomePhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void rtbWorkPhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbWorkPhone_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbCountry_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbCountry_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbCity_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbCity_DoubleClick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rtbEmail_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void lbEmail_DoubleClick(System::Object^  sender, System::EventArgs^  e);
};
}
