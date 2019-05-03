#pragma once

#include <string>

namespace Helper {

	// Just shortcut for marshal_as function
	std::string toString(System::String^ value);

	System::String^ toString(std::string value);

}