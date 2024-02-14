#include "DArray.h"

#include <iostream>

using namespace std;

int main()
{
	DArray a1; // empty array of capacity 50

	DArray a2(10);
	// fill up only half array
	for (int i = 0; i < 5; ++i)
		a2.addElement(i + 10);

	// get number of elements
	int numOfElemA2 = a2.getNumOfElements();

	// print array
	a2.printArray();

	// replace an element
	a2.replaceElementAt(999, 3);

	// print array
	a2.printArray();

	// compareArrays
	if (a1.compareArrays(a2))
		cout << "Arrays are equal.";
	else
		cout << "Arrays are not equal.";
	/*
	* Note that comparing arrays should have additional testing:
	* (1) arrays are the same
	* (2) arrays have all same numbers except one in the middle
	* (3) arrays have all same numbers except the first one
	* (4) arrays have all same numbers except the last one
	* (5) arrays have same numbers but different capacity
	*/

	cout << "\n";
	return 0;
}