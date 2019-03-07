#include "MainForm.h"
#include "SearchForm.h"
#include "HelpForm.h"

#include "PhonebookEntry.h"

namespace Phonebook {

	MainForm::MainForm(void) {
		InitializeComponent();

		rmMainForm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);

		for (int i = 0; i < dgPhonebookEntries->ColumnCount; i++) {
			dgPhonebookEntries->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}

		if (PhonebookEntry::isDataExists()) {
			PhonebookEntry::addEntriesToGrid(PhonebookEntry::getEntries(), dgPhonebookEntries);
		}

		updateAmountInfo();
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

	// Search button' events
	System::Void MainForm::picSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		SearchForm^ searchForm = gcnew SearchForm(dgPhonebookEntries, this);
		searchForm->Show();
	}

	System::Void MainForm::picSearch_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"search-focused")));
	}
	
	System::Void MainForm::picSearch_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picSearch.Image")));
	}

	// Show all button' events
	System::Void MainForm::picShowAll_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"open-focused")));
	}

	System::Void MainForm::picShowAll_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picShowAll.Image")));
	}

	System::Void MainForm::picShowAll_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PhonebookEntry::isDataExists()) {
			dgPhonebookEntries->Rows->Clear();

			PhonebookEntry::addEntriesToGrid(PhonebookEntry::getEntries(), dgPhonebookEntries);

			updateAmountInfo();

			MessageBox::Show("Loaded", "Info");
		} else {
			MessageBox::Show("There's nothing to load", "Info");
		}
	}

	// Help button' events
	System::Void MainForm::picHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		HelpForm^ helpForm = gcnew HelpForm();
		helpForm->Show();
	}

	// Save button' events

	System::Void MainForm::picSave_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"save-focused")));
	}
	
	System::Void MainForm::picSave_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picSave.Image")));
	}

	System::Void MainForm::picSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PhonebookEntry::isValidate(dgPhonebookEntries)) {
			if (PhonebookEntry::saveEntries(PhonebookEntry::gridToEntries(dgPhonebookEntries)))
				MessageBox::Show("Saved", "Info");
			else
				MessageBox::Show("Something went wrong ;(", "Info");
		}
		else {
			MessageBox::Show("Please, fill out each of this fields!");
		}
	}

	// Settings button' events

	System::Void MainForm::picSettings_Click(System::Object^  sender, System::EventArgs^  e) {
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
			MessageBox::Show("There's nothing to remove", "Info");
		} else {
			dgPhonebookEntries->Rows->Clear();
		}
	}

	// Settings button' events

	System::Void MainForm::picSettings_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picSettings->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"settings-focused")));
	}

	System::Void MainForm::picSettings_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picSettings->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picSettings.Image")));
	}

	// About button' events

	System::Void MainForm::picAbout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"about-focused")));
	}

	System::Void MainForm::picAbout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picAbout->Image = (cli::safe_cast<System::Drawing::Image^>(rmMainForm->GetObject(L"picAbout.Image")));
	}

	// DataGridView' events

	System::Void MainForm::dgPhonebookEntries_RowsRemoved(System::Object^  sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^  e) {
		updateAmountInfo();
	}

	System::Void MainForm::dgPhonebookEntries_CellStateChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^  e) {
		if (e->StateChanged == DataGridViewElementStates::Selected) {
			e->Cell->Style->BackColor = Color::White;
			e->Cell->Style->ForeColor = Color::Black;
		}
	}

	System::Void MainForm::dgPhonebookEntries_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		updateAmountInfo();
	}

	// Other

	void MainForm::addEntry(PhonebookEntry::Entry entry) {
		dgPhonebookEntries->Rows->Add(gcnew String(entry.fullName.c_str()), gcnew String(entry.note.c_str()),
			gcnew String(entry.homePhone.c_str()), gcnew String(entry.workPhone.c_str()),
			gcnew String(entry.mobilePhone.c_str()), gcnew String(entry.email.c_str()),
			gcnew String(entry.address.c_str()), gcnew String(entry.city.c_str()));

		updateAmountInfo();
	}

	void MainForm::updateEntry(DataGridViewRow^ row, int index) {
		dgPhonebookEntries->Rows[index]->Cells[0]->Value = row->Cells[0]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[1]->Value = row->Cells[1]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[2]->Value = row->Cells[2]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[3]->Value = row->Cells[3]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[4]->Value = row->Cells[4]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[5]->Value = row->Cells[5]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[6]->Value = row->Cells[6]->Value->ToString();
		dgPhonebookEntries->Rows[index]->Cells[7]->Value = row->Cells[7]->Value->ToString();
	}

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

}
