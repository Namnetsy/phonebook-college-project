#include "PasswordForm.h"
#include "MainForm.h"

#include "Config.h"

namespace Phonebook {

	System::Void PasswordForm::btnContinue_Click(System::Object^  sender, System::EventArgs^  e) {
		Config::Config cfg;
		cfg = cfg.getConfig();

		label1->Text = gcnew String(cfg.name.c_str());
		label2->Text = tbPassword->Text;
		
		if (tbPassword->Text == gcnew String(cfg.password.c_str())) {
			Hide();
			MainForm^ mainForm = gcnew MainForm();
			mainForm->Show();
		}
	}

}