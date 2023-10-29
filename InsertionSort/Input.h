#pragma once
#include "File.h"
class Input : public File
{
public:
	virtual ~Input();
	virtual void OpenFile() override;
	void RandomInput(vector<int>& array);
	bool FileInput(vector<int>& array);
	void ConsoleInput(vector <int>& array);
	const void PrintCurrentArray(vector<int>& array);

};

