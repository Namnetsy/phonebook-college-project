#include "SearchForm.h"

namespace Phonebook {

	Point mouseLocationSearchForm;
	bool isDownSearchForm;

	System::Void SearchForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownSearchForm = true;

		mouseLocationSearchForm.X = -e->X;
		mouseLocationSearchForm.Y = -e->Y;
	}

	System::Void SearchForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDownSearchForm) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocationSearchForm.X, mouseLocationSearchForm.Y);
			Location = mousePos;
		}
	}

	System::Void SearchForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownSearchForm = false;
	}

	System::Void SearchForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

}