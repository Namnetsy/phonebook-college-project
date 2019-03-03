#pragma once

#include <vector>
#include <string>

using namespace std;
using namespace System::Windows::Forms;

namespace PhonebookEntry {
	// Default path for storing phonebook's entries
	const string DEFAULT_PATH = "Phonebook_entries.pbe";

	// Represents an entry in the phonebook
	struct Entry {
		string fullName;
		string note;
		string homePhone;
		string workPhone;
		string mobilePhone;
		string email;
		string address;
		string city;
	};

	// Gets entries from a file
	// And also returns vector as a result of getiing entries
	vector<Entry> getEntries(string path);

	// The same as above but instead of custom path we will be used DEFAULT_PATH const
	vector<Entry> getEntries();

	// Just save entries from the vector to a file by the path
	// and returns bool as a result of saving operation
	bool saveEntries(vector<Entry> entries, string path);

	// Exactly the same as above but instead of path we will be used DEFAULT_PATH const
	bool saveEntries(vector<Entry> entries);

	// Gets entries from DataGridView and returns vector of entries as a result
	vector<Entry> gridToEntries(DataGridView^ grid);

	// Load entries to DataGridView without clearing it from a previous data
	bool addEntriesToGrid(vector<Entry> entries, DataGridView^ grid);

}
