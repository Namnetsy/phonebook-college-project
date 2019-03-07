#include <fstream>

#include "PhoneBookEntry.h"
#include "Helper.h"

using namespace System;
using namespace std;

namespace PhonebookEntry {
	vector<Entry> gridToEntries(DataGridView^ grid) {
		vector<Entry> entries;
		Entry entry;

		for (int i = 0; i < (grid->RowCount - 1); i++) { // iterate by whole datagrid except for last row because it's not contain any data
			entry.fullName = Helper::toString(grid->Rows[i]->Cells[0]->Value->ToString());
			entry.note = Helper::toString(grid->Rows[i]->Cells[1]->Value->ToString());
			entry.workPhone = Helper::toString(grid->Rows[i]->Cells[2]->Value->ToString());
			entry.homePhone= Helper::toString(grid->Rows[i]->Cells[3]->Value->ToString());
			entry.mobilePhone = Helper::toString(grid->Rows[i]->Cells[4]->Value->ToString());
			entry.email = Helper::toString(grid->Rows[i]->Cells[5]->Value->ToString());
			entry.address = Helper::toString(grid->Rows[i]->Cells[6]->Value->ToString());
			entry.city = Helper::toString(grid->Rows[i]->Cells[7]->Value->ToString());

			entries.push_back(entry);
		}

		return entries;
	}

	bool addEntriesToGrid(vector<Entry> entries, DataGridView^ grid) {
		if (entries.size() == 0)
			return false;

		Entry entry;

		for (auto i = entries.begin(); i != entries.end(); ++i) {
			entry = *i;

			grid->Rows->Add(gcnew String(entry.fullName.c_str()), gcnew String(entry.note.c_str()),
							gcnew String(entry.homePhone.c_str()), gcnew String(entry.workPhone.c_str()),
							gcnew String(entry.mobilePhone.c_str()), gcnew String(entry.email.c_str()),
							gcnew String(entry.address.c_str()), gcnew String(entry.city.c_str()));
		}

		return true;
	}

	bool saveEntries(vector<Entry> entries, string path) {
		ofstream storedData(path, ios::out | ios::binary);
		Entry entry;
		int len = entries.size();

		if (!storedData.is_open() || len == 0)
			return false;

		// Store count of entries in a file
		storedData.write(reinterpret_cast<char*>(&len), sizeof(int));

		for (auto i = entries.begin(); i != entries.end(); ++i) {
			entry = *i;

			storedData.write(entry.fullName.c_str(), entry.fullName.size());
			storedData.write("\0", sizeof(char)); // For easily detecting end of a string

			storedData.write(entry.note.c_str(), entry.note.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.homePhone.c_str(), entry.homePhone.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.workPhone.c_str(), entry.workPhone.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.mobilePhone.c_str(), entry.mobilePhone.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.email.c_str(), entry.email.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.address.c_str(), entry.address.size());
			storedData.write("\0", sizeof(char));

			storedData.write(entry.city.c_str(), entry.city.size());
			storedData.write("\0", sizeof(char));
		}

		storedData.close();

		return true;
	}

	bool saveEntries(vector<Entry> entries) {
		return saveEntries(entries, DEFAULT_PATH);
	}

	vector<Entry> getEntries(string path) {
		vector<Entry> entries;
		Entry entry;
		ifstream storedData(path, ios::binary);
		int entriesCount;

		storedData.read((char*)&entriesCount, sizeof(entriesCount));

		for (int i = 0; i < entriesCount; i++) {
			getline(storedData, entry.fullName, '\0');
			getline(storedData, entry.note, '\0');
			getline(storedData, entry.homePhone, '\0');
			getline(storedData, entry.workPhone, '\0');
			getline(storedData, entry.mobilePhone, '\0');
			getline(storedData, entry.email, '\0');
			getline(storedData, entry.address, '\0');
			getline(storedData, entry.city, '\0');

			entries.push_back(entry);
		}

		storedData.close();

		return entries;
	}

	vector<Entry> getEntries() {
		return getEntries(DEFAULT_PATH);
	}

	bool isDataExists(string path) {
		ifstream storedData(path, ios::binary);
		bool isExists = storedData.is_open();
		storedData.close();

		return isExists;
	}

	bool isDataExists() {
		return isDataExists(DEFAULT_PATH);
	}

	bool removeData(string path) {
		if (!isDataExists())
			return false;

		std::remove(path.c_str());
		return true;
	}

	bool removeData() {
		return removeData(DEFAULT_PATH);
	}

	bool search(DataGridView^ dg, System::String^ str) {
		auto keywords = str->Split(' ');

		for (int keywordIndex = 0; keywordIndex < keywords->Length; keywordIndex++) {
			for (int rowIndex = 0; rowIndex < dg->Rows->Count - 1; rowIndex++) {
				for (int cellIndex = 0; cellIndex < dg->Rows[rowIndex]->Cells->Count; cellIndex++) {
					String^ str = dg->Rows[rowIndex]->Cells[cellIndex]->Value->ToString()->ToLower();

					if (str->Contains(keywords[keywordIndex]->ToLower())) {
						dg->Rows[rowIndex]->Cells[cellIndex]->Style->BackColor = System::Drawing::Color::DarkCyan;
						dg->Rows[rowIndex]->Cells[cellIndex]->Style->ForeColor = System::Drawing::Color::White;
					}
				}
			}
		}

		return true;
	}

	bool isValidate(DataGridView^ dataGrid) {
		for (int rowIndex = 0; rowIndex < dataGrid->Rows->Count - 1; rowIndex++) {
			for (int cellIndex = 0; cellIndex < dataGrid->Rows[rowIndex]->Cells->Count; cellIndex++) {
				if (!dataGrid->Rows[rowIndex]->Cells[cellIndex]->Value) {
					return false;
				}
			}
		}

		return true;
	}
}
