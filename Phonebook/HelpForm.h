#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panControlButtons;
	protected:

	private: System::Windows::Forms::PictureBox^  picPhonebookIcon;
	private: System::Windows::Forms::PictureBox^  picXout;
	protected:



	private: System::Windows::Forms::Label^  lbWindowTitle;
	private: System::Windows::Forms::Panel^  panLeftBorder;
	private: System::Windows::Forms::Panel^  panBottomBorder;




	private: System::Windows::Forms::Panel^  panRightBorder;

	private: System::Windows::Forms::Label^  lbInfo;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picPhonebookIcon = (gcnew System::Windows::Forms::PictureBox());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->panLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->panBottomBorder = (gcnew System::Windows::Forms::Panel());
			this->panRightBorder = (gcnew System::Windows::Forms::Panel());
			this->lbInfo = (gcnew System::Windows::Forms::Label());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panControlButtons->Controls->Add(this->picPhonebookIcon);
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->lbWindowTitle);
			this->panControlButtons->Location = System::Drawing::Point(-5, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(727, 46);
			this->panControlButtons->TabIndex = 1;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpForm::panel1_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpForm::panel1_MouseMove);
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
			this->picXout->Location = System::Drawing::Point(686, 5);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &HelpForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &HelpForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &HelpForm::picXout_MouseLeave);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::Color::White;
			this->lbWindowTitle->Location = System::Drawing::Point(44, 13);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(50, 24);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Help";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panLeftBorder
			// 
			this->panLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panLeftBorder->Location = System::Drawing::Point(0, 0);
			this->panLeftBorder->Name = L"panLeftBorder";
			this->panLeftBorder->Size = System::Drawing::Size(3, 480);
			this->panLeftBorder->TabIndex = 3;
			// 
			// panBottomBorder
			// 
			this->panBottomBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panBottomBorder->Location = System::Drawing::Point(2, 475);
			this->panBottomBorder->Name = L"panBottomBorder";
			this->panBottomBorder->Size = System::Drawing::Size(720, 3);
			this->panBottomBorder->TabIndex = 4;
			// 
			// panRightBorder
			// 
			this->panRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panRightBorder->Location = System::Drawing::Point(718, 3);
			this->panRightBorder->Name = L"panRightBorder";
			this->panRightBorder->Size = System::Drawing::Size(3, 477);
			this->panRightBorder->TabIndex = 5;
			// 
			// lbInfo
			// 
			this->lbInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbInfo->Location = System::Drawing::Point(3, 49);
			this->lbInfo->Name = L"lbInfo";
			this->lbInfo->Padding = System::Windows::Forms::Padding(7);
			this->lbInfo->Size = System::Drawing::Size(715, 423);
			this->lbInfo->TabIndex = 0;
			this->lbInfo->Text = L"Bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla bla.";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 478);
			this->Controls->Add(this->lbInfo);
			this->Controls->Add(this->panRightBorder);
			this->Controls->Add(this->panBottomBorder);
			this->Controls->Add(this->panLeftBorder);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"HelpForm";
			this->Text = L"HelpForm";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPhonebookIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Point mouseLocation;
		Resources::ResourceManager^ rmHelpForm;
		Resources::ResourceManager^ rmGlobal;

	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
	private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
};
}
