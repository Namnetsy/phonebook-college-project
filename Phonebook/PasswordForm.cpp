#include "PasswordForm.h"
#include "MainForm.h"

#include "Config.h"
#include "Helper.h"

namespace Phonebook {

	PasswordForm::PasswordForm() {
		InitializeComponent();

		rmSettingsForm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);

		mousePosition = gcnew Point();
	}

	// top panel' events
	System::Void PasswordForm::PanControlButtons_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mousePosition->X = -e->X;
		mousePosition->Y = -e->Y;
	}

	System::Void PasswordForm::PanControlButtons_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == ::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mousePosition->X, mousePosition->Y);
			Location = mousePos;
		}
	}

	// X out events
	System::Void PasswordForm::PicXout_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

	System::Void PasswordForm::PicXout_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"x_out-focused")));
	}

	System::Void PasswordForm::PicXout_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmSettingsForm->GetObject(L"picXout.Image")));
	}

	System::Void PasswordForm::btnContinue_Click(System::Object^  sender, System::EventArgs^  e) {
		Config::Config cfg;
		cfg = cfg.getConfig();
		int pass = Helper::getHash(tbPassword->Text);
		
		if (Helper::getHash(tbPassword->Text) == cfg.password) {
			Hide();
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
		} else {
			lbWarning->Show();
		}
	}

	System::Void PasswordForm::TbPassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)13) {
			Config::Config cfg;
			cfg = cfg.getConfig();
			int pass = Helper::getHash(tbPassword->Text);

			if (Helper::getHash(tbPassword->Text) == cfg.password) {
				Hide();
				MainForm^ mainForm = gcnew MainForm();
				mainForm->Show();
			} else {
				lbWarning->Show();
			}
		}
	}

}
