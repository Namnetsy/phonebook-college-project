#include <msclr\marshal_cppstd.h>

#include "Helper.h"

std::string Helper::toString(System::String^ value) {
	return msclr::interop::marshal_as<std::string>(value);
}