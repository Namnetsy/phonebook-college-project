#pragma once

#include <vector>

#include "AboutForm.h"

#include "Entry.h"
#include "EntryControl.h"

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




	private: System::Windows::Forms::ToolTip^  toolTip;




	private: System::DirectoryServices::DirectoryEntry^  directoryEntry1;
	private: System::Windows::Forms::PictureBox^  picAbout;
	private: System::Windows::Forms::PictureBox^  picAccount;








	private: System::Windows::Forms::PictureBox^  picAdd;
	private: System::Windows::Forms::PictureBox^  picSettings;
	private: System::Windows::Forms::PictureBox^  picSave;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PictureBox^  picOpen;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
































	private: System::Windows::Forms::FlowLayoutPanel^  flpEntries;






















































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
private: System::Windows::Forms::Label^  lbUsername;
	protected:












	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::PictureBox^  picMinimize;
private: System::Windows::Forms::Panel^  panSidebar;






























































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picMinimize = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->picAccount = (gcnew System::Windows::Forms::PictureBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->panSidebar = (gcnew System::Windows::Forms::Panel());
			this->picOpen = (gcnew System::Windows::Forms::PictureBox());
			this->picSave = (gcnew System::Windows::Forms::PictureBox());
			this->picAdd = (gcnew System::Windows::Forms::PictureBox());
			this->picAbout = (gcnew System::Windows::Forms::PictureBox());
			this->picSettings = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->flpEntries = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->directoryEntry1 = (gcnew System::DirectoryServices::DirectoryEntry());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMinimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->BeginInit();
			this->panSidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picOpen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSave))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAdd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAbout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSettings))->BeginInit();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panControlButtons->Controls->Add(this->picMinimize);
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->picAccount);
			this->panControlButtons->Controls->Add(this->lbUsername);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(1075, 46);
			this->panControlButtons->TabIndex = 0;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panControlButtons_MouseMove);
			// 
			// picMinimize
			// 
			this->picMinimize->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picMinimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picMinimize.Image")));
			this->picMinimize->Location = System::Drawing::Point(991, 6);
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
			this->picXout->Location = System::Drawing::Point(1033, 6);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &MainForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &MainForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &MainForm::picXout_MouseLeave);
			// 
			// picAccount
			// 
			this->picAccount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAccount.Image")));
			this->picAccount->Location = System::Drawing::Point(6, 11);
			this->picAccount->Name = L"picAccount";
			this->picAccount->Size = System::Drawing::Size(36, 26);
			this->picAccount->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAccount->TabIndex = 7;
			this->picAccount->TabStop = false;
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbUsername->ForeColor = System::Drawing::Color::White;
			this->lbUsername->Location = System::Drawing::Point(45, 10);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(101, 25);
			this->lbUsername->TabIndex = 0;
			this->lbUsername->Text = L"Username";
			this->lbUsername->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panSidebar
			// 
			this->panSidebar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panSidebar->Controls->Add(this->picOpen);
			this->panSidebar->Controls->Add(this->picSave);
			this->panSidebar->Controls->Add(this->picAdd);
			this->panSidebar->Controls->Add(this->picAbout);
			this->panSidebar->Controls->Add(this->picSettings);
			this->panSidebar->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panSidebar->Location = System::Drawing::Point(-1, 45);
			this->panSidebar->Name = L"panSidebar";
			this->panSidebar->Size = System::Drawing::Size(46, 527);
			this->panSidebar->TabIndex = 3;
			// 
			// picOpen
			// 
			this->picOpen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picOpen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picOpen.Image")));
			this->picOpen->Location = System::Drawing::Point(7, 7);
			this->picOpen->Name = L"picOpen";
			this->picOpen->Size = System::Drawing::Size(34, 26);
			this->picOpen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picOpen->TabIndex = 12;
			this->picOpen->TabStop = false;
			this->toolTip->SetToolTip(this->picOpen, L"Завантажити дані");
			this->picOpen->Click += gcnew System::EventHandler(this, &MainForm::picOpen_Click);
			// 
			// picSave
			// 
			this->picSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSave.Image")));
			this->picSave->Location = System::Drawing::Point(5, 41);
			this->picSave->Name = L"picSave";
			this->picSave->Size = System::Drawing::Size(36, 26);
			this->picSave->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSave->TabIndex = 11;
			this->picSave->TabStop = false;
			this->toolTip->SetToolTip(this->picSave, L"Зберегти");
			this->picSave->Click += gcnew System::EventHandler(this, &MainForm::picSave_Click);
			// 
			// picAdd
			// 
			this->picAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAdd.Image")));
			this->picAdd->Location = System::Drawing::Point(5, 73);
			this->picAdd->Name = L"picAdd";
			this->picAdd->Size = System::Drawing::Size(36, 26);
			this->picAdd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAdd->TabIndex = 10;
			this->picAdd->TabStop = false;
			this->toolTip->SetToolTip(this->picAdd, L"Додати");
			this->picAdd->Click += gcnew System::EventHandler(this, &MainForm::picAdd_Click);
			// 
			// picAbout
			// 
			this->picAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picAbout.Image")));
			this->picAbout->Location = System::Drawing::Point(6, 492);
			this->picAbout->Name = L"picAbout";
			this->picAbout->Size = System::Drawing::Size(36, 26);
			this->picAbout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picAbout->TabIndex = 9;
			this->picAbout->TabStop = false;
			this->toolTip->SetToolTip(this->picAbout, L"Про програму");
			this->picAbout->Click += gcnew System::EventHandler(this, &MainForm::picAbout_Click);
			// 
			// picSettings
			// 
			this->picSettings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picSettings.Image")));
			this->picSettings->Location = System::Drawing::Point(6, 105);
			this->picSettings->Name = L"picSettings";
			this->picSettings->Size = System::Drawing::Size(36, 26);
			this->picSettings->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picSettings->TabIndex = 8;
			this->picSettings->TabStop = false;
			this->toolTip->SetToolTip(this->picSettings, L"Налаштування");
			this->picSettings->Click += gcnew System::EventHandler(this, &MainForm::picSettings_Click);
			// 
			// flpEntries
			// 
			this->flpEntries->AutoScroll = true;
			this->flpEntries->Location = System::Drawing::Point(45, 46);
			this->flpEntries->Margin = System::Windows::Forms::Padding(0);
			this->flpEntries->Name = L"flpEntries";
			this->flpEntries->Size = System::Drawing::Size(1029, 525);
			this->flpEntries->TabIndex = 10;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->ClientSize = System::Drawing::Size(1075, 572);
			this->Controls->Add(this->flpEntries);
			this->Controls->Add(this->panSidebar);
			this->Controls->Add(this->panControlButtons);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Category Manager";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMinimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->EndInit();
			this->panSidebar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picOpen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSave))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAdd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAbout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picSettings))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion;
	private:
		Point mouseLocation;
		Resources::ResourceManager^ rmMainForm;
		Resources::ResourceManager^ rmGlobal;

		void addEntry();
		void addEntry(Entry::Entry entry);
		void clearTable();

		void removeEntry();
		
		std::vector<Entry::Entry> getEntries();
		
	public: void saveEntries(System::String^ path);

	private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picMinimize_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picSave_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picOpen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
	private: System::Void picSettings_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picAbout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
