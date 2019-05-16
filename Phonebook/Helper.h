#pragma once

#include <string>

namespace Helper {

	std::string toString(System::String^ value);

	System::String^ toString(std::string value);

	int getHash(System::String^ value);

	int getHash(std::string value);

}
