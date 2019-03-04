#include "SearchForm.h"

namespace Phonebook {

	// Top panel' events
	System::Void SearchForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = true;

		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}

	System::Void SearchForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDown) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	System::Void SearchForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDown = false;
	}

	// X out events
	System::Void SearchForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

	System::Void SearchForm::picXout_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.Resource", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"x_out-focused")));
	}

	System::Void SearchForm::picXout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		Resources::ResourceManager^ rm = gcnew Resources::ResourceManager(L"Phonebook.SearchForm", this->GetType()->Assembly);
		picXout->Image = (cli::safe_cast<System::Drawing::Image^>(rm->GetObject(L"picXout.Image")));
	}

}
