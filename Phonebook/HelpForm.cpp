#include "HelpForm.h"

namespace Phonebook {

	// Top panel' events
	System::Void HelpForm::panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;

		isDown = true;
	}
	
	System::Void HelpForm::panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = false;
	}

	System::Void HelpForm::panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDown) {
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
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"x_out-focused")));
	}
	
	System::Void HelpForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.HelpForm", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picXout.Image")));
	}

}
