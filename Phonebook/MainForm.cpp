#include "MainForm.h"

#include "PhonebookEntry.h"

namespace Phonebook {

	MainForm::MainForm(void) {
		InitializeComponent();

		// tbSearch->AutoSize = false;
		// tbSearch->Height = 23;

		rmMainForm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		/*
		for (int i = 0; i < dgPhonebookEntries->ColumnCount; i++) {
			dgPhonebookEntries->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}

		if (PhonebookEntry::isDataExists()) {
			PhonebookEntry::addEntriesToGrid(PhonebookEntry::getEntries(), dgPhonebookEntries);
		}

		updateAmountInfo();*/

		PhonebookControls::EntryControl^ entry = gcnew PhonebookControls::EntryControl();
		PhonebookControls::EntryControl^ entry1 = gcnew PhonebookControls::EntryControl();
		PhonebookControls::EntryControl^ entry2 = gcnew PhonebookControls::EntryControl();

		flpEntries->Controls->Add(entry);
		flpEntries->Controls->Add(entry1);
		flpEntries->Controls->Add(entry2);
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
			Location  = mousePos;
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
	/*
	// Search button' events
	System::Void MainForm::picSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tbSearch->Text != tbSearch->Text->Empty) {
			if (PhonebookEntry::search(dgPhonebookEntries, tbSearch->Text)) {
				picHide->Visible = true;
			} else {
				lbInfo->Text = "Not found";
			}
		} else {
			lbInfo->Text = "Enter some text for searching";
		}
	}

	System::Void MainForm::picSearch_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"search-focused")));
	}
	
	System::Void MainForm::picSearch_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picSearch.Image")));
	}

	// Open button' events
	System::Void MainForm::picOpen_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picOpen->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"open-focused")));
	}

	System::Void MainForm::picOpen_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picOpen->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picOpen.Image")));
	}

	System::Void MainForm::picOpen_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PhonebookEntry::isDataExists()) {
			dgPhonebookEntries->Rows->Clear();

			PhonebookEntry::addEntriesToGrid(PhonebookEntry::getEntries(), dgPhonebookEntries);

			updateAmountInfo();

			lbInfo->Text = "Successfully loaded";
		} else {
			lbInfo->Text = "There's nothing to load";
		}
	}

	// Save button' events

	System::Void MainForm::picSave_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"save-focused")));
	}
	
	System::Void MainForm::picSave_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picSave.Image")));
	}

	System::Void MainForm::picSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PhonebookEntry::saveEntries(PhonebookEntry::gridToEntries(dgPhonebookEntries))) {
			lbInfo->Text = "Successfully saved";
		} else {
			lbInfo->Text = "Something went wrong ;(", "Info";
		}
	}

	// Remove all button' events

	System::Void MainForm::picRemoveAll_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picRemoveAll->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"remove_all-focused")));
	}
	
	System::Void MainForm::picRemoveAll_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picRemoveAll->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picRemoveAll.Image")));
	}
	
	System::Void MainForm::picRemoveAll_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!PhonebookEntry::removeData()) {
			lbInfo->Text = "There's nothing to remove";
		} else {
			dgPhonebookEntries->Rows->Clear();
		}
	}

	// About button' events

	System::Void MainForm::picAbout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"about-focused")));
	}

	System::Void MainForm::picAbout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picAbout.Image")));
	}

	System::Void MainForm::picAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Application::OpenForms->Count == 1) {
			AboutForm^ aboutForm = gcnew AboutForm();
			aboutForm->Show();
		}
	}

	// DataGridView' events

	System::Void MainForm::dgPhonebookEntries_RowsRemoved(System::Object^  sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^  e) {
		updateAmountInfo();
	}

	System::Void MainForm::dgPhonebookEntries_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		updateAmountInfo();
	}

	// Hide button' events

	System::Void MainForm::picHide_Click(System::Object^  sender, System::EventArgs^  e) {
		resetDataGridStyle();

		picHide->Visible = false;
	}
	
	System::Void MainForm::picHide_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picHide->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"hide-focused")));
	}
	
	System::Void MainForm::picHide_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picHide->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picHide.Image")));
	}

	// Info label' events
	
	System::Void MainForm::dgPhonebookEntries_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		lbInfo->Text = "Don't forget to save after editing";
	}

	// Other

	void MainForm::updateAmountInfo() {
		lbAmountEntries->Text = "Amount of entries: " + (dgPhonebookEntries->RowCount - 1);
	}

	bool MainForm::resetDataGridStyle() {
		if (dgPhonebookEntries->Rows->Count > 0) {
			for (int rowIndex = 0; rowIndex < dgPhonebookEntries->Rows->Count; rowIndex++) {
				for (int cellIndex = 0; cellIndex < dgPhonebookEntries->Rows[rowIndex]->Cells->Count; cellIndex++) {
					dgPhonebookEntries->Rows[rowIndex]->Cells[cellIndex]->Style->BackColor = System::Drawing::Color::White;
					dgPhonebookEntries->Rows[rowIndex]->Cells[cellIndex]->Style->ForeColor = System::Drawing::Color::Black;
				}
			}

			return true;
		}

		return false;
	}
	*/

	vector<PhonebookEntry::Entry> MainForm::getEntries() {
		vector<PhonebookEntry::Entry> entries;
		PhonebookEntry::Entry entry;
		auto enumerator = flpEntries->Controls->GetEnumerator();

		while (enumerator->MoveNext()) {
			entries.push_back(entry);
		}

		return entries;
	}
}
