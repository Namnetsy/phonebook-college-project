#include "HelpForm.h"

namespace Phonebook {

	HelpForm::HelpForm() {
		InitializeComponent();

		rmHelpForm = gcnew Resources::ResourceManager(L"Phonebook.HelpForm", this->GetType()->Assembly);
		rmGlobal = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
	}

	// Top panel' events
	System::Void HelpForm::panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}

	System::Void HelpForm::panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// X out events
	System::Void HelpForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void HelpForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmGlobal->GetObject(L"x_out-focused")));
	}
	
	System::Void HelpForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rmHelpForm->GetObject(L"picXout.Image")));
	}

}
