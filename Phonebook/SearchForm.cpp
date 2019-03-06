#include "SearchForm.h"

namespace Phonebook {

	SearchForm::SearchForm(DataGridView^ dg, MainForm^ mainForm) {
		InitializeComponent();

		this->dg = dg;
		this->mainForm = mainForm;

		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		rmSearchForm = gcnew Resources::ResourceManager(L"Phonebook.SearchForm", this->GetType()->Assembly);
	}

	// Top panel' events
	System::Void SearchForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}

	System::Void SearchForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == ::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// X out events
	System::Void SearchForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void SearchForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"x_out-focused")));
	}

	System::Void SearchForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmSearchForm->GetObject(L"picXout.Image")));
	}

	System::Void SearchForm::btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		PhonebookEntry::search(dg, tbSearch->Text);
	}

}
