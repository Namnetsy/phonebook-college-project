#include "FirstRunForm.h"

#include "Config.h"
#include "Helper.h"
#include "MainForm.h"

namespace Phonebook {
	FirstRunForm::FirstRunForm() {
		InitializeComponent();

		rmFirstRunForm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
	}

	// Top panel' events
	System::Void FirstRunForm::panTopPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}
	
	System::Void FirstRunForm::panTopPanel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// Apply button' events
	System::Void FirstRunForm::btnApply_Click(System::Object^  sender, System::EventArgs^  e) {
		Config::Config config;

		if (tbPassword->Text == tbPasswordAgain->Text) {
			config.name = Helper::toString(tbName->Text);
			config.password = Helper::getHash(tbPassword->Text);
			config.askWhenClosing = cbAskWhenClosing->Checked;
			config.askPasswordAtStart = cbAskPasswordWhenStart->Checked;
			config.autosaveWhenClosing = cbAutosaveWhenClosing->Checked;

			config.setConfig(config);

			MainForm^ mainForm = gcnew MainForm();
			Hide();
			mainForm->Show();
		}
	}
}
