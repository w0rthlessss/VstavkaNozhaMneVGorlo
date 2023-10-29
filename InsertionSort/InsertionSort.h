#pragma once
#include <vector>
using namespace std;
class InsertionSort
{
private:
	int comparisons;
	int permutations;
public:
	InsertionSort();
	~InsertionSort() = default;
	void Sort(vector<int>& array);
	int GetPermutations();
	int GetComparisons();
	bool Compare(int first, int second);
	void Permutate(vector<int>& array, int posFirst, int posSecond);

};

