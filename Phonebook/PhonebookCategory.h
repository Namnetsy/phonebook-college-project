#pragma once

#include <fstream>
#include <string>

using namespace std;
using namespace System::Windows::Forms;

const string DEFAULT_PATH = "Phonebook_categories.txt";

struct Category {
	int id;
	string name;
};

Category* getDataFromFile(string path);

void saveDataToFile(Category* categories, string path);

Category* convertGridToEntries(DataGridView^ grid);

DataGridView convertEntriesToGrid(Category* categories);
