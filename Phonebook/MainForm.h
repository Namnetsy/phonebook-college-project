#pragma once

#include <vector>
#include "PhonebookEntry.h"

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


	private: System::Windows::Forms::PictureBox^  picSave;

	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Windows::Forms::PictureBox^  picSettings;
	private: System::Windows::Forms::PictureBox^  picAbout;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fullName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  note;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  homePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  workPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mobilePhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  city;
























	private: System::Windows::Forms::PictureBox^  picRemoveAll;

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





















	private: System::Windows::Forms::PictureBox^  picShowAll;
	private: System::ComponentModel::IContainer^  components;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picMinimize = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->panToolbar = (gcnew System::Windows::Forms::Panel());
			this->picAbout = (gcnew System::Windows::Forms::PictureBox());
			this->picSettings = (gcnew System::Windows::Forms::PictureBox());
			this->picRemoveAll = (gcnew System::Windows::Forms::PictureBox());
			this->picSave = (gcnew System::Windows::Forms::PictureBox());
			this->picShowAll = (gcnew System::Windows::Forms::PictureBox());
			this->picSearch = (gcnew System::Windows::Forms::PictureBox());
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
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->panToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSettings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRemoveAll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSave))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowAll))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSearch))->BeginInit();
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
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::Color::White;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 12);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(116, 25);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Phonebook";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panToolbar
			// 
			this->panToolbar->Controls->Add(this->picAbout);
			this->panToolbar->Controls->Add(this->picSettings);
			this->panToolbar->Controls->Add(this->picRemoveAll);
			this->panToolbar->Controls->Add(this->picSave);
			this->panToolbar->Controls->Add(this->picShowAll);
			this->panToolbar->Controls->Add(this->picSearch);
			this->panToolbar->Location = System::Drawing::Point(0, 47);
			this->panToolbar->Name = L"panToolbar";
			this->panToolbar->Size = System::Drawing::Size(1071, 33);
			this->panToolbar->TabIndex = 1;
			// 
			// picAbout
			// 
			this->picAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAbout.Image")));
			this->picAbout->Location = System::Drawing::Point(253, 4);
			this->picAbout->Name = L"picAbout";
			this->picAbout->Size = System::Drawing::Size(45, 25);
			this->picAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAbout->TabIndex = 8;
			this->picAbout->TabStop = false;
			this->toolTip->SetToolTip(this->picAbout, L"About");
			this->picAbout->MouseEnter += gcnew System::EventHandler(this, &MainForm::picAbout_MouseEnter);
			this->picAbout->MouseLeave += gcnew System::EventHandler(this, &MainForm::picAbout_MouseLeave);
			// 
			// picSettings
			// 
			this->picSettings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSettings.Image")));
			this->picSettings->Location = System::Drawing::Point(202, 4);
			this->picSettings->Name = L"picSettings";
			this->picSettings->Size = System::Drawing::Size(45, 25);
			this->picSettings->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSettings->TabIndex = 7;
			this->picSettings->TabStop = false;
			this->toolTip->SetToolTip(this->picSettings, L"Settings");
			this->picSettings->Click += gcnew System::EventHandler(this, &MainForm::picSettings_Click);
			this->picSettings->MouseEnter += gcnew System::EventHandler(this, &MainForm::picSettings_MouseEnter);
			this->picSettings->MouseLeave += gcnew System::EventHandler(this, &MainForm::picSettings_MouseLeave);
			// 
			// picRemoveAll
			// 
			this->picRemoveAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picRemoveAll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picRemoveAll.Image")));
			this->picRemoveAll->Location = System::Drawing::Point(100, 4);
			this->picRemoveAll->Name = L"picRemoveAll";
			this->picRemoveAll->Size = System::Drawing::Size(45, 25);
			this->picRemoveAll->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picRemoveAll->TabIndex = 6;
			this->picRemoveAll->TabStop = false;
			this->toolTip->SetToolTip(this->picRemoveAll, L"Delete all data from disk");
			this->picRemoveAll->Click += gcnew System::EventHandler(this, &MainForm::picRemoveAll_Click);
			this->picRemoveAll->MouseEnter += gcnew System::EventHandler(this, &MainForm::picRemoveAll_MouseEnter);
			this->picRemoveAll->MouseLeave += gcnew System::EventHandler(this, &MainForm::picRemoveAll_MouseLeave);
			// 
			// picSave
			// 
			this->picSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSave.Image")));
			this->picSave->Location = System::Drawing::Point(51, 4);
			this->picSave->Name = L"picSave";
			this->picSave->Size = System::Drawing::Size(45, 25);
			this->picSave->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSave->TabIndex = 4;
			this->picSave->TabStop = false;
			this->toolTip->SetToolTip(this->picSave, L"Save");
			this->picSave->Click += gcnew System::EventHandler(this, &MainForm::picSave_Click);
			this->picSave->MouseEnter += gcnew System::EventHandler(this, &MainForm::picSave_MouseEnter);
			this->picSave->MouseLeave += gcnew System::EventHandler(this, &MainForm::picSave_MouseLeave);
			// 
			// picShowAll
			// 
			this->picShowAll->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picShowAll.Image")));
			this->picShowAll->Location = System::Drawing::Point(13, 4);
			this->picShowAll->Name = L"picShowAll";
			this->picShowAll->Size = System::Drawing::Size(30, 25);
			this->picShowAll->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picShowAll->TabIndex = 3;
			this->picShowAll->TabStop = false;
			this->toolTip->SetToolTip(this->picShowAll, L"Open from disk");
			this->picShowAll->Click += gcnew System::EventHandler(this, &MainForm::picShowAll_Click);
			this->picShowAll->MouseEnter += gcnew System::EventHandler(this, &MainForm::picShowAll_MouseEnter);
			this->picShowAll->MouseLeave += gcnew System::EventHandler(this, &MainForm::picShowAll_MouseLeave);
			// 
			// picSearch
			// 
			this->picSearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSearch.Image")));
			this->picSearch->Location = System::Drawing::Point(151, 4);
			this->picSearch->Name = L"picSearch";
			this->picSearch->Size = System::Drawing::Size(45, 25);
			this->picSearch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSearch->TabIndex = 2;
			this->picSearch->TabStop = false;
			this->toolTip->SetToolTip(this->picSearch, L"Search by entries");
			this->picSearch->Click += gcnew System::EventHandler(this, &MainForm::picSearch_Click);
			this->picSearch->MouseEnter += gcnew System::EventHandler(this, &MainForm::picSearch_MouseEnter);
			this->picSearch->MouseLeave += gcnew System::EventHandler(this, &MainForm::picSearch_MouseLeave);
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
			this->dgPhonebookEntries->AllowUserToOrderColumns = true;
			this->dgPhonebookEntries->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgPhonebookEntries->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPhonebookEntries->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->fullName,
					this->note, this->homePhone, this->workPhone, this->mobilePhone, this->email, this->address, this->city
			});
			this->dgPhonebookEntries->Location = System::Drawing::Point(3, 82);
			this->dgPhonebookEntries->Name = L"dgPhonebookEntries";
			this->dgPhonebookEntries->Size = System::Drawing::Size(1069, 479);
			this->dgPhonebookEntries->TabIndex = 6;
			this->dgPhonebookEntries->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &MainForm::dgPhonebookEntries_RowsRemoved);
			// 
			// fullName
			// 
			this->fullName->HeaderText = L"Full Name";
			this->fullName->Name = L"fullName";
			// 
			// note
			// 
			this->note->HeaderText = L"Note";
			this->note->Name = L"note";
			// 
			// homePhone
			// 
			this->homePhone->HeaderText = L"Home Phone";
			this->homePhone->Name = L"homePhone";
			// 
			// workPhone
			// 
			this->workPhone->HeaderText = L"Work Phone";
			this->workPhone->Name = L"workPhone";
			// 
			// mobilePhone
			// 
			this->mobilePhone->HeaderText = L"Mobile Phone";
			this->mobilePhone->Name = L"mobilePhone";
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->Name = L"email";
			// 
			// address
			// 
			this->address->HeaderText = L"Address";
			this->address->Name = L"address";
			// 
			// city
			// 
			this->city->HeaderText = L"City";
			this->city->Name = L"city";
			// 
			// lbAmountEntries
			// 
			this->lbAmountEntries->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbAmountEntries->Location = System::Drawing::Point(7, 3);
			this->lbAmountEntries->Name = L"lbAmountEntries";
			this->lbAmountEntries->Size = System::Drawing::Size(313, 13);
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
			this->toolTip->SetToolTip(this->picHelp, L"Help");
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSettings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRemoveAll))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSave))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picShowAll))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPhonebookEntries))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->panInfo->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion;
	public:
		void addEntry(PhonebookEntry::Entry entry);
		void updateEntry(DataGridViewRow^ row, int index);
		bool resetDataGridStyle();

	private:
		Point mouseLocation;
		Resources::ResourceManager^ rmMainForm;
		Resources::ResourceManager^ rmGlobal;

		void updateAmountInfo();

	private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picMinimize_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSearch_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void picHelp_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSearch_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSearch_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picShowAll_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picShowAll_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSave_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSave_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSave_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picShowAll_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picRemoveAll_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picRemoveAll_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picRemoveAll_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSettings_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSettings_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picAbout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picAbout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dgPhonebookEntries_RowsRemoved(System::Object^  sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^  e);
	private: System::Void picSettings_Click(System::Object^  sender, System::EventArgs^  e);
};
}
