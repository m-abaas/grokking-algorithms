#include <iostream>
#include <vector>
#include "recursive_sum.h"

using namespace std; 

int dc_sum(vector<int> vect)
{
	if (vect.size() == 0)
		return 0;
	else if (vect.size() == 1)
		return vect[0];
	else
	{
		int sum = vect[vect.size() - 1];
		vect.pop_back();
		return sum + dc_sum(vect);
	}
}


int recur_sum_main()
{
	vector<int> vect;
	// Empty vector
	cout << "The summation of element is: " << dc_sum(vect) << endl;
	// Vector with one element
	vect = {1};
	cout << "The summation of element is: " << dc_sum(vect) << endl;
	// Vector with multiple elements
	// Adding elements
	vect.clear();
	vect = { 1, 2, 3, 4, 5, 6 };
	cout << "The summation of element is: " << dc_sum(vect) << endl;

	return 0;
}