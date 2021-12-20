#include <iostream>
#include <stdlib.h>
#include <vector>
#include "quick_sort.h"

using namespace std;


vector<int> qsort_arr(vector<int> vect)
{
	if (vect.size() <= 1) {
		return vect;
	}
	else {
		int pivot_index = rand() % vect.size();
		vector<int> less;
		vector<int> greater;
		vector<int> result;

		for (int i = 0; i < vect.size(); i++)
		{
			if (i == pivot_index) {
				continue;
			}
			else if (vect[i] <= vect[pivot_index]) {
				less.push_back(vect[i]);
			}
			else {
				greater.push_back(vect[i]);
			}
		}
		// Calling qsort on the lower part
		less = qsort_arr(less);
		result.insert(result.end(), less.begin(), less.end());
		// Adding pivot
		result.push_back(vect[pivot_index]);
		// Calling qsort on upper part
		greater = qsort_arr(greater);
		result.insert(result.end(), greater.begin(), greater.end());

		return result;
	}
}

int quick_sort_main()
{
	vector<vector<int>> vect;
	vector <int> sorted_vect;
	vect = {
		{1},
		{0, 1, -4, 500, 100000, -100000},
		{1000, 100, 0, 300, -400},
		{-300, -200, -10000, 0, -20000},
		{1, 1},
		{-1 , -1},
		{0, 0}
	};

	for (int j = 0; j < vect.size(); j++)
	{

		cout << "Unosrted Array:" << endl;
		for (int i = 0; i < vect[j].size(); i++)
			cout << vect[j][i] << " ";
		cout << endl;

		sorted_vect = qsort_arr(vect[j]);
		cout << "Sorted Array:" << endl;
		for (int i = 0; i < vect[j].size(); i++)
			cout << sorted_vect[i] << " ";

		cout << endl << "=====" << endl;
	}

	return 0;
}