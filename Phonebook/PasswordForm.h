#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PasswordForm
	/// </summary>
	public ref class PasswordForm : public System::Windows::Forms::Form
	{
	public:
		PasswordForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panControlButtons;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  tbPassword;

	private: System::Windows::Forms::Button^  btnContinue;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbWarning;
	private: System::Windows::Forms::PictureBox^ picXout;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PasswordForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbWarning = (gcnew System::Windows::Forms::Label());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->label1);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(527, 49);
			this->panControlButtons->TabIndex = 0;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PasswordForm::PanControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PasswordForm::PanControlButtons_MouseMove);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(487, 8);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 3;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &PasswordForm::PicXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &PasswordForm::PicXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &PasswordForm::PicXout_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Вхід";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel4->Location = System::Drawing::Point(138, 193);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(232, 1);
			this->panel4->TabIndex = 18;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::SystemColors::Control;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F));
			this->tbPassword->Location = System::Drawing::Point(140, 168);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(228, 25);
			this->tbPassword->TabIndex = 19;
			this->tbPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &PasswordForm::TbPassword_KeyPress);
			// 
			// btnContinue
			// 
			this->btnContinue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnContinue->Location = System::Drawing::Point(377, 253);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(138, 38);
			this->btnContinue->TabIndex = 20;
			this->btnContinue->Text = L"Продовжити";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Click += gcnew System::EventHandler(this, &PasswordForm::btnContinue_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(106, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Введіть пароль для продовження";
			// 
			// lbWarning
			// 
			this->lbWarning->AutoSize = true;
			this->lbWarning->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbWarning->ForeColor = System::Drawing::Color::Red;
			this->lbWarning->Location = System::Drawing::Point(163, 216);
			this->lbWarning->Name = L"lbWarning";
			this->lbWarning->Size = System::Drawing::Size(184, 14);
			this->lbWarning->TabIndex = 22;
			this->lbWarning->Text = L"Введено неправильний пароль";
			this->lbWarning->Visible = false;
			// 
			// PasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 303);
			this->Controls->Add(this->lbWarning);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panControlButtons);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PasswordForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PasswordForm";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Resources::ResourceManager^ rmSettingsForm;
		Resources::ResourceManager^ rmGlobal;
		Point^ mousePosition;

	private: System::Void btnContinue_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void TbPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void PicXout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PicXout_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PicXout_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PanControlButtons_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void PanControlButtons_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};
}
