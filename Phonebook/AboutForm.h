#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panControlButtons;
	protected:


	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::Label^  lbWindowTitle;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  lbHeading;
	private: System::Windows::Forms::Label^  lbContent;
	private: System::Windows::Forms::Label^ lbCopyright;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->lbWindowTitle = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbHeading = (gcnew System::Windows::Forms::Label());
			this->lbContent = (gcnew System::Windows::Forms::Label());
			this->lbCopyright = (gcnew System::Windows::Forms::Label());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->lbWindowTitle);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(391, 46);
			this->panControlButtons->TabIndex = 1;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AboutForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AboutForm::panControlButtons_MouseMove);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(348, 7);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &AboutForm::picXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &AboutForm::picXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &AboutForm::picXout_MouseLeave);
			// 
			// lbWindowTitle
			// 
			this->lbWindowTitle->AutoSize = true;
			this->lbWindowTitle->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWindowTitle->ForeColor = System::Drawing::Color::White;
			this->lbWindowTitle->Location = System::Drawing::Point(12, 12);
			this->lbWindowTitle->Name = L"lbWindowTitle";
			this->lbWindowTitle->Size = System::Drawing::Size(143, 22);
			this->lbWindowTitle->TabIndex = 0;
			this->lbWindowTitle->Text = L"Про програму";
			this->lbWindowTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(3, 339);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(388, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(3, 336);
			this->panel2->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(0, 299);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(391, 3);
			this->panel3->TabIndex = 4;
			// 
			// lbHeading
			// 
			this->lbHeading->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbHeading->Location = System::Drawing::Point(106, 63);
			this->lbHeading->Name = L"lbHeading";
			this->lbHeading->Size = System::Drawing::Size(166, 23);
			this->lbHeading->TabIndex = 5;
			this->lbHeading->Text = L"Phonebook 1.1.5";
			// 
			// lbContent
			// 
			this->lbContent->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbContent->Location = System::Drawing::Point(11, 99);
			this->lbContent->Name = L"lbContent";
			this->lbContent->Size = System::Drawing::Size(371, 126);
			this->lbContent->TabIndex = 6;
			this->lbContent->Text = L"Телефонна книга.";
			// 
			// lbCopyright
			// 
			this->lbCopyright->AutoSize = true;
			this->lbCopyright->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbCopyright->Location = System::Drawing::Point(286, 275);
			this->lbCopyright->Name = L"lbCopyright";
			this->lbCopyright->Size = System::Drawing::Size(96, 14);
			this->lbCopyright->TabIndex = 7;
			this->lbCopyright->Text = L"Copyright© 2019";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 302);
			this->Controls->Add(this->lbCopyright);
			this->Controls->Add(this->lbContent);
			this->Controls->Add(this->lbHeading);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panControlButtons);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AboutForm";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	Point mouseLocation;
	Resources::ResourceManager^ rmAboutForm;
	Resources::ResourceManager^ rmGlobal;

private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
private: System::Void picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e);
private: System::Void picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e);
};
}
