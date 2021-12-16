#include <iostream>
#include <vector>
#include "recursive_max.h"

using namespace std;

int dc_max(vector<int> vect)
{
	if (vect.size() == 0)
	{
		cout << "Cannot select max value from empty sequence, the return is set to 0" << endl;
		return 0;
	}
	else if (vect.size() == 1)
		return vect[0];
	else if (vect[vect.size() - 1] > vect[0])
	{
		int temp = vect[0];
		vect[0] = vect[vect.size() - 1]; vect[vect.size() - 1] = temp;
	}
	vect.pop_back();
	return dc_max(vect);
}


int recur_max_main()
{
	vector<int> vect;
	// Empty vector
	cout << "The maximum number of the list is: " << dc_max(vect) << endl;
	// Vector with one element
	vect = { 1 };
	cout << "The maximum number of the list is: " << dc_max(vect) << endl;
	// Vector with one element
	vect.clear();
	vect = { -1 };
	cout << "The maximum number of the list is: " << dc_max(vect) << endl;
	// Vector with multiple elements
	// Adding elements
	vect.clear();
	vect = { 1, 2, 3, 4, 5, 6 };
	cout << "The maximum number of the list is: " << dc_max(vect) << endl;

	return 0;
}