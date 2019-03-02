#pragma once

#include <fstream>
#include <string>
#include <vector>

using namespace std;
using namespace System::Windows::Forms;

const string DEFAULT_PATH = "Phonebook_entries.txt";

struct Entry {
	string fullName;
	string note;
	string category;
	string homePhone;
	string workPhone;
	string mobilePhone;
	string email;
	string address;
	string city;
	bool favorite;
};

vector<Entry> getDataFromFile(string path);

vector<Entry> getDataFromFile();

bool saveDataToFile(vector<Entry> entries, string path);

bool saveDataToFile(vector<Entry> entries); // the same as above but without path

vector<Entry> convertGridToEntries(DataGridView^ grid);

bool addEntriesToGrid(vector<Entry> entries, DataGridView^ grid);
