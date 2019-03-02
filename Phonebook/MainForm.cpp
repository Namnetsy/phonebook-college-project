#include "MainForm.h"
#include "AddForm.h"
#include "SearchForm.h"
#include "HelpForm.h"

namespace Phonebook {

	Point mouseLocationMainForm;
	
	bool isDownMainForm = false;

	MainForm::MainForm(void) {
		InitializeComponent();

		for (int i = 0; i < dgPhonebookEntries->ColumnCount; i++) {
			dgPhonebookEntries->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}
	}

	// top panel' events
	System::Void MainForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocationMainForm.X = -e->X;
		mouseLocationMainForm.Y = -e->Y;

		isDownMainForm = true;
	}

	System::Void MainForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDownMainForm) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocationMainForm.X, mouseLocationMainForm.Y);
			Location  = mousePos;
		}
	}

	System::Void MainForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownMainForm = false;
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
		AddForm^ addForm = gcnew AddForm();
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

	// Help button' events
	System::Void MainForm::picHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		HelpForm^ helpForm = gcnew HelpForm();
		helpForm->Show();
	}

}