#include "AboutForm.h"

namespace Phonebook {
	
	// top panel' events

	System::Void AboutForm::panControlButtons_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocation.X = -e->X;
		mouseLocation.Y = -e->Y;
	}

	System::Void AboutForm::panControlButtons_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button ==  System::Windows::Forms::MouseButtons::Left) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocation.X, mouseLocation.Y);
			Location = mousePos;
		}
	}

	// X out button' events
	System::Void AboutForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}

}