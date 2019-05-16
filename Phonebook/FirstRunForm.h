#pragma once

namespace Phonebook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FirstRunForm
	/// </summary>
	public ref class FirstRunForm : public System::Windows::Forms::Form
	{
	public:
		FirstRunForm(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FirstRunForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panTopPanel;
	private: System::Windows::Forms::Label^  lbTitle;


	protected:




























	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::Label^  label7;







	private: System::Windows::Forms::Panel^  panCredentials;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::TextBox^  tbName;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tbPassword;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  tbPasswordAgain;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::CheckBox^  cbAutosaveWhenClosing;

	private: System::Windows::Forms::CheckBox^  cbAskPasswordWhenStart;
	private: System::Windows::Forms::CheckBox^  cbAskWhenClosing;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstRunForm::typeid));
			this->panTopPanel = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panCredentials = (gcnew System::Windows::Forms::Panel());
			this->cbAutosaveWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->cbAskPasswordWhenStart = (gcnew System::Windows::Forms::CheckBox());
			this->cbAskWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->tbPasswordAgain = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->picXout = (gcnew System::Windows::Forms::PictureBox());
			this->panTopPanel->SuspendLayout();
			this->panCredentials->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->BeginInit();
			this->SuspendLayout();
			// 
			// panTopPanel
			// 
			this->panTopPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panTopPanel->Controls->Add(this->picXout);
			this->panTopPanel->Controls->Add(this->lbTitle);
			this->panTopPanel->Location = System::Drawing::Point(0, 0);
			this->panTopPanel->Name = L"panTopPanel";
			this->panTopPanel->Size = System::Drawing::Size(755, 62);
			this->panTopPanel->TabIndex = 0;
			this->panTopPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseDown);
			this->panTopPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseMove);
			// 
			// lbTitle
			// 
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Arial", 16));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(12, 15);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(171, 33);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Перший запуск";
			this->lbTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseDown);
			this->lbTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(24, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ім\'я";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(14, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(254, 19);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Налаштування (не обов\'язково)";
			// 
			// panCredentials
			// 
			this->panCredentials->Controls->Add(this->cbAutosaveWhenClosing);
			this->panCredentials->Controls->Add(this->cbAskPasswordWhenStart);
			this->panCredentials->Controls->Add(this->cbAskWhenClosing);
			this->panCredentials->Controls->Add(this->tbPasswordAgain);
			this->panCredentials->Controls->Add(this->panel3);
			this->panCredentials->Controls->Add(this->tbPassword);
			this->panCredentials->Controls->Add(this->panel2);
			this->panCredentials->Controls->Add(this->label3);
			this->panCredentials->Controls->Add(this->label1);
			this->panCredentials->Controls->Add(this->tbName);
			this->panCredentials->Controls->Add(this->panel1);
			this->panCredentials->Controls->Add(this->label2);
			this->panCredentials->Controls->Add(this->label7);
			this->panCredentials->Location = System::Drawing::Point(8, 68);
			this->panCredentials->Name = L"panCredentials";
			this->panCredentials->Size = System::Drawing::Size(738, 307);
			this->panCredentials->TabIndex = 27;
			// 
			// cbAutosaveWhenClosing
			// 
			this->cbAutosaveWhenClosing->AutoSize = true;
			this->cbAutosaveWhenClosing->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAutosaveWhenClosing->Location = System::Drawing::Point(27, 141);
			this->cbAutosaveWhenClosing->Name = L"cbAutosaveWhenClosing";
			this->cbAutosaveWhenClosing->Size = System::Drawing::Size(257, 21);
			this->cbAutosaveWhenClosing->TabIndex = 52;
			this->cbAutosaveWhenClosing->Text = L"автоматично зберігати при виході";
			this->cbAutosaveWhenClosing->UseVisualStyleBackColor = true;
			// 
			// cbAskPasswordWhenStart
			// 
			this->cbAskPasswordWhenStart->AutoSize = true;
			this->cbAskPasswordWhenStart->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAskPasswordWhenStart->Location = System::Drawing::Point(27, 176);
			this->cbAskPasswordWhenStart->Name = L"cbAskPasswordWhenStart";
			this->cbAskPasswordWhenStart->Size = System::Drawing::Size(222, 21);
			this->cbAskPasswordWhenStart->TabIndex = 53;
			this->cbAskPasswordWhenStart->Text = L"запитувати пароль при вході";
			this->cbAskPasswordWhenStart->UseVisualStyleBackColor = true;
			// 
			// cbAskWhenClosing
			// 
			this->cbAskWhenClosing->AutoSize = true;
			this->cbAskWhenClosing->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cbAskWhenClosing->Location = System::Drawing::Point(27, 210);
			this->cbAskWhenClosing->Name = L"cbAskWhenClosing";
			this->cbAskWhenClosing->Size = System::Drawing::Size(178, 21);
			this->cbAskWhenClosing->TabIndex = 54;
			this->cbAskWhenClosing->Text = L"запитувати при виході";
			this->cbAskWhenClosing->UseVisualStyleBackColor = true;
			// 
			// tbPasswordAgain
			// 
			this->tbPasswordAgain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->tbPasswordAgain->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPasswordAgain->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbPasswordAgain->Location = System::Drawing::Point(360, 47);
			this->tbPasswordAgain->Name = L"tbPasswordAgain";
			this->tbPasswordAgain->PasswordChar = '*';
			this->tbPasswordAgain->Size = System::Drawing::Size(138, 14);
			this->tbPasswordAgain->TabIndex = 51;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel3->Location = System::Drawing::Point(360, 62);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(139, 1);
			this->panel3->TabIndex = 50;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbPassword->Location = System::Drawing::Point(192, 45);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(138, 14);
			this->tbPassword->TabIndex = 49;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel2->Location = System::Drawing::Point(192, 60);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(139, 1);
			this->panel2->TabIndex = 48;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(357, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 18);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Пароль (ще раз)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(189, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 18);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Пароль";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->tbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->tbName->Location = System::Drawing::Point(27, 44);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(138, 14);
			this->tbName->TabIndex = 45;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel1->Location = System::Drawing::Point(27, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(139, 1);
			this->panel1->TabIndex = 44;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel8->Location = System::Drawing::Point(0, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1, 511);
			this->panel8->TabIndex = 0;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel9->Location = System::Drawing::Point(0, 423);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(755, 1);
			this->panel9->TabIndex = 29;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel10->Location = System::Drawing::Point(754, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1, 515);
			this->panel10->TabIndex = 30;
			// 
			// btnApply
			// 
			this->btnApply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnApply->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnApply->Location = System::Drawing::Point(625, 381);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(118, 31);
			this->btnApply->TabIndex = 31;
			this->btnApply->Text = L"Продовжити";
			this->btnApply->UseVisualStyleBackColor = true;
			this->btnApply->Click += gcnew System::EventHandler(this, &FirstRunForm::btnApply_Click);
			// 
			// picXout
			// 
			this->picXout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->picXout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picXout.Image")));
			this->picXout->Location = System::Drawing::Point(706, 15);
			this->picXout->Name = L"picXout";
			this->picXout->Size = System::Drawing::Size(37, 33);
			this->picXout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picXout->TabIndex = 3;
			this->picXout->TabStop = false;
			this->picXout->Click += gcnew System::EventHandler(this, &FirstRunForm::PicXout_Click);
			this->picXout->MouseEnter += gcnew System::EventHandler(this, &FirstRunForm::PicXout_MouseEnter);
			this->picXout->MouseLeave += gcnew System::EventHandler(this, &FirstRunForm::PicXout_MouseLeave);
			// 
			// FirstRunForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->ClientSize = System::Drawing::Size(755, 424);
			this->Controls->Add(this->btnApply);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panTopPanel);
			this->Controls->Add(this->panCredentials);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FirstRunForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FirstRunForm";
			this->panTopPanel->ResumeLayout(false);
			this->panCredentials->ResumeLayout(false);
			this->panCredentials->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picXout))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Point mouseLocation;
		Resources::ResourceManager^ rmFirstRunForm;
		Resources::ResourceManager^ rmGlobal;

	private: System::Void panTopPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void panTopPanel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void btnApply_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void PicXout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PicXout_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PicXout_MouseLeave(System::Object^ sender, System::EventArgs^ e);
};
}
