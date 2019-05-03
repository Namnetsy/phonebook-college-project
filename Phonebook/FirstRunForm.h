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
	private: System::Windows::Forms::RichTextBox^  rtbName;

	protected:













	private: System::Windows::Forms::Panel^  panel2;




	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::RichTextBox^  rtbPassword;


	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::RichTextBox^  rtbPasswordRetype;




	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckBox^  cbAutosaveWhenClosing;
	private: System::Windows::Forms::CheckBox^  cbAutosaveAfteChanges;


	private: System::Windows::Forms::CheckBox^  cbAskWhenClosing;


	private: System::Windows::Forms::Panel^  panCredentials;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  btnApply;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  rtbUsername;
	private: System::Windows::Forms::Panel^  panel3;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstRunForm::typeid));
			this->panTopPanel = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->rtbName = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->rtbPassword = (gcnew System::Windows::Forms::RichTextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->rtbPasswordRetype = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbAutosaveWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->cbAutosaveAfteChanges = (gcnew System::Windows::Forms::CheckBox());
			this->cbAskWhenClosing = (gcnew System::Windows::Forms::CheckBox());
			this->panCredentials = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->rtbUsername = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panTopPanel->SuspendLayout();
			this->panCredentials->SuspendLayout();
			this->SuspendLayout();
			// 
			// panTopPanel
			// 
			this->panTopPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
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
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(12, 15);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(487, 33);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Set up your account";
			this->lbTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseDown);
			this->lbTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRunForm::panTopPanel_MouseMove);
			// 
			// rtbName
			// 
			this->rtbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->rtbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rtbName->Location = System::Drawing::Point(28, 56);
			this->rtbName->Multiline = false;
			this->rtbName->Name = L"rtbName";
			this->rtbName->Size = System::Drawing::Size(138, 22);
			this->rtbName->TabIndex = 8;
			this->rtbName->Text = L"your real name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel2->Location = System::Drawing::Point(28, 78);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(139, 1);
			this->panel2->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel4->Location = System::Drawing::Point(383, 78);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(139, 1);
			this->panel4->TabIndex = 16;
			// 
			// rtbPassword
			// 
			this->rtbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->rtbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rtbPassword->Location = System::Drawing::Point(383, 56);
			this->rtbPassword->Multiline = false;
			this->rtbPassword->Name = L"rtbPassword";
			this->rtbPassword->Size = System::Drawing::Size(138, 22);
			this->rtbPassword->TabIndex = 15;
			this->rtbPassword->Text = L"password";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel5->Location = System::Drawing::Point(552, 78);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(139, 1);
			this->panel5->TabIndex = 19;
			// 
			// rtbPasswordRetype
			// 
			this->rtbPasswordRetype->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->rtbPasswordRetype->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbPasswordRetype->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F));
			this->rtbPasswordRetype->Location = System::Drawing::Point(552, 57);
			this->rtbPasswordRetype->Multiline = false;
			this->rtbPasswordRetype->Name = L"rtbPasswordRetype";
			this->rtbPasswordRetype->Size = System::Drawing::Size(138, 22);
			this->rtbPasswordRetype->TabIndex = 18;
			this->rtbPasswordRetype->Text = L"password again";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 30);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(364, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 30);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(533, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 30);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Retype password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(226, 30);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Preferences (Optional)";
			// 
			// cbAutosaveWhenClosing
			// 
			this->cbAutosaveWhenClosing->AutoSize = true;
			this->cbAutosaveWhenClosing->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->cbAutosaveWhenClosing->Location = System::Drawing::Point(28, 183);
			this->cbAutosaveWhenClosing->Name = L"cbAutosaveWhenClosing";
			this->cbAutosaveWhenClosing->Size = System::Drawing::Size(177, 24);
			this->cbAutosaveWhenClosing->TabIndex = 24;
			this->cbAutosaveWhenClosing->Text = L"autosave when closing";
			this->cbAutosaveWhenClosing->UseVisualStyleBackColor = true;
			// 
			// cbAutosaveAfteChanges
			// 
			this->cbAutosaveAfteChanges->AutoSize = true;
			this->cbAutosaveAfteChanges->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->cbAutosaveAfteChanges->Location = System::Drawing::Point(28, 229);
			this->cbAutosaveAfteChanges->Name = L"cbAutosaveAfteChanges";
			this->cbAutosaveAfteChanges->Size = System::Drawing::Size(207, 24);
			this->cbAutosaveAfteChanges->TabIndex = 25;
			this->cbAutosaveAfteChanges->Text = L"autosave after any changes";
			this->cbAutosaveAfteChanges->UseVisualStyleBackColor = true;
			// 
			// cbAskWhenClosing
			// 
			this->cbAskWhenClosing->AutoSize = true;
			this->cbAskWhenClosing->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->cbAskWhenClosing->Location = System::Drawing::Point(260, 183);
			this->cbAskWhenClosing->Name = L"cbAskWhenClosing";
			this->cbAskWhenClosing->Size = System::Drawing::Size(164, 24);
			this->cbAskWhenClosing->TabIndex = 26;
			this->cbAskWhenClosing->Text = L"ask me when closing";
			this->cbAskWhenClosing->UseVisualStyleBackColor = true;
			// 
			// panCredentials
			// 
			this->panCredentials->Controls->Add(this->label2);
			this->panCredentials->Controls->Add(this->cbAskWhenClosing);
			this->panCredentials->Controls->Add(this->rtbName);
			this->panCredentials->Controls->Add(this->cbAutosaveAfteChanges);
			this->panCredentials->Controls->Add(this->panel2);
			this->panCredentials->Controls->Add(this->cbAutosaveWhenClosing);
			this->panCredentials->Controls->Add(this->label4);
			this->panCredentials->Controls->Add(this->label7);
			this->panCredentials->Controls->Add(this->rtbUsername);
			this->panCredentials->Controls->Add(this->panel3);
			this->panCredentials->Controls->Add(this->label3);
			this->panCredentials->Controls->Add(this->rtbPassword);
			this->panCredentials->Controls->Add(this->panel5);
			this->panCredentials->Controls->Add(this->panel4);
			this->panCredentials->Controls->Add(this->rtbPasswordRetype);
			this->panCredentials->Controls->Add(this->label5);
			this->panCredentials->Location = System::Drawing::Point(8, 68);
			this->panCredentials->Name = L"panCredentials";
			this->panCredentials->Size = System::Drawing::Size(738, 307);
			this->panCredentials->TabIndex = 27;
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
			this->btnApply->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnApply->Location = System::Drawing::Point(625, 381);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(118, 31);
			this->btnApply->TabIndex = 31;
			this->btnApply->Text = L"Apply";
			this->btnApply->UseVisualStyleBackColor = true;
			this->btnApply->Click += gcnew System::EventHandler(this, &FirstRunForm::btnApply_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel3->Location = System::Drawing::Point(207, 78);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(139, 1);
			this->panel3->TabIndex = 13;
			// 
			// rtbUsername
			// 
			this->rtbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(211)));
			this->rtbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rtbUsername->Location = System::Drawing::Point(207, 56);
			this->rtbUsername->Multiline = false;
			this->rtbUsername->Name = L"rtbUsername";
			this->rtbUsername->Size = System::Drawing::Size(138, 22);
			this->rtbUsername->TabIndex = 12;
			this->rtbUsername->Text = L"username";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(188, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 30);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Username";
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FirstRunForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FirstRunForm";
			this->panTopPanel->ResumeLayout(false);
			this->panCredentials->ResumeLayout(false);
			this->panCredentials->PerformLayout();
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
};
}
