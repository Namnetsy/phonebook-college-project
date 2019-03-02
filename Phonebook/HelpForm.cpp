#include "HelpForm.h"

namespace Phonebook {

	Point mouseLocationHelpForm;
	bool isDownHelpForm = false;

	System::Void HelpForm::panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseLocationHelpForm.X = -e->X;
		mouseLocationHelpForm.Y = -e->Y;

		isDownHelpForm = true;
	}
	
	System::Void HelpForm::panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		isDownHelpForm = false;
	}

	System::Void HelpForm::panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isDownHelpForm) {
			Point mousePos = Control::MousePosition;
			mousePos.Offset(mouseLocationHelpForm.X, mouseLocationHelpForm.Y);
			Location = mousePos;
		}
	}

	System::Void HelpForm::picXout_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
		// System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
		// pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add-focused")));
	}

}