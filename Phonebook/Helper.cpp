#include <msclr\marshal_cppstd.h>

#include "Helper.h"

std::string Helper::toString(System::String^ value) {
	return msclr::interop::marshal_as<std::string>(value);
}

System::String^ Helper::toString(std::string value) {
	return gcnew System::String(value.c_str());
}