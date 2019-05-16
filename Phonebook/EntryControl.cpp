#include "EntryControl.h"
#include "Helper.h"

using namespace Helper;

namespace Phonebook {

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
		if (Height == 50) {
			Height += 50;
		} else {
			Height -= 50;
		}
	}

	// EntryControl' events
	System::Void EntryControl::EntryControl_Enter(System::Object^  sender, System::EventArgs^  e) {
		BorderStyle = Windows::Forms::BorderStyle::Fixed3D;
	}

	System::Void EntryControl::EntryControl_Leave(System::Object^  sender, System::EventArgs^  e) {
		BorderStyle = Windows::Forms::BorderStyle::None;
	}

	// Other
	void EntryControl::editTextInLabel(RichTextBox^ rtb, Label^ lb) {
		rtb->Text = rtb->Text->Replace("\n", "");

		if (String::IsNullOrWhiteSpace(rtb->Text)) {
			lb->Text = "<empty>";
			rtb->Hide();
		} else {
			lb->Text = rtb->Text;
			rtb->Hide();
		}
	}

	Entry::Entry EntryControl::getEntry() {
		Entry::Entry entry;
		entry.fullName = Helper::toString(lbFullName->Text);
		entry.homePhone = Helper::toString(lbHomePhone->Text);
		entry.workPhone = Helper::toString(lbWorkPhone->Text);
		entry.city = Helper::toString(lbCity->Text);
		entry.email = Helper::toString(lbEmail->Text);
		entry.mobilePhone = Helper::toString(lbMobilePhone->Text);
		entry.country = Helper::toString(lbCountry->Text);
		return entry;
	}

	void EntryControl::setEntry(Entry::Entry entry) {
		lbFullName->Text = toString(entry.fullName);
		lbCity->Text = toString(entry.city);
		lbCountry->Text = toString(entry.country);
		lbEmail->Text = toString(entry.email);
		lbWorkPhone->Text = toString(entry.workPhone);
		lbMobilePhone->Text = toString(entry.mobilePhone);
		lbHomePhone->Text = toString(entry.homePhone);
	}

}
