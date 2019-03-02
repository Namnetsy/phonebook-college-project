#include "AddForm.h"

namespace Phonebook {

	Point mouseLocationAddForm;
	bool isDownAddForm = false;

	System::Void AddForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownAddForm = true;

		mouseLocationAddForm.X = -e->X;
		mouseLocationAddForm.Y = -e->Y;
	}
	
	System::Void AddForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDownAddForm) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocationAddForm.X, mouseLocationAddForm.Y);
			Location = mousePos;
		}
	}
	
	System::Void AddForm::panControlButtons_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownAddForm = false;
	}

	System::Void AddForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

}