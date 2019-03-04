#include "AddForm.h"

#include "PhonebookEntry.h"
#include "Helper.h"

namespace Phonebook {

	AddForm::AddForm(MainForm^ form) {
		InitializeComponent();

		this->form = form;
	}

	// Top panel' events

	System::Void AddForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = true;

		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}
	
	System::Void AddForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDown) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}
	
	System::Void AddForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = false;
	}

	// X out events
	System::Void AddForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void AddForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"x_out-focused")));
	}

	System::Void AddForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.AddForm", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picXout.Image")));
	}

	// Add entry event
	System::Void AddForm::btnAddEntry_Click(System::Object^  sender, System::EventArgs^  e) {
		if (checkFields(lbInfo)) {
			PhonebookEntry::Entry entry;

			entry.fullName = Helper::toString(tbFullName->Text);
			entry.note = Helper::toString(tbNote->Text);
			entry.homePhone = Helper::toString(tbHomePhone->Text);
			entry.workPhone = Helper::toString(tbWorkPhone->Text);
			entry.mobilePhone = Helper::toString(tbMobilePhone->Text);
			entry.email = Helper::toString(tbEmail->Text);
			entry.address = Helper::toString(tbAddress->Text);
			entry.city = Helper::toString(tbCity->Text);

			form->addEntry(entry);

			lbInfo->Text = "Successfully added new entry!";
		}
	}

	// Reset fields event
	System::Void AddForm::btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		tbFullName->Clear();
		tbNote->Clear();
		tbHomePhone->Clear();
		tbWorkPhone->Clear();
		tbMobilePhone->Clear();
		tbEmail->Clear();
		tbAddress->Clear();
		tbCity->Clear();

		lbInfo->Text = "Please, fill out all of these fileds";
	}

	// Just parsing fields
	bool AddForm::checkFields(Label^ label) {
		if (tbFullName->Text == tbFullName->Text->Empty) {
			label->Text = "Please, fill out 'Full Name' field!";
			return false;
		}

		if (tbNote->Text == tbNote->Text->Empty) {
			label->Text = "Please, fill out 'Note' field!";
			return false;
		}

		if (tbHomePhone->Text == tbHomePhone->Text->Empty) {
			label->Text = "Please, fill out 'Home Phone' field!";
			return false;
		}

		if (tbWorkPhone->Text == tbWorkPhone->Text->Empty) {
			label->Text = "Please, fill out 'Work Phone' field!";
			return false;
		}

		if (tbMobilePhone->Text == tbMobilePhone->Text->Empty) {
			label->Text = "Please, fill out 'Mobile Phone' field!";
			return false;
		}

		if (tbEmail->Text == tbEmail->Text->Empty) {
			label->Text = "Please, fill out 'Email' field!";
			return false;
		}

		if (!tbEmail->Text->Contains("@")) {
			label->Text = "Email does NOT correct!";
			return false;
		}

		if (tbAddress->Text == tbAddress->Text->Empty) {
			label->Text = "Please, fill out 'Address' field!";
			return false;
		}

		if (tbCity->Text == tbCity->Text->Empty) {
			label->Text = "Please, fill out 'City' field!";
			return false;
		}

		return true;
	}

}