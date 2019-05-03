#pragma once

#include <string>
#include <vector>

namespace Entry {

	const std::string FILE_PATH = "entries.pbe";

	struct Entry {
		std::string fullName;
		std::string homePhone;
		std::string workPhone;
		std::string mobilePhone;
		std::string email;
		std::string country;
		std::string city;

		void set(std::vector<Entry> entries, std::string path);
		std::vector<Entry> get(std::string path);
	};

}
