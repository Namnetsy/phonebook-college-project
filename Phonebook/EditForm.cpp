#include "EditForm.h"

namespace Phonebook {

	EditForm::EditForm(DataGridViewRow^ row, MainForm^ mainForm) {
		InitializeComponent();

		this->row = row;
		this->mainForm = mainForm;

		tbFullName->Text = row->Cells[0]->Value->ToString();
		tbNote->Text = row->Cells[1]->Value->ToString();
		tbHomePhone->Text = row->Cells[2]->Value->ToString();
		tbWorkPhone->Text = row->Cells[3]->Value->ToString();
		tbMobilePhone->Text = row->Cells[4]->Value->ToString();
		tbEmail->Text = row->Cells[5]->Value->ToString();
		tbAddress->Text = row->Cells[6]->Value->ToString();
		tbCity->Text = row->Cells[7]->Value->ToString();

		rmEditForm = gcnew Resources::ResourceManager(L"Phonebook.EditForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
	}

	// Top panel' event

	System::Void EditForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}
	
	System::Void EditForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == ::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// X out events

	System::Void EditForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"x_out-focused")));
	}
	
	System::Void EditForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmEditForm->GetObject(L"picXout.Image")));
	}
	
	System::Void EditForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	// Save button' events

	System::Void EditForm::btnAddEntry_Click(System::Object^  sender, System::EventArgs^  e) {
		row->Cells[0]->Value = tbFullName->Text;
		row->Cells[1]->Value = tbNote->Text;
		row->Cells[2]->Value = tbHomePhone->Text;
		row->Cells[3]->Value = tbWorkPhone->Text;
		row->Cells[4]->Value = tbMobilePhone->Text;
		row->Cells[5]->Value = tbEmail->Text;
		row->Cells[6]->Value = tbAddress->Text;
		row->Cells[7]->Value = tbCity->Text;

		mainForm->updateEntry(row, row->Index);
	}
}
