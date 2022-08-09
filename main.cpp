#include <iostream>
#include "Sorting.h"

int main() {
	int ar[5]{ 12, 21, 3, 34, 10 };
	Sorting s;
	s.printArray(ar, 5);
	s.selectionSort(ar, 5);
	s.printArray(ar, 5);
	return 0;
}