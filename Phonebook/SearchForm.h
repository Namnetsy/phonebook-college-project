#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchForm
	/// </summary>
	public ref class SearchForm : public System::Windows::Forms::Form
	{
	public:
		SearchForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private:
		Point mouseLocation;
	private: System::Windows::Forms::ToolTip^  toolTip;
			 bool isDown;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panControlButtons;
	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::PictureBox^  picXout;
	protected:

	protected:


	private: System::Windows::Forms::Label^  lbWindowTitle;
	private: System::Windows::Forms::TextBox^  tbSearch;


	private: System::Windows::Forms::Label^  lbSearch;
	private: System::Windows::Forms::Label^  lbAdvancedOptions;
	private: System::Windows::Forms::CheckBox^  chbFullName;

	private: System::Windows::Forms::CheckBox^  chbEmail;

	private: System::Windows::Forms::CheckBox^  chbPhoneNumber;
	private: System::Windows::Forms::CheckBox^  chbAddress;
	private: System::Windows::Forms::CheckBox^  chbCity;









	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panLeftBottom;
	private: System::Windows::Forms::Panel^  panBottomBorder;


	private: System::Windows::Forms::Panel^  panInfo;
	private: System::Windows::Forms::Label^  lbinfo;


	private: System::Windows::Forms::PictureBox^  picHelp;
	private: System::Windows::Forms::Panel^  panBottomBorder2;


	private: System::Windows::Forms::Panel^  panRightBorder;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->lbSearch = (gcnew System::Windows::Forms::Label());
			this->lbAdvancedOptions = (gcnew System::Windows::Forms::Label());
			this->chbFullName = (gcnew System::Windows::Forms::CheckBox());
			this->chbEmail = (gcnew System::Windows::Forms::CheckBox());
			this->chbPhoneNumber = (gcnew System::Windows::Forms::CheckBox());
			this->chbAddress = (gcnew System::Windows::Forms::CheckBox());
			this->chbCity = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panLeftBottom = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder = (gcnew System::Windows::Forms::Panel());
			this->panInfo = (gcnew System::Windows::Forms::Panel());
			this->lbinfo = (gcnew System::Windows::Forms::Label());
			this->picHelp = (gcnew System::Windows::Forms::PictureBox());
			this->panBottomBorder2 = (gcnew System::Windows::Forms::Panel());
			this->panRightBorder = (gcnew System::Windows::Forms::Panel());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->panInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->BeginInit();
			this->SuspendLayout();
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
			this->panControlButtons->Size = System::Drawing::Size(362, 46);
			this->panControlButtons->TabIndex = 2;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::panControlButtons_MouseMove);
			this->panControlButtons->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchForm::panControlButtons_MouseUp);
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
			this->picXout->Location = System::Drawing::Point(320, 8);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &SearchForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &SearchForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &SearchForm::picXout_MouseLeave);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 13);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(70, 24);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Search";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbSearch
			// 
			this->tbSearch->Location = System::Drawing::Point(48, 86);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(254, 20);
			this->tbSearch->TabIndex = 3;
			// 
			// lbSearch
			// 
			this->lbSearch->AutoSize = true;
			this->lbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbSearch->Location = System::Drawing::Point(31, 60);
			this->lbSearch->Name = L"lbSearch";
			this->lbSearch->Size = System::Drawing::Size(199, 16);
			this->lbSearch->TabIndex = 4;
			this->lbSearch->Text = L"Basic search (by keywords)";
			// 
			// lbAdvancedOptions
			// 
			this->lbAdvancedOptions->AutoSize = true;
			this->lbAdvancedOptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbAdvancedOptions->Location = System::Drawing::Point(34, 128);
			this->lbAdvancedOptions->Name = L"lbAdvancedOptions";
			this->lbAdvancedOptions->Size = System::Drawing::Size(184, 16);
			this->lbAdvancedOptions->TabIndex = 5;
			this->lbAdvancedOptions->Text = L"Advanced search options";
			// 
			// chbFullName
			// 
			this->chbFullName->AutoSize = true;
			this->chbFullName->Location = System::Drawing::Point(48, 157);
			this->chbFullName->Name = L"chbFullName";
			this->chbFullName->Size = System::Drawing::Size(119, 17);
			this->chbFullName->TabIndex = 6;
			this->chbFullName->Text = L"Search by full name";
			this->chbFullName->UseVisualStyleBackColor = true;
			// 
			// chbEmail
			// 
			this->chbEmail->AutoSize = true;
			this->chbEmail->Location = System::Drawing::Point(48, 183);
			this->chbEmail->Name = L"chbEmail";
			this->chbEmail->Size = System::Drawing::Size(101, 17);
			this->chbEmail->TabIndex = 7;
			this->chbEmail->Text = L"Search by email";
			this->chbEmail->UseVisualStyleBackColor = true;
			// 
			// chbPhoneNumber
			// 
			this->chbPhoneNumber->AutoSize = true;
			this->chbPhoneNumber->Location = System::Drawing::Point(48, 206);
			this->chbPhoneNumber->Name = L"chbPhoneNumber";
			this->chbPhoneNumber->Size = System::Drawing::Size(150, 17);
			this->chbPhoneNumber->TabIndex = 8;
			this->chbPhoneNumber->Text = L"Search by phone numbers";
			this->chbPhoneNumber->UseVisualStyleBackColor = true;
			// 
			// chbAddress
			// 
			this->chbAddress->AutoSize = true;
			this->chbAddress->Location = System::Drawing::Point(48, 229);
			this->chbAddress->Name = L"chbAddress";
			this->chbAddress->Size = System::Drawing::Size(114, 17);
			this->chbAddress->TabIndex = 9;
			this->chbAddress->Text = L"Search by address";
			this->chbAddress->UseVisualStyleBackColor = true;
			// 
			// chbCity
			// 
			this->chbCity->AutoSize = true;
			this->chbCity->Location = System::Drawing::Point(48, 252);
			this->chbCity->Name = L"chbCity";
			this->chbCity->Size = System::Drawing::Size(93, 17);
			this->chbCity->TabIndex = 10;
			this->chbCity->Text = L"Search by city";
			this->chbCity->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(217, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 37);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panLeftBottom
			// 
			this->panLeftBottom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panLeftBottom->Location = System::Drawing::Point(0, 0);
			this->panLeftBottom->Name = L"panLeftBottom";
			this->panLeftBottom->Size = System::Drawing::Size(3, 357);
			this->panLeftBottom->TabIndex = 12;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder->Location = System::Drawing::Point(0, 328);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(362, 3);
			this->panBottomBorder->TabIndex = 13;
			// 
			// panInfo
			// 
			this->panInfo->Controls->Add(this->lbinfo);
			this->panInfo->Controls->Add(this->picHelp);
			this->panInfo->Location = System::Drawing::Point(3, 331);
			this->panInfo->Name = L"panInfo";
			this->panInfo->Size = System::Drawing::Size(359, 23);
			this->panInfo->TabIndex = 14;
			// 
			// lbinfo
			// 
			this->lbinfo->Location = System::Drawing::Point(7, 3);
			this->lbinfo->Name = L"lbinfo";
			this->lbinfo->Size = System::Drawing::Size(131, 13);
			this->lbinfo->TabIndex = 0;
			this->lbinfo->Text = L"Please, fill out this filed";
			// 
			// picHelp
			// 
			this->picHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHelp.Image")));
			this->picHelp->Location = System::Drawing::Point(331, 0);
			this->picHelp->Name = L"picHelp";
			this->picHelp->Size = System::Drawing::Size(28, 19);
			this->picHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picHelp->TabIndex = 7;
			this->picHelp->TabStop = false;
			this->toolTip->SetToolTip(this->picHelp, L"Help");
			// 
			// panBottomBorder2
			// 
			this->panBottomBorder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder2->Location = System::Drawing::Point(0, 351);
			this->panBottomBorder2->Name = L"panBottomBorder2";
			this->panBottomBorder2->Size = System::Drawing::Size(363, 3);
			this->panBottomBorder2->TabIndex = 15;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panRightBorder->Location = System::Drawing::Point(360, 0);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 354);
			this->panRightBorder->TabIndex = 16;
			// 
			// SearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 354);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->panBottomBorder2);
			this->Controls->Add(this->panInfo);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->panLeftBottom);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chbCity);
			this->Controls->Add(this->chbAddress);
			this->Controls->Add(this->chbPhoneNumber);
			this->Controls->Add(this->chbEmail);
			this->Controls->Add(this->chbFullName);
			this->Controls->Add(this->lbAdvancedOptions);
			this->Controls->Add(this->lbSearch);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SearchForm";
			this->Text = L"SearchForm";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->panInfo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
};
}
