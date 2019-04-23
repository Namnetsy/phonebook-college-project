#include "stdafx.h"
#include "EntryControl.h"
#include "../Phonebook/Helper.h"

namespace PhonebookControls {

	EntryControl::EntryControl() {
		InitializeComponent();

		rtbFullName->Hide();
	}
	// lbMobilePhone' events
	System::Void EntryControl::lbMobilePhone_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbMobilePhone->Text = lbMobilePhone->Text;
		rtbMobilePhone->Show();
	}

	System::Void EntryControl::rtbMobilePhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbMobilePhone, lbMobilePhone);
	}

	// lbFullName' events
	System::Void EntryControl::lbFullName_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbFullName->Text = lbFullName->Text;
		rtbFullName->Show();
	}

	System::Void EntryControl::rtbFullName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbFullName, lbFullName);
	}

	// lbHomePhone' events
	System::Void EntryControl::lbHomePhone_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbHomePhone->Text = lbHomePhone->Text;
		rtbHomePhone->Show();
	}

	System::Void EntryControl::rtbHomePhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbHomePhone, lbHomePhone);
	}

	// lbWorkPhone' events
	System::Void EntryControl::rtbWorkPhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbWorkPhone, lbWorkPhone);
	}

	System::Void EntryControl::lbWorkPhone_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbWorkPhone->Text = lbWorkPhone->Text;
		rtbWorkPhone->Show();
	}

	// lbCountry' events
	System::Void EntryControl::rtbCountry_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbCountry, lbCountry);
	}
	
	System::Void EntryControl::lbCountry_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbCountry->Text = lbCountry->Text;
		rtbCountry->Show();
	}

	// lbCity's events
	System::Void EntryControl::rtbCity_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbCity, lbCity);
	}
	
	System::Void EntryControl::lbCity_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbCity->Text = lbCity->Text;
		rtbCity->Show();
	}

	// lbEmail's events

	System::Void EntryControl::rtbEmail_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (char)13)
			editTextInLabel(rtbEmail, lbEmail);
	}

	System::Void EntryControl::lbEmail_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		rtbEmail->Text = lbEmail->Text;
		rtbEmail->Show();
	}

	// picShowMore' events
	System::Void EntryControl::picShowMore_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Height == 50)
			Height += 50;
		else
			Height -= 50;
	}

	// Other
	void EntryControl::editTextInLabel(RichTextBox^ rtb, Label^ lb) {
		rtb->Text = rtb->Text->Replace("\n", "");

		if (String::IsNullOrWhiteSpace(rtb->Text)) {
			rtb->Text = "Cannot be empty!";
		} else {
			lb->Text = rtb->Text;
			rtb->Hide();
		}
	}

	PhonebookEntry::Entry EntryControl::getEntry() {
		PhonebookEntry::Entry entry;
		entry.fullName = Helper::toString(lbFullName->Text);
		entry.homePhone = Helper::toString(lbHomePhone->Text);
		entry.workPhone = Helper::toString(lbWorkPhone->Text);
		entry.city = Helper::toString(lbCity->Text);
		entry.email = Helper::toString(lbEmail->Text);
		entry.mobilePhone = Helper::toString(lbMobilePhone->Text);
		entry.country = Helper::toString(lbCountry->Text);

		return entry;
	}

}
