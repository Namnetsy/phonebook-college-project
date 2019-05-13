#include "AskBeforeClosingDialog.h"


namespace Phonebook {

	AskBeforeClosingDialog::AskBeforeClosingDialog(MainForm^ mainForm, System::String^ path) {
		this->mainForm = mainForm;
		this->path = path;
	}

	System::Void AskBeforeClosingDialog::btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	System::Void AskBeforeClosingDialog::btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		mainForm->saveEntries(path);
		Application::Exit();
	}

}
