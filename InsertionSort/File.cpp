#include "File.h"

File::File()
{
	this->file = fstream{};
}

File::~File()
{
	file.close();
}

char File::SaveResults(string message)
{
	cout << "\n" << message << " (y / n)\n\n";
	char res = 'n';
	do {
		res = GetAnswer(">>");
		if (res != 'y' && res != 'n') {
			cout << "Incorrect input. Type 'y' or 'n' only!\n\n";
		}
	} while (res != 'y' && res != 'n');

	return res;
}
