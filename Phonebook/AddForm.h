#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbFullName;
	private: System::Windows::Forms::TextBox^  tbFullName;
	private: System::Windows::Forms::Label^  lbNote;
	private: System::Windows::Forms::TextBox^  tbNote;
	private: System::Windows::Forms::Label^  lbHomePhone;
	private: System::Windows::Forms::TextBox^  tbHomePhone;
	private: System::Windows::Forms::Label^  lbWorkPhone;
	private: System::Windows::Forms::TextBox^  tbWorkPhone;
	protected:

	protected:









	private: System::Windows::Forms::Label^  lbMobilePhone;

	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  lbEmail;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  lbAddress;
	private: System::Windows::Forms::TextBox^  tbAddress;
	private: System::Windows::Forms::Label^  lbCity;
	private: System::Windows::Forms::TextBox^  tbCity;




	private: System::Windows::Forms::Panel^  panControlButtons;





	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::PictureBox^  picXout;



	private: System::Windows::Forms::Label^  lbWindowTitle;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panLeftBorder;
	private: System::Windows::Forms::Panel^  panRightBorder;
	private: System::Windows::Forms::Panel^  panBottomBorder;



	private: System::Windows::Forms::Panel^  panInfo;
	private: System::Windows::Forms::Label^  lbAmountEntries;
	private: System::Windows::Forms::PictureBox^  picHelp;
	private: System::Windows::Forms::Panel^  panBottomBorder2;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddForm::typeid));
			this->lbFullName = (gcnew System::Windows::Forms::Label());
			this->tbFullName = (gcnew System::Windows::Forms::TextBox());
			this->lbNote = (gcnew System::Windows::Forms::Label());
			this->tbNote = (gcnew System::Windows::Forms::TextBox());
			this->lbHomePhone = (gcnew System::Windows::Forms::Label());
			this->tbHomePhone = (gcnew System::Windows::Forms::TextBox());
			this->lbWorkPhone = (gcnew System::Windows::Forms::Label());
			this->tbWorkPhone = (gcnew System::Windows::Forms::TextBox());
			this->lbMobilePhone = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbCity = (gcnew System::Windows::Forms::Label());
			this->tbCity = (gcnew System::Windows::Forms::TextBox());
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->panRightBorder = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder = (gcnew System::Windows::Forms::Panel());
			this->panInfo = (gcnew System::Windows::Forms::Panel());
			this->lbAmountEntries = (gcnew System::Windows::Forms::Label());
			this->picHelp = (gcnew System::Windows::Forms::PictureBox());
			this->panBottomBorder2 = (gcnew System::Windows::Forms::Panel());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->panInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->BeginInit();
			this->SuspendLayout();
			// 
			// lbFullName
			// 
			this->lbFullName->AutoSize = true;
			this->lbFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbFullName->Location = System::Drawing::Point(12, 58);
			this->lbFullName->Name = L"lbFullName";
			this->lbFullName->Size = System::Drawing::Size(64, 15);
			this->lbFullName->TabIndex = 0;
			this->lbFullName->Text = L"Full Name";
			// 
			// tbFullName
			// 
			this->tbFullName->Location = System::Drawing::Point(32, 83);
			this->tbFullName->Name = L"tbFullName";
			this->tbFullName->Size = System::Drawing::Size(163, 20);
			this->tbFullName->TabIndex = 1;
			// 
			// lbNote
			// 
			this->lbNote->AutoSize = true;
			this->lbNote->Location = System::Drawing::Point(13, 116);
			this->lbNote->Name = L"lbNote";
			this->lbNote->Size = System::Drawing::Size(30, 13);
			this->lbNote->TabIndex = 2;
			this->lbNote->Text = L"Note";
			// 
			// tbNote
			// 
			this->tbNote->Location = System::Drawing::Point(32, 135);
			this->tbNote->Name = L"tbNote";
			this->tbNote->Size = System::Drawing::Size(163, 20);
			this->tbNote->TabIndex = 3;
			// 
			// lbHomePhone
			// 
			this->lbHomePhone->AutoSize = true;
			this->lbHomePhone->Location = System::Drawing::Point(13, 166);
			this->lbHomePhone->Name = L"lbHomePhone";
			this->lbHomePhone->Size = System::Drawing::Size(69, 13);
			this->lbHomePhone->TabIndex = 6;
			this->lbHomePhone->Text = L"Home Phone";
			// 
			// tbHomePhone
			// 
			this->tbHomePhone->Location = System::Drawing::Point(32, 191);
			this->tbHomePhone->Name = L"tbHomePhone";
			this->tbHomePhone->Size = System::Drawing::Size(163, 20);
			this->tbHomePhone->TabIndex = 7;
			// 
			// lbWorkPhone
			// 
			this->lbWorkPhone->AutoSize = true;
			this->lbWorkPhone->Location = System::Drawing::Point(13, 225);
			this->lbWorkPhone->Name = L"lbWorkPhone";
			this->lbWorkPhone->Size = System::Drawing::Size(67, 13);
			this->lbWorkPhone->TabIndex = 8;
			this->lbWorkPhone->Text = L"Work Phone";
			// 
			// tbWorkPhone
			// 
			this->tbWorkPhone->Location = System::Drawing::Point(32, 248);
			this->tbWorkPhone->Name = L"tbWorkPhone";
			this->tbWorkPhone->Size = System::Drawing::Size(163, 20);
			this->tbWorkPhone->TabIndex = 9;
			// 
			// lbMobilePhone
			// 
			this->lbMobilePhone->AutoSize = true;
			this->lbMobilePhone->Location = System::Drawing::Point(312, 60);
			this->lbMobilePhone->Name = L"lbMobilePhone";
			this->lbMobilePhone->Size = System::Drawing::Size(72, 13);
			this->lbMobilePhone->TabIndex = 10;
			this->lbMobilePhone->Text = L"Mobile Phone";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(340, 83);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 20);
			this->textBox5->TabIndex = 11;
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Location = System::Drawing::Point(312, 116);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(32, 13);
			this->lbEmail->TabIndex = 12;
			this->lbEmail->Text = L"Email";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(340, 135);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(163, 20);
			this->textBox6->TabIndex = 13;
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(312, 166);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(45, 13);
			this->lbAddress->TabIndex = 14;
			this->lbAddress->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(340, 189);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(163, 20);
			this->tbAddress->TabIndex = 15;
			// 
			// lbCity
			// 
			this->lbCity->AutoSize = true;
			this->lbCity->Location = System::Drawing::Point(312, 221);
			this->lbCity->Name = L"lbCity";
			this->lbCity->Size = System::Drawing::Size(24, 13);
			this->lbCity->TabIndex = 16;
			this->lbCity->Text = L"City";
			// 
			// tbCity
			// 
			this->tbCity->Location = System::Drawing::Point(340, 246);
			this->tbCity->Name = L"tbCity";
			this->tbCity->Size = System::Drawing::Size(163, 20);
			this->tbCity->TabIndex = 17;
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
			this->panControlButtons->Size = System::Drawing::Size(612, 46);
			this->panControlButtons->TabIndex = 20;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddForm::panControlButtons_MouseMove);
			this->panControlButtons->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AddForm::panControlButtons_MouseUp);
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
			this->picXout->Location = System::Drawing::Point(568, 8);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &AddForm::picXout_Click);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 13);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(137, 24);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Add New Entry";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(471, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Add to Phonebook";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panLeftBorder
			// 
			this->panLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panLeftBorder->Location = System::Drawing::Point(0, 3);
			this->panLeftBorder->Name = L"panLeftBorder";
			this->panLeftBorder->Size = System::Drawing::Size(3, 363);
			this->panLeftBorder->TabIndex = 22;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panRightBorder->Location = System::Drawing::Point(609, 3);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 363);
			this->panRightBorder->TabIndex = 23;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder->Location = System::Drawing::Point(3, 333);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(609, 3);
			this->panBottomBorder->TabIndex = 24;
			// 
			// panInfo
			// 
			this->panInfo->Controls->Add(this->lbAmountEntries);
			this->panInfo->Controls->Add(this->picHelp);
			this->panInfo->Location = System::Drawing::Point(3, 336);
			this->panInfo->Name = L"panInfo";
			this->panInfo->Size = System::Drawing::Size(606, 23);
			this->panInfo->TabIndex = 25;
			// 
			// lbAmountEntries
			// 
			this->lbAmountEntries->AutoSize = true;
			this->lbAmountEntries->Location = System::Drawing::Point(9, 5);
			this->lbAmountEntries->Name = L"lbAmountEntries";
			this->lbAmountEntries->Size = System::Drawing::Size(153, 13);
			this->lbAmountEntries->TabIndex = 8;
			this->lbAmountEntries->Text = L"Please, fill out all of these fileds";
			// 
			// picHelp
			// 
			this->picHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHelp.Image")));
			this->picHelp->Location = System::Drawing::Point(575, 2);
			this->picHelp->Name = L"picHelp";
			this->picHelp->Size = System::Drawing::Size(28, 19);
			this->picHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picHelp->TabIndex = 7;
			this->picHelp->TabStop = false;
			// 
			// panBottomBorder2
			// 
			this->panBottomBorder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder2->Location = System::Drawing::Point(0, 360);
			this->panBottomBorder2->Name = L"panBottomBorder2";
			this->panBottomBorder2->Size = System::Drawing::Size(612, 3);
			this->panBottomBorder2->TabIndex = 26;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 363);
			this->Controls->Add(this->panBottomBorder2);
			this->Controls->Add(this->panInfo);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->panLeftBorder);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panControlButtons);
			this->Controls->Add(this->tbCity);
			this->Controls->Add(this->lbCity);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->lbMobilePhone);
			this->Controls->Add(this->tbWorkPhone);
			this->Controls->Add(this->lbWorkPhone);
			this->Controls->Add(this->tbHomePhone);
			this->Controls->Add(this->lbHomePhone);
			this->Controls->Add(this->tbNote);
			this->Controls->Add(this->lbNote);
			this->Controls->Add(this->tbFullName);
			this->Controls->Add(this->lbFullName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddForm";
			this->Text = L"Adding New Entry";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->panInfo->ResumeLayout(false);
			this->panInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
};
}