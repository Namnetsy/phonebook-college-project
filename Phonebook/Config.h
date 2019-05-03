#pragma once

#include <string>

namespace Config {

	const std::string FILE_PATH = "config.cfg";

	struct Config {
		std::string name;
		std::string username;
		std::string password;
		
		bool autosaveWhenClosing;
		bool autosaveAfterChanges;
		bool askWhenClosing;

		Config getConfig();
		void setConfig(Config config);
	};

}
