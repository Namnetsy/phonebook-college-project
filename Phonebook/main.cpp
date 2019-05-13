#include "PasswordForm.h"
#include "FirstRunForm.h"
#include "MainForm.h"
#include "Config.h"

#include <fstream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]

void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ifstream storedData(Config::FILE_PATH, ios::binary);

	if (storedData.is_open()) {
		Config::Config config;

		if (config.getConfig().askPasswordAtStart) {
			Phonebook::PasswordForm passwordForm;
			Application::Run(%passwordForm);
		} else {
			Phonebook::MainForm mainRun;
			Application::Run(%mainRun);
		}
	} else {
		Phonebook::FirstRunForm firstRun;
		Application::Run(%firstRun);
	}

	storedData.close();
}
