#include "AskBeforeClosingDialog.h"


namespace Phonebook {

	AskBeforeClosingDialog::AskBeforeClosingDialog(MainForm^ mainForm, System::String^ path) {
		InitializeComponent();

		this->mainForm = mainForm;
		this->path = path;

		mouseLocation = gcnew Point();
	}

	AskBeforeClosingDialog::AskBeforeClosingDialog(MainForm^ mainForm) {
		InitializeComponent();

		this->mainForm = mainForm;
		mouseLocation = gcnew Point();
	}

	System::Void AskBeforeClosingDialog::btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	System::Void AskBeforeClosingDialog::btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (path == "None") {
			if (saveFileDialog1->ShowDialog() != Windows::Forms::DialogResult::Cancel) {
				mainForm->saveEntries(saveFileDialog1->FileName);
				Application::Exit();
			}
		} else {
			mainForm->saveEntries(path);
			Application::Exit();
		}
	}

	System::Void AskBeforeClosingDialog::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void AskBeforeClosingDialog::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation->X = -e->X;
		mouseLocation->Y = -e->Y;
	}

	System::Void AskBeforeClosingDialog::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation->X, mouseLocation->Y);
			Location = mousePos;
		}
	}

}
