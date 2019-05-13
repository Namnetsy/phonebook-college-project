#include "MainForm.h"
#include "SettingsForm.h"

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
		if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel) {
			saveEntries(saveFileDialog1->FileName);
			MessageBox::Show("Дані збережено в " + saveFileDialog1->FileName);
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
		if (e->KeyCode == Keys::Delete)
			removeEntry();
		else if (e->Control && e->KeyCode == Keys::N)
			addEntry();
		// TODO:: Add more hotkeys
	}

	// Settings button' events
	System::Void MainForm::picSettings_Click(System::Object^  sender, System::EventArgs^  e) {
		auto s = gcnew SettingsForm();
		s->ShowDialog();
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
