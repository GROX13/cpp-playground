#include <iostream>
#include "utils.h"
#include "quick_sort.h"

using namespace std;

int main()
{
	QuickSort quickSort;

	int elems0[6] = {1, 4, 6, 7, 3, 6};

	Array elements;

	elements.size = 6;
	elements.elements = elems0;

	Utils::printInline("QuickSort: ");
	Utils::printArray(quickSort.sort(elements));

	int elems1[17] = {1, 4, 6, 7, 3, 14, 38, 24, 90, 200, 11, 7, 9, 9, 4, 66, 27};

	elements.size = 17;
	elements.elements = elems1;

	Utils::printInline("QuickSort: ");
	Utils::printArray(quickSort.sort(elements));

	return 0;
}
