#pragma once

#include <string>

namespace Helper {

	// Just shortcut for marshal_as function
	std::string toString(System::String^ value);

	System::String^ toString(std::string value);

	int getHash(System::String^ value);

	int getHash(std::string value);

}
