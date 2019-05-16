#include "SettingsForm.h"

#include "Config.h"
#include "Helper.h"

namespace Phonebook {

	SettingsForm::SettingsForm() {
		InitializeComponent();

		Config::Config config;
		config = config.getConfig();

		cbAskPasswordWhenStart->Checked = config.askPasswordAtStart;
		cbAskWhenClosing->Checked = config.askWhenClosing;
		cbAutosaveWhenClosing->Checked = config.autosaveWhenClosing;

		mouseLocation = gcnew Point();
	}

	// Apply button' event
	System::Void SettingsForm::btnApplyChanges_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!String::IsNullOrWhiteSpace(tbOldPassword->Text)) {
			if (String::IsNullOrWhiteSpace(tbNewPassword->Text)
				|| String::IsNullOrWhiteSpace(tbNewPasswordAgain->Text)) {
				MessageBox::Show("�� ���� ������� ���� �����������!");
			} else {
				Config::Config config;
				config = config.getConfig();

				if (Helper::getHash(tbOldPassword->Text) == config.password) {
					if (tbNewPassword->Text == tbNewPasswordAgain->Text) {
						config.askPasswordAtStart = cbAskPasswordWhenStart->Checked;
						config.askWhenClosing = cbAskWhenClosing->Checked;
						config.autosaveWhenClosing = cbAutosaveWhenClosing->Checked;
						config.password = Helper::getHash(tbNewPassword->Text);
						config.setConfig(config);

						Close();
					} else {
						MessageBox::Show("����� �� ���������.");
					}
				} else {
					MessageBox::Show("�� ����� ������������ ������.");
				}
			}
		} else {
			Config::Config config;
			config = config.getConfig();
			Config::Config newCfg;

			newCfg.askPasswordAtStart = cbAskPasswordWhenStart->Checked;
			newCfg.askWhenClosing = cbAskWhenClosing->Checked;
			newCfg.autosaveWhenClosing = cbAutosaveWhenClosing->Checked;
			newCfg.password = config.password;
			newCfg.name = config.name;
			config.setConfig(newCfg);

			Close();
		}
	}

	System::Void SettingsForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void SettingsForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation->X = -e->X;
		mouseLocation->Y = -e->Y;
	}
		
	System::Void SettingsForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation->X, mouseLocation->Y);
			Location = mousePos;
		}
	}

}