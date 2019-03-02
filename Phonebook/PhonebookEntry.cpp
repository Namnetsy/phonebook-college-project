#include "PhoneBookEntry.h"
#include "Helper.cpp"

using namespace System;

vector<Entry> convertGridToEntries(DataGridView^ grid) {
	int len = grid->RowCount;
	vector<Entry> entries;
	Entry entry;

	for (int i = 0; i < len; i++) {
		entry.fullName = toStandardString(grid->Rows[i]->Cells[0]->Value->ToString());
		entry.note = toStandardString(grid->Rows[i]->Cells[1]->Value->ToString());
		entry.category = toStandardString(grid->Rows[i]->Cells[2]->Value->ToString());
		entry.homePhone = toStandardString(grid->Rows[i]->Cells[3]->Value->ToString());
		entry.workPhone = toStandardString(grid->Rows[i]->Cells[4]->Value->ToString());
		entry.mobilePhone = toStandardString(grid->Rows[i]->Cells[5]->Value->ToString());
		entry.email = toStandardString(grid->Rows[i]->Cells[6]->Value->ToString());
		entry.address = toStandardString(grid->Rows[i]->Cells[7]->Value->ToString());
		entry.city = toStandardString(grid->Rows[i]->Cells[8]->Value->ToString());
		entry.favorite = Convert::ToBoolean(grid->Rows[i]->Cells[9]->Value);

		entries.push_back(entry);
	}

	return entries;
}

bool addEntriesToGrid(vector<Entry> entries, DataGridView^ grid) {
	Entry entry;

	if (entries.size() == 0)
		return false;

	for (auto i = entries.begin(); i != entries.end(); ++i) {
		entry = *i;

		grid->Rows->Add(gcnew String(entry.fullName.c_str()), gcnew String(entry.note.c_str()),
						gcnew String(entry.category.c_str()), gcnew String(entry.homePhone.c_str()),
						gcnew String(entry.workPhone.c_str()), gcnew String(entry.mobilePhone.c_str()),
						gcnew String(entry.email.c_str()), gcnew String(entry.address.c_str()),
						gcnew String(entry.city.c_str()), entry.favorite);
	}

	return true;
}

bool saveDataToFile(vector<Entry> entries, string path) {
	ofstream file;
	Entry entry;

	file.open(path, ios::ate);

	if (!file.is_open())
		return false;

	for (auto i = entries.begin(); i != entries.end(); ++i) {
		entry = *i;

		file << "{" << endl;
		file << entry.fullName << endl;
		file << entry.note << endl;
		file << entry.category << endl;
		file << entry.homePhone << endl;
		file << entry.workPhone << endl;
		file << entry.mobilePhone << endl;
		file << entry.email << endl;
		file << entry.address << endl;
		file << entry.city << endl;

		if (entry.favorite == true)
			file << "True" << endl;
		else
			file << "False" << endl;

		file << "}" << endl;
	}

	file.close();

	return true;
}

bool saveDataToFile(vector<Entry> entries) {
	return saveDataToFile(entries, DEFAULT_PATH);
}

vector<Entry> getDataFromFile(string path) {
	fstream file;
	string line;
	vector<Entry> entries;
	Entry entry;

	file.open(path);

	while (getline(file, line)) {
		if (line == "{") {
			getline(file, line);
			entry.fullName = line;

			getline(file, line);
			entry.note = line;

			getline(file, line);
			entry.category = line;

			getline(file, line);
			entry.homePhone = line;

			getline(file, line);
			entry.workPhone = line;

			getline(file, line);
			entry.mobilePhone = line;

			getline(file, line);
			entry.email = line;

			getline(file, line);
			entry.address = line;

			getline(file, line);
			entry.city = line;

			getline(file, line);

			if (line == "True")
				entry.favorite = true;
			else
				entry.favorite = false;

			getline(file, line);

			entries.push_back(entry);
		}
	}

	file.close();

	return entries;
}

vector<Entry> getDataFromFile() {
	return getDataFromFile(DEFAULT_PATH);
}
