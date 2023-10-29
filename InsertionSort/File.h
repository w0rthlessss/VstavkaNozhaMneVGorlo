#pragma once
#include <fstream>
#include "InputMethods.h"
#include <vector>
#include <io.h>
#include <cerrno>
#include <filesystem>

class File {
protected:
	fstream file;
public:
	File();
	virtual ~File();
	char SaveResults(string message);
	virtual void OpenFile() = 0;
};
