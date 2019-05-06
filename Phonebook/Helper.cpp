#include <msclr\marshal_cppstd.h>
#include <unordered_map>

#include "Helper.h"

using namespace System::Security::Cryptography;
using namespace System::Text;

std::string Helper::toString(System::String^ value) {
	return msclr::interop::marshal_as<std::string>(value);
}

System::String^ Helper::toString(std::string value) {
	return gcnew System::String(value.c_str());
}

int Helper::getHash(System::String^ value) {
	return getHash(toString(value));
}

int Helper::getHash(std::string value) {
	std::hash<std::string> hasher;

	int hash = hasher(value);

	return hash;
}
