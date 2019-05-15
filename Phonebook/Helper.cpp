#include <unordered_map>

#include "Helper.h"

using namespace System::Security::Cryptography;
using namespace System::Text;
using namespace System::Runtime::InteropServices;

std::string Helper::toString(System::String^ value) {
	const char* c= (const char*)(Marshal::StringToHGlobalAnsi(value)).ToPointer();
	return c;
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
