#include <iostream>

using namespace std; 

void verify_output(int input, int output)
{
	if (output < 0)
		cout << "No factorial for " << input << ", since the negative integers can't have a factorial" << endl;
	else
		cout << "Factorial for " << input << " is " << output << endl;
}

int fact(int x)
{
	if (x == 0 || x == 1)
		return 1;
	else if (x < 0)
	{ 
		return -1;
	}
	else
		return x * fact(x - 1);
}

int fact_main()
{
	int test_arr[5] = { 10, 0, 5, 1, -1000 };
	// int arr_size = sizeof(test_arr) / sizeof(*test_arr);
	int arr_size = size(test_arr); // C++ +17

	for (int i = 0; i < arr_size; i++)
	{
		verify_output(test_arr[i], fact(test_arr[i]));
	}

	//cout << "Factorial of '10': " << fact(10) << endl;
	//cout << "Factorial of '0': " << fact(0) << endl;
	//cout << "Factorial of '5': " << fact(5) << endl;
	// cout << "Factorial of '-1000': " << fact(-1000) << endl;

	return 0;
}