#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CategoryManagerForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panControlButtons;
	protected:

	private: System::Windows::Forms::Label^  lbWindowTitle;
	private: System::Windows::Forms::Panel^  panToolbar;









	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::PictureBox^  picMinimize;
	private: System::Windows::Forms::PictureBox^  picAddEntry;
	private: System::Windows::Forms::PictureBox^  picRemoveEntry;
	private: System::Windows::Forms::Panel^  panTopBorder;






	private: System::Windows::Forms::Panel^  panLeftBorder;
	private: System::Windows::Forms::Panel^  panBottomBorder;


	private: System::Windows::Forms::Panel^  panRightBorder;

	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::DataGridView^  dgPhonebookEntries;
	private: System::Windows::Forms::Label^  lbAmountEntries;















	private: System::Windows::Forms::PictureBox^  picHelp;
	private: System::Windows::Forms::Panel^  panInfo;


	private: System::Windows::Forms::PictureBox^  picSearch;
	private: System::Windows::Forms::Panel^  panBottomBorder2;













	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  note;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  homePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  workPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mobilePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  city;
	private: System::Windows::Forms::PictureBox^  picShowAll;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picMinimize = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->panToolbar = (gcnew System::Windows::Forms::Panel());
			this->picShowAll = (gcnew System::Windows::Forms::PictureBox());
			this->picSearch = (gcnew System::Windows::Forms::PictureBox());
			this->picRemoveEntry = (gcnew System::Windows::Forms::PictureBox());
			this->picAddEntry = (gcnew System::Windows::Forms::PictureBox());
			this->panTopBorder = (gcnew System::Windows::Forms::Panel());
			this->panLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder = (gcnew System::Windows::Forms::Panel());
			this->panRightBorder = (gcnew System::Windows::Forms::Panel());
			this->dgPhonebookEntries = (gcnew System::Windows::Forms::DataGridView());
			this->fullName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->note = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->homePhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->workPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mobilePhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->city = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbAmountEntries = (gcnew System::Windows::Forms::Label());
			this->picHelp = (gcnew System::Windows::Forms::PictureBox());
			this->panInfo = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder2 = (gcnew System::Windows::Forms::Panel());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->panToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowAll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRemoveEntry))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAddEntry))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPhonebookEntries))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->BeginInit();
			this->panInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panControlButtons->Controls->Add(this->picPhonebookIcon);
			this->panControlButtons->Controls->Add(this->picMinimize);
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->lbWindowTitle);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(1076, 46);
			this->panControlButtons->TabIndex = 0;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panControlButtons_MouseMove);
			this->panControlButtons->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panControlButtons_MouseUp);
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
			// picMinimize
			// 
			this->picMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picMinimize.Image")));
			this->picMinimize->Location = System::Drawing::Point(990, 8);
			this->picMinimize->Name = L"picMinimize";
			this->picMinimize->Size = System::Drawing::Size(37, 33);
			this->picMinimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picMinimize->TabIndex = 2;
			this->picMinimize->TabStop = false;
			this->picMinimize->Click += gcnew System::EventHandler(this, &MainForm::picMinimize_Click);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(1032, 8);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &MainForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &MainForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &MainForm::picXout_MouseLeave);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::Color::White;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 13);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(108, 24);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Phonebook";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panToolbar
			// 
			this->panToolbar->Controls->Add(this->picShowAll);
			this->panToolbar->Controls->Add(this->picSearch);
			this->panToolbar->Controls->Add(this->picRemoveEntry);
			this->panToolbar->Controls->Add(this->picAddEntry);
			this->panToolbar->Location = System::Drawing::Point(0, 47);
			this->panToolbar->Name = L"panToolbar";
			this->panToolbar->Size = System::Drawing::Size(1071, 33);
			this->panToolbar->TabIndex = 1;
			// 
			// picShowAll
			// 
			this->picShowAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picShowAll.Image")));
			this->picShowAll->Location = System::Drawing::Point(169, 4);
			this->picShowAll->Name = L"picShowAll";
			this->picShowAll->Size = System::Drawing::Size(45, 25);
			this->picShowAll->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picShowAll->TabIndex = 3;
			this->picShowAll->TabStop = false;
			this->picShowAll->MouseEnter += gcnew System::EventHandler(this, &MainForm::picShowAll_MouseEnter);
			this->picShowAll->MouseLeave += gcnew System::EventHandler(this, &MainForm::picShowAll_MouseLeave);
			// 
			// picSearch
			// 
			this->picSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSearch.Image")));
			this->picSearch->Location = System::Drawing::Point(118, 4);
			this->picSearch->Name = L"picSearch";
			this->picSearch->Size = System::Drawing::Size(45, 25);
			this->picSearch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSearch->TabIndex = 2;
			this->picSearch->TabStop = false;
			this->picSearch->Click += gcnew System::EventHandler(this, &MainForm::picSearch_Click);
			this->picSearch->MouseEnter += gcnew System::EventHandler(this, &MainForm::picSearch_MouseEnter);
			this->picSearch->MouseLeave += gcnew System::EventHandler(this, &MainForm::picSearch_MouseLeave);
			// 
			// picRemoveEntry
			// 
			this->picRemoveEntry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picRemoveEntry->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picRemoveEntry.Image")));
			this->picRemoveEntry->Location = System::Drawing::Point(67, 4);
			this->picRemoveEntry->Name = L"picRemoveEntry";
			this->picRemoveEntry->Size = System::Drawing::Size(45, 25);
			this->picRemoveEntry->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picRemoveEntry->TabIndex = 1;
			this->picRemoveEntry->TabStop = false;
			this->picRemoveEntry->MouseEnter += gcnew System::EventHandler(this, &MainForm::picRemoveEntry_MouseEnter);
			this->picRemoveEntry->MouseLeave += gcnew System::EventHandler(this, &MainForm::picRemoveEntry_MouseLeave);
			// 
			// picAddEntry
			// 
			this->picAddEntry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picAddEntry->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAddEntry.Image")));
			this->picAddEntry->Location = System::Drawing::Point(14, 3);
			this->picAddEntry->Name = L"picAddEntry";
			this->picAddEntry->Size = System::Drawing::Size(45, 25);
			this->picAddEntry->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAddEntry->TabIndex = 0;
			this->picAddEntry->TabStop = false;
			this->picAddEntry->Click += gcnew System::EventHandler(this, &MainForm::picAddEntry_Click);
			this->picAddEntry->MouseEnter += gcnew System::EventHandler(this, &MainForm::picAddEntry_MouseEnter);
			this->picAddEntry->MouseLeave += gcnew System::EventHandler(this, &MainForm::picAddEntry_MouseLeave);
			// 
			// panTopBorder
			// 
			this->panTopBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panTopBorder->Location = System::Drawing::Point(0, 81);
			this->panTopBorder->Name = L"panTopBorder";
			this->panTopBorder->Size = System::Drawing::Size(1076, 2);
			this->panTopBorder->TabIndex = 2;
			// 
			// panLeftBorder
			// 
			this->panLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panLeftBorder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panLeftBorder->Location = System::Drawing::Point(0, 38);
			this->panLeftBorder->Name = L"panLeftBorder";
			this->panLeftBorder->Size = System::Drawing::Size(3, 553);
			this->panLeftBorder->TabIndex = 3;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panBottomBorder->Location = System::Drawing::Point(0, 561);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(1076, 2);
			this->panBottomBorder->TabIndex = 4;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panRightBorder->Location = System::Drawing::Point(1072, 3);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 588);
			this->panRightBorder->TabIndex = 5;
			// 
			// dgPhonebookEntries
			// 
			this->dgPhonebookEntries->AllowUserToAddRows = false;
			this->dgPhonebookEntries->AllowUserToDeleteRows = false;
			this->dgPhonebookEntries->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgPhonebookEntries->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPhonebookEntries->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->fullName,
					this->note, this->homePhone, this->workPhone, this->mobilePhone, this->email, this->address, this->city
			});
			this->dgPhonebookEntries->Location = System::Drawing::Point(3, 82);
			this->dgPhonebookEntries->Name = L"dgPhonebookEntries";
			this->dgPhonebookEntries->ReadOnly = true;
			this->dgPhonebookEntries->Size = System::Drawing::Size(1069, 479);
			this->dgPhonebookEntries->TabIndex = 6;
			// 
			// fullName
			// 
			this->fullName->HeaderText = L"Full Name";
			this->fullName->Name = L"fullName";
			this->fullName->ReadOnly = true;
			// 
			// note
			// 
			this->note->HeaderText = L"Note";
			this->note->Name = L"note";
			this->note->ReadOnly = true;
			// 
			// homePhone
			// 
			this->homePhone->HeaderText = L"Home Phone";
			this->homePhone->Name = L"homePhone";
			this->homePhone->ReadOnly = true;
			// 
			// workPhone
			// 
			this->workPhone->HeaderText = L"Work Phone";
			this->workPhone->Name = L"workPhone";
			this->workPhone->ReadOnly = true;
			// 
			// mobilePhone
			// 
			this->mobilePhone->HeaderText = L"Mobile Phone";
			this->mobilePhone->Name = L"mobilePhone";
			this->mobilePhone->ReadOnly = true;
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			// 
			// address
			// 
			this->address->HeaderText = L"Address";
			this->address->Name = L"address";
			this->address->ReadOnly = true;
			// 
			// city
			// 
			this->city->HeaderText = L"City";
			this->city->Name = L"city";
			this->city->ReadOnly = true;
			// 
			// lbAmountEntries
			// 
			this->lbAmountEntries->Location = System::Drawing::Point(7, 3);
			this->lbAmountEntries->Name = L"lbAmountEntries";
			this->lbAmountEntries->Size = System::Drawing::Size(105, 13);
			this->lbAmountEntries->TabIndex = 0;
			this->lbAmountEntries->Text = L"Amount of entries: 0";
			// 
			// picHelp
			// 
			this->picHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picHelp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picHelp.Image")));
			this->picHelp->Location = System::Drawing::Point(1039, 0);
			this->picHelp->Name = L"picHelp";
			this->picHelp->Size = System::Drawing::Size(28, 19);
			this->picHelp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picHelp->TabIndex = 7;
			this->picHelp->TabStop = false;
			this->picHelp->Click += gcnew System::EventHandler(this, &MainForm::picHelp_Click);
			// 
			// panInfo
			// 
			this->panInfo->Controls->Add(this->lbAmountEntries);
			this->panInfo->Controls->Add(this->picHelp);
			this->panInfo->Location = System::Drawing::Point(3, 565);
			this->panInfo->Name = L"panInfo";
			this->panInfo->Size = System::Drawing::Size(1068, 23);
			this->panInfo->TabIndex = 8;
			// 
			// panBottomBorder2
			// 
			this->panBottomBorder2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder2->Location = System::Drawing::Point(0, 585);
			this->panBottomBorder2->Name = L"panBottomBorder2";
			this->panBottomBorder2->Size = System::Drawing::Size(1076, 3);
			this->panBottomBorder2->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1075, 588);
			this->Controls->Add(this->panBottomBorder2);
			this->Controls->Add(this->panInfo);
			this->Controls->Add(this->dgPhonebookEntries);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->panLeftBorder);
			this->Controls->Add(this->panTopBorder);
			this->Controls->Add(this->panToolbar);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Category Manager";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->panToolbar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowAll))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRemoveEntry))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAddEntry))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPhonebookEntries))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->panInfo->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion;
private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void picMinimize_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void picAddEntry_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void picSearch_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void picHelp_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
private: System::Void picAddEntry_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picAddEntry_MouseLeave(System::Object^  sender, System::EventArgs^  e);
private: System::Void picRemoveEntry_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picRemoveEntry_MouseLeave(System::Object^  sender, System::EventArgs^  e);
private: System::Void picSearch_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picSearch_MouseLeave(System::Object^  sender, System::EventArgs^  e);
private: System::Void picShowAll_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picShowAll_MouseLeave(System::Object^  sender, System::EventArgs^  e);
};
}
