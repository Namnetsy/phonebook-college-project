#include "MainForm.h"
#include "SettingsForm.h"
#include "AskBeforeClosingDialog.h"
#include "AboutForm.h"

#include "Config.h"
#include "Helper.h"

namespace Phonebook {

	MainForm::MainForm(void) {
		InitializeComponent();

		rmMainForm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);

		Config::Config config;
		config = config.getConfig();
		lbUsername->Text = gcnew String(config.name.c_str());
	}

	// top panel' events
	System::Void MainForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}

	System::Void MainForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == ::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// X out events
	System::Void MainForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Config::Config cfg;
		Entry::Entry entry;
		cfg = cfg.getConfig();

		if (cfg.autosaveWhenClosing && flpEntries->Controls->Count > 0) {
			if (!String::IsNullOrEmpty(saveFileDialog1->FileName)) {
				auto entries = getEntries();
				entry.set(entries, Helper::toString(saveFileDialog1->FileName));
			} else if (openFileDialog1->FileName != "openFileDialog1") {
				auto entries = getEntries();
				entry.set(entries, Helper::toString(openFileDialog1->FileName));
			} else {
				auto entries = getEntries();
				entry.set(entries, Helper::toString(openFileDialog1->FileName));
			}

			Application::Exit();
		}

		if (openFileDialog1->FileName != "openFileDialog1" && cfg.askWhenClosing == true) {
			Entry::Entry entry;
			auto loaded = entry.get(Helper::toString(openFileDialog1->FileName));
			auto local = getEntries();

			if (loaded.size() > local.size()) {
				auto a = gcnew AskBeforeClosingDialog(this, openFileDialog1->FileName);
				a->ShowDialog();
			} else {
				for (int i = 0; i < local.size(); i++) {
					if (loaded.at(i).city == local.at(i).city
						&& loaded.at(i).fullName == local.at(i).fullName
						&& loaded.at(i).country == local.at(i).country
						&& loaded.at(i).email == local.at(i).email
						&& loaded.at(i).homePhone == local.at(i).homePhone
						&& loaded.at(i).mobilePhone == local.at(i).mobilePhone
						&& loaded.at(i).workPhone == local.at(i).workPhone) {
						continue;
					} else {
						auto a = gcnew AskBeforeClosingDialog(this, openFileDialog1->FileName);
						a->ShowDialog();
					}
				}
			}
		} else if (flpEntries->Controls->Count > 0 && cfg.askWhenClosing == true) {
			auto a = gcnew AskBeforeClosingDialog(this);
			a->ShowDialog();
		}

		Application::Exit();
	}

	System::Void MainForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"x_out-focused")));
	}

	System::Void MainForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picXout.Image")));
	}

	// Minimize button' events
	System::Void MainForm::picMinimize_Click(System::Object^  sender, System::EventArgs^  e) {
		WindowState = FormWindowState::Minimized;
	}

	std::vector<Entry::Entry> MainForm::getEntries() {
		std::vector<Entry::Entry> entries;
		auto enumerator = flpEntries->Controls->GetEnumerator();

		while (enumerator->MoveNext())
			entries.push_back(((EntryControl^)enumerator->Current)->getEntry());

		return entries;
	}

	// add button' events
	System::Void MainForm::picAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		addEntry();
	}

	// save button' events
	System::Void MainForm::picSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!String::IsNullOrEmpty(saveFileDialog1->FileName)) {
			saveEntries(saveFileDialog1->FileName);
			MessageBox::Show("Дані збережено в " + saveFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
		} else if (openFileDialog1->FileName != "openFileDialog1") {
			saveEntries(openFileDialog1->FileName);
			MessageBox::Show("Дані збережено в " + openFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
		} else {
			if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
				saveEntries(saveFileDialog1->FileName);
				MessageBox::Show("Дані збережено в " + saveFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

	// open button' events
	System::Void MainForm::picOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
			Entry::Entry entry;
			std::vector<Entry::Entry> entries = entry.get(Helper::toString(openFileDialog1->FileName));
			clearTable();

			for (auto i = entries.begin(); i != entries.end(); ++i) {
				addEntry(*i);
			}
		}
	}

	// Hotkeys
	System::Void MainForm::MainForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Delete) {
			removeEntry();
		} else if (e->Control && e->KeyCode == Keys::N) {
			addEntry();

		} else if (e->Control && e->KeyCode == Keys::O) {
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
				Entry::Entry entry;
				std::vector<Entry::Entry> entries = entry.get(Helper::toString(openFileDialog1->FileName));
				flpEntries->Controls->Clear();

				for (auto i = entries.begin(); i != entries.end(); ++i) {
					addEntry(*i);
				}
			}
		} else if (e->Control && e->KeyCode == Keys::S) {
			if (!String::IsNullOrEmpty(saveFileDialog1->FileName)) {
				saveEntries(saveFileDialog1->FileName);
				MessageBox::Show("Дані збережено в " + saveFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
			} else if (openFileDialog1->FileName != "openFileDialog1") {
				saveEntries(openFileDialog1->FileName);
				MessageBox::Show("Дані збережено в " + openFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
			} else {
				if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
					saveEntries(saveFileDialog1->FileName);
					MessageBox::Show("Дані збережено в " + saveFileDialog1->FileName, "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
		}
	}

	// Settings button' events
	System::Void MainForm::picSettings_Click(System::Object^  sender, System::EventArgs^  e) {
		auto s = gcnew SettingsForm();
		s->ShowDialog();
	}

	// About button' events
	System::Void MainForm::picAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		auto a = gcnew AboutForm();
		a->ShowDialog();
	}


	// MainForm' events
	System::Void MainForm::MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}

	// Other
	void MainForm::addEntry() {
		EntryControl^ control = gcnew EntryControl();
		flpEntries->Controls->Add(control);
	}

	void MainForm::addEntry(Entry::Entry entry) {
		EntryControl^ control = gcnew EntryControl();
		control->setEntry(entry);

		flpEntries->Controls->Add(control);
	}

	void MainForm::saveEntries(System::String^ path) {
		Entry::Entry entry;
		entry.set(getEntries(), Helper::toString(path));
	}

	void MainForm::removeEntry() {
		auto  e = flpEntries->Controls->GetEnumerator();

		while (e->MoveNext()) {
			auto tmp = (EntryControl^)e->Current;

			if (tmp->BorderStyle == Windows::Forms::BorderStyle::Fixed3D) {
				flpEntries->Controls->Remove(tmp);
				break;
			}
		}
	}

	void MainForm::clearTable() {
		auto  e = flpEntries->Controls->GetEnumerator();

		while (e->MoveNext()) {
			flpEntries->Controls->Remove((EntryControl^)e->Current);
		}
	}

}
