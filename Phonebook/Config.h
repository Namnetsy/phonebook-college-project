#pragma once

#include <string>

namespace Config {

	const std::string FILE_PATH = "config.cfg";

	struct Config {
		std::string name;
		int password;
		
		bool autosaveWhenClosing;
		bool autosaveAfterChanges;
		bool askWhenClosing;

		Config getConfig();
		void setConfig(Config config);
	};

}
