#include "PasswordForm.h"
#include "MainForm.h"

#include "Config.h"
#include "Helper.h"

namespace Phonebook {

	System::Void PasswordForm::btnContinue_Click(System::Object^  sender, System::EventArgs^  e) {
		Config::Config cfg;
		cfg = cfg.getConfig();
		
		if (Helper::getHash(tbPassword->Text) == cfg.password) {
			Hide();
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
		}
	}

}