#include <iostream>

using namespace std;

void binary_search(int search_array[5], int array_size, int search_num)
{

    int start = 0;
    int mid = 0;
    int end = array_size - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (search_array[mid] == search_num)
        {
            cout << "Number found position " << mid << " ..." << endl;
            return;
        }
        else if (search_array[mid] >= search_num) {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

    }

    cout << "Number Not found .." << endl;
    return;
}


int binary_search_main()
{
    int search_array[5] = { 112, 2621, 56843, 123456, 4567890 };
    //int array_size = (sizeof(search_array) / sizeof(*search_array)); // Older C++
    int array_size = size(search_array); // C++ +17
    int end = (sizeof(search_array) / sizeof(*search_array));

    binary_search(search_array, array_size, 112);
    binary_search(search_array, array_size, 1000000);
    binary_search(search_array, array_size, 56843);
    binary_search(search_array, array_size, 4567890);

    return 0;

}
