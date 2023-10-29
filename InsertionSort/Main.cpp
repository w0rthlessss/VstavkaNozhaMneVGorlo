#include "Input.h"
#include "Output.h"
#include "InsertionSort.h"

void Creators() {
	cout << "Laboratory work #2 : Insertion sort\n" <<
		"Made by:\nEfremov Ivan\nRunina Anastasia\nShaimardanova Sofia\n" <<
		"Group #423\n\n";
}

void InputMenuOptions() {
	cout << "[1] - Console Input\n[2] - File Input\n" <<
		"[3] - Random Input\n[4] - Exit\n\n";
}


int main() {

	int menuOption{};
	bool isCorrect{};
	Input fillArray{};
	Output writeArray{};
	InsertionSort sortArray{};
	vector<int> array;

	do {
		Creators();
		InputMenuOptions();

		menuOption = GetInt("Select menu option\n\n>>");

		switch (menuOption)
		{
		case InputMenu::consoleInput:

			fillArray.ConsoleInput(array);
			if (fillArray.SaveResults("Do you want to save current array in the file? ") == 'y')
				writeArray.WriteArrayInFile(array);
			break;

		case InputMenu::fileInput:
			do {
				isCorrect = fillArray.FileInput(array);
			} while (!isCorrect);
			break;
		case InputMenu::randomInput:
			fillArray.RandomInput(array);
			if (fillArray.SaveResults("Do you want to save current array in the file? ") == 'y')
				writeArray.WriteArrayInFile(array);
			break;
		case InputMenu::exitApp:
			cout << "Programm finished it's work!\n";
			exit(EXIT_SUCCESS);
		default:
			cout << "Incorrect option!\n";
			break;
		}

		sortArray.Sort(array);

		cout << "\nArray was successfully sorted!\n";
		fillArray.PrintCurrentArray(array);
		cout << "Total comparisons: " << sortArray.GetComparisons() << '\n'
			<< "Total permutations: " << sortArray.GetPermutations() << "\n\n";

		if (writeArray.SaveResults("Do you want to write sorted array in the file? ") == 'y') {
			writeArray.WriteArrayInFile(array);
			cout << "Sorted array was successfully written in the file!\n\n";
		}


		array.clear();

	} while (menuOption != InputMenu::exitApp);

	return EXIT_SUCCESS;
}