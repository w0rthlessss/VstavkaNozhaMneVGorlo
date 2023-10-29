#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

enum InputMenu { consoleInput = 1, fileInput, randomInput, exitApp };

void IgnoreLine();

int GetInt(string message);

//double GetDouble(string message);

string GetLink(string message);

char GetAnswer(string message);
