#include "MainForm.h"
#include "AddForm.h"
#include "SearchForm.h"
#include "HelpForm.h"

#include "PhonebookEntry.h"

namespace Phonebook {

	MainForm::MainForm(void) {
		InitializeComponent();

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

		isDown = true;
	}

	System::Void MainForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDown) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location  = mousePos;
		}
	}

	System::Void MainForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = false;
	}

	// X out events
	System::Void MainForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	System::Void MainForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"x_out-focused")));
	}

	System::Void MainForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picXout.Image")));
	}

	// Minimize button' events
	System::Void MainForm::picMinimize_Click(System::Object^  sender, System::EventArgs^  e) {
		WindowState = FormWindowState::Minimized;
	}

	// Add entry button' events
	System::Void MainForm::picAddEntry_Click(System::Object^  sender, System::EventArgs^  e) {
		AddForm^ addForm = gcnew AddForm(this);
		addForm->Show();
	}

	System::Void MainForm::picAddEntry_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picAddEntry->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"add-focused")));
	}

	System::Void MainForm::picAddEntry_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picAddEntry->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picAddEntry.Image")));
	}

	// Remove button's events
	System::Void MainForm::picRemoveEntry_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picRemoveEntry->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"remove-focused")));
	}
	
	System::Void MainForm::picRemoveEntry_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picRemoveEntry->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picRemoveEntry.Image")));
	}

	System::Void MainForm::picRemoveEntry_Click(System::Object^  sender, System::EventArgs^  e) {
		int len = dgPhonebookEntries->SelectedRows->Count;

		if (len > 0) {
			int* rows = new int[len];

			// getting indexes of selected entries into array
			for (int i = 0; i < len; i++)
				rows[i] = dgPhonebookEntries->SelectedRows[i]->Index;

			// removing by array of indexes
			for (int i = 0; i < len; i++)
				dgPhonebookEntries->Rows->RemoveAt(rows[i]);

			updateAmountInfo();
		} else {
			MessageBox::Show("Please, select rows to delete", "Info");
		}
	}

	// Search button' events
	System::Void MainForm::picSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		SearchForm^ searchForm = gcnew SearchForm();
		searchForm->Show();
	}

	System::Void MainForm::picSearch_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"search-focused")));
	}
	
	System::Void MainForm::picSearch_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picSearch->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picSearch.Image")));
	}

	// Show all button' events
	System::Void MainForm::picShowAll_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"show_all-focused")));
	}

	System::Void MainForm::picShowAll_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picShowAll->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picShowAll.Image")));
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
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"save-focused")));
	}
	
	System::Void MainForm::picSave_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.MainForm", this->GetType()->Assembly);
		picSave->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picSave.Image")));
	}

	System::Void MainForm::picSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (PhonebookEntry::saveEntries(PhonebookEntry::gridToEntries(dgPhonebookEntries))) {
			MessageBox::Show("Saved", "Info");
		} else {
			MessageBox::Show("Sorry, but there's no data to save", "Info");
		}
	}

	// Other

	void MainForm::addEntry(PhonebookEntry::Entry entry) {
		dgPhonebookEntries->Rows->Add(gcnew String(entry.fullName.c_str()), gcnew String(entry.note.c_str()),
			gcnew String(entry.homePhone.c_str()), gcnew String(entry.workPhone.c_str()),
			gcnew String(entry.mobilePhone.c_str()), gcnew String(entry.email.c_str()),
			gcnew String(entry.address.c_str()), gcnew String(entry.city.c_str()));

		updateAmountInfo();
	}

	void MainForm::updateAmountInfo() {
		lbAmountEntries->Text = "Amount of entries: " + dgPhonebookEntries->RowCount;
	}

}
