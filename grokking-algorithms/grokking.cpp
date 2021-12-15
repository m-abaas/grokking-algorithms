#include <iostream>

#include "binary_search.h"
#include "selection_sort.h"

using namespace std;

int main(int argc, char* argv[]) {

	int solution_no;

	cout << "Enter the number of desired solution..." << endl;
	cin >> solution_no; 


	switch (solution_no)
	{
		case 0: 
			binary_search_main(); break;
		case 1:
			selection_sort_main(); break;
		default:
			cout << "Selected number is not among the support list. Aborting..." << endl;
			break;
	}
	
}
