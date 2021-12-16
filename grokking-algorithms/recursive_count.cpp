#include <iostream>
#include <vector>
#include "recursive_count.h"

using namespace std;

int dc_count(vector<int> vect)
{
	if (vect.size() == 0)
		return 0;
	else if (vect.size() == 1)
		return 1;
	else
	{ 
		vect.pop_back();
		return 1 + dc_count(vect);
	}
}


int recur_count_main()
{
	vector<int> vect;
	// Empty vector
	cout << "The elements count is: " << dc_count(vect) << endl;
	// Vector with one element
	vect = {1};
	cout << "The elements count is: " << dc_count(vect) << endl;
	// Vector with multiple elements
	// Adding elements
	vect.clear();
	vect = { 1, 2, 3, 4, 5, 6 };
	cout << "The elements count is: " << dc_count(vect) << endl;

	return 0;
}