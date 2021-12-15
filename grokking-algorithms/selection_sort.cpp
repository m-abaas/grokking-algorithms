#include <iostream>
#include "selection_sort.h"

using namespace std;

void print_array(int* arr, int arr_size)
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int selection_sort(int* arr, int arr_size)
{
	for (int i=0; i < arr_size - 1; i++)
	{
		for (int j=i; j < arr_size; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[i], arr[j]);
			}
		}
	}

	return 0;
}


int selection_sort_main() {
	int arr[10] = { -1, 4, 6, 10, -3, 0, 2, 1000, -1000 };
	// int arr_size = (sizeof(arr) / sizeof(*arr));  // Older C++ (total size in bytes/size of the first element only)
	int const arr_size = size(arr); // C++ +17
	
	cout << "Unsorted Array:" << endl;
	print_array(arr, arr_size);

	selection_sort(arr, arr_size);
	cout << "Sorted Array:" << endl;
	print_array(arr, arr_size);

	return 0;
}
