#include "Entry.h"
#include "Helper.h"

using namespace System;
using namespace System::IO;
using namespace Helper;

namespace Entry {

	void Entry::set(std::vector<Entry> entries, std::string path) {
		BinaryWriter^ writer = gcnew BinaryWriter(gcnew FileStream(toString(path), FileMode::Create));
		Entry entry;

		writer->Write(entries.size());

		for (auto i = entries.begin(); i != entries.end(); ++i) {
			entry = *i;

			writer->Write(toString(entry.fullName));
			writer->Write(toString(entry.homePhone));
			writer->Write(toString(entry.workPhone));
			writer->Write(toString(entry.mobilePhone));
			writer->Write(toString(entry.email));
			writer->Write(toString(entry.country));
			writer->Write(toString(entry.city));
		}

		writer->Close();
	}

	std::vector<Entry> Entry::get(std::string path) {
		std::vector<Entry> entries;
		BinaryReader^ reader = gcnew BinaryReader(gcnew FileStream(toString(path), FileMode::Open));
		int len = reader->ReadInt32();

		for (int i = 0; i < len; i++) {
			Entry entry;
			entry.fullName = toString(reader->ReadString());
			entry.homePhone = toString(reader->ReadString());
			entry.workPhone = toString(reader->ReadString());
			entry.mobilePhone = toString(reader->ReadString());
			entry.email = toString(reader->ReadString());
			entry.country = toString(reader->ReadString());
			entry.city = toString(reader->ReadString());

			entries.push_back(entry);
		}

		reader->Close();

		return entries;
	}

}
