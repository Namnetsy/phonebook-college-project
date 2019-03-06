#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
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

	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::Label^  lbWindowTitle;

	private: System::Windows::Forms::Panel^  panControlButtons;
















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->picHelp = (gcnew System::Windows::Forms::PictureBox());
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
			this->panInfo->Size = System::Drawing::Size(463, 23);
			this->panInfo->TabIndex = 49;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder->Location = System::Drawing::Point(3, 333);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(466, 3);
			this->panBottomBorder->TabIndex = 48;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panRightBorder->Location = System::Drawing::Point(466, 3);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 363);
			this->panRightBorder->TabIndex = 47;
			// 
			// panLeftBorder
			// 
			this->panLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panLeftBorder->Location = System::Drawing::Point(0, 3);
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
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWindowTitle->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 12);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(84, 25);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Settings";
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
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 363);
			this->Controls->Add(this->panBottomBorder2);
			this->Controls->Add(this->panInfo);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->panLeftBorder);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picHelp))->EndInit();
			this->panInfo->ResumeLayout(false);
			this->panInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
