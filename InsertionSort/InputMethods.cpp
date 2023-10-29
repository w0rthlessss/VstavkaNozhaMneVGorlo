#include "InputMethods.h"

void IgnoreLine()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int GetInt(string message)
{
	cout << message;
	int tmp = 0;
	while (true) {
		cin >> tmp;
		if (cin.fail()) {
			cin.clear();
			IgnoreLine();
			cout << "\nUse correct values!\n\n";
			cout << message;
		}
		else if (tmp <= 0) {
			cout << "\nValue must be >0\n\n";
			cin.clear();
			IgnoreLine();
			cout << message;
		}
		else {
			IgnoreLine();
			return tmp;
		}
	}
}

//double GetDouble(string message)
//{
//	cout << message;
//	double tmp = 0.0;
//	while (true) {
//		cin >> tmp;
//		if (cin.fail()) {
//			cin.clear();
//			IgnoreLine();
//			cout << "\nUse correct values!\n\n";
//			cout << message;
//			continue;
//		}
//		IgnoreLine();
//		return tmp;
//	}
//}

string GetLink(string message)
{
	string b = "";
	cout << message;
	cout << "Path must not contain cyrillic symbols!\n\n>>";
	getline(cin, b);
	return b;
}

char GetAnswer(string message)
{
	char tmp = '\n';
	cout << message;
	while (true) {
		cin >> tmp;
		if (tmp == '\n') {
			cout << "You must type y or n!\n\n";
			cout << message;
			cin.clear();
			IgnoreLine();
		}
		else if (getchar() != '\n') {
			cout << "Incorrect input! Type only y or n!\n\n";
			cout << message;
			cin.clear();
			IgnoreLine();
		}
		else return tmp;
	}
}

