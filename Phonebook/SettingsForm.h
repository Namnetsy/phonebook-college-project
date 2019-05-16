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
		SettingsForm(void);

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
	private: System::Windows::Forms::Panel^  panControlButtons;
	protected:

	private: System::Windows::Forms::PictureBox^  picXout;
	private: System::Windows::Forms::PictureBox^  picAccount;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::Button^  btnApplyChanges;


	private: System::Windows::Forms::CheckBox^  cbAskWhenClosing;
	private: System::Windows::Forms::CheckBox^  cbAskPasswordWhenStart;


	private: System::Windows::Forms::CheckBox^  cbAutosaveWhenClosing;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  tbNewPasswordAgain;



	private: System::Windows::Forms::TextBox^  tbNewPassword;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  tbOldPassword;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->panControlButtons = (gcnew System::Windows::Forms::Panel());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->picAccount = (gcnew System::Windows::Forms::PictureBox());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->btnApplyChanges = (gcnew System::Windows::Forms::Button());
			this->cbAskWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->cbAskPasswordWhenStart = (gcnew System::Windows::Forms::CheckBox());
			this->cbAutosaveWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbNewPasswordAgain = (gcnew System::Windows::Forms::TextBox());
			this->tbNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panControlButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panControlButtons
			// 
			this->panControlButtons->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panControlButtons->Controls->Add(this->picXout);
			this->panControlButtons->Controls->Add(this->picAccount);
			this->panControlButtons->Controls->Add(this->lbTitle);
			this->panControlButtons->Location = System::Drawing::Point(0, 0);
			this->panControlButtons->Name = L"panControlButtons";
			this->panControlButtons->Size = System::Drawing::Size(540, 46);
			this->panControlButtons->TabIndex = 1;
			this->panControlButtons->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SettingsForm::panControlButtons_MouseDown);
			this->panControlButtons->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SettingsForm::panControlButtons_MouseMove);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(500, 6);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 2;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &SettingsForm::picXout_Click);
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
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(45, 10);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(149, 25);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Налаштування";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnApplyChanges
			// 
			this->btnApplyChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnApplyChanges->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnApplyChanges->Location = System::Drawing::Point(402, 234);
			this->btnApplyChanges->Name = L"btnApplyChanges";
			this->btnApplyChanges->Size = System::Drawing::Size(133, 27);
			this->btnApplyChanges->TabIndex = 2;
			this->btnApplyChanges->Text = L"Зберегти";
			this->btnApplyChanges->UseVisualStyleBackColor = true;
			this->btnApplyChanges->Click += gcnew System::EventHandler(this, &SettingsForm::btnApplyChanges_Click);
			// 
			// cbAskWhenClosing
			// 
			this->cbAskWhenClosing->AutoSize = true;
			this->cbAskWhenClosing->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAskWhenClosing->Location = System::Drawing::Point(13, 79);
			this->cbAskWhenClosing->Name = L"cbAskWhenClosing";
			this->cbAskWhenClosing->Size = System::Drawing::Size(178, 21);
			this->cbAskWhenClosing->TabIndex = 29;
			this->cbAskWhenClosing->Text = L"запитувати при виході";
			this->cbAskWhenClosing->UseVisualStyleBackColor = true;
			// 
			// cbAskPasswordWhenStart
			// 
			this->cbAskPasswordWhenStart->AutoSize = true;
			this->cbAskPasswordWhenStart->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAskPasswordWhenStart->Location = System::Drawing::Point(13, 45);
			this->cbAskPasswordWhenStart->Name = L"cbAskPasswordWhenStart";
			this->cbAskPasswordWhenStart->Size = System::Drawing::Size(222, 21);
			this->cbAskPasswordWhenStart->TabIndex = 28;
			this->cbAskPasswordWhenStart->Text = L"запитувати пароль при вході";
			this->cbAskPasswordWhenStart->UseVisualStyleBackColor = true;
			// 
			// cbAutosaveWhenClosing
			// 
			this->cbAutosaveWhenClosing->AutoSize = true;
			this->cbAutosaveWhenClosing->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAutosaveWhenClosing->Location = System::Drawing::Point(13, 10);
			this->cbAutosaveWhenClosing->Name = L"cbAutosaveWhenClosing";
			this->cbAutosaveWhenClosing->Size = System::Drawing::Size(257, 21);
			this->cbAutosaveWhenClosing->TabIndex = 27;
			this->cbAutosaveWhenClosing->Text = L"автоматично зберігати при виході";
			this->cbAutosaveWhenClosing->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel5->Location = System::Drawing::Point(13, 103);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(139, 1);
			this->panel5->TabIndex = 33;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel4->Location = System::Drawing::Point(13, 144);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(139, 1);
			this->panel4->TabIndex = 31;
			// 
			// tbNewPasswordAgain
			// 
			this->tbNewPasswordAgain->BackColor = System::Drawing::SystemColors::Control;
			this->tbNewPasswordAgain->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbNewPasswordAgain->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbNewPasswordAgain->Location = System::Drawing::Point(13, 129);
			this->tbNewPasswordAgain->Name = L"tbNewPasswordAgain";
			this->tbNewPasswordAgain->PasswordChar = '*';
			this->tbNewPasswordAgain->Size = System::Drawing::Size(138, 14);
			this->tbNewPasswordAgain->TabIndex = 35;
			// 
			// tbNewPassword
			// 
			this->tbNewPassword->BackColor = System::Drawing::SystemColors::Control;
			this->tbNewPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbNewPassword->Location = System::Drawing::Point(13, 88);
			this->tbNewPassword->Name = L"tbNewPassword";
			this->tbNewPassword->PasswordChar = '*';
			this->tbNewPassword->Size = System::Drawing::Size(138, 14);
			this->tbNewPassword->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label2->Location = System::Drawing::Point(6, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Змінити пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label3->Location = System::Drawing::Point(10, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 15);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Новий пароль";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 15);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Старий пароль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->label4->Location = System::Drawing::Point(10, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 15);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Новий пароль (знову)";
			// 
			// tbOldPassword
			// 
			this->tbOldPassword->BackColor = System::Drawing::SystemColors::Control;
			this->tbOldPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbOldPassword->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbOldPassword->Location = System::Drawing::Point(13, 44);
			this->tbOldPassword->Name = L"tbOldPassword";
			this->tbOldPassword->PasswordChar = '*';
			this->tbOldPassword->Size = System::Drawing::Size(138, 14);
			this->tbOldPassword->TabIndex = 43;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel1->Location = System::Drawing::Point(13, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 1);
			this->panel1->TabIndex = 42;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->tbOldPassword);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->tbNewPasswordAgain);
			this->panel2->Controls->Add(this->tbNewPassword);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(364, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(171, 162);
			this->panel2->TabIndex = 44;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->cbAutosaveWhenClosing);
			this->panel3->Controls->Add(this->cbAskPasswordWhenStart);
			this->panel3->Controls->Add(this->cbAskWhenClosing);
			this->panel3->Location = System::Drawing::Point(5, 52);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(353, 161);
			this->panel3->TabIndex = 45;
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 270);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnApplyChanges);
			this->Controls->Add(this->panControlButtons);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SettingsForm";
			this->panControlButtons->ResumeLayout(false);
			this->panControlButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picAccount))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Point^ mouseLocation;
		private: System::Void btnApplyChanges_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void picXout_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
		private: System::Void panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
};
}
