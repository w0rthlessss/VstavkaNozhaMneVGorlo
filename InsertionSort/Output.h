#pragma once
#include "File.h"
class Output : public File
{
public:
	virtual ~Output();
	virtual void OpenFile() override;
	const void WriteArrayInFile(vector<int>& array);
};

