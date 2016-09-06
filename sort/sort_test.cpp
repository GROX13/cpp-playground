#include <iostream>
#include "utils.h"
#include "heap_sort.h"
#include "quick_sort.h"
#include "counting_sort.h"

using namespace std;

int main()
{
	QuickSort quickSort;
	HeapSort heapSort;
	CountingSort countingSort;

	int elemsQuick0[6] = {1, 4, 6, 7, 3, 6};

	Array elements;

	elements.size = 6;
	elements.elements = elemsQuick0;

	Utils::printInline("QuickSort: ");
	Utils::printArray(quickSort.sort(elements));

	int elemsHeap0[6] = {1, 4, 6, 7, 3, 6};
	elements.elements = elemsHeap0;

	Utils::printInline("HeapSort: ");
	Utils::printArray(heapSort.sort(elements));

	int elemsCounting0[6] = {1, 4, 6, 7, 3, 6};
	elements.elements = elemsCounting0;

	Utils::printInline("CountingSort: ");
	Utils::printArray(countingSort.sort(elements));

	Utils::printNewLine();

	int elemsQuick1[17] = {1, 4, 6, 7, 3, 14, 38, 24, 90, 200, 11, 7, 9, 9, 4, 66, 27};

	elements.size = 17;
	elements.elements = elemsQuick1;

	Utils::printInline("QuickSort: ");
	Utils::printArray(quickSort.sort(elements));

	int elemsHeap1[17] = {1, 4, 6, 7, 3, 14, 38, 24, 90, 200, 11, 7, 9, 9, 4, 66, 27};
	elements.elements = elemsHeap1;

	Utils::printInline("HeapSort: ");
	Utils::printArray(heapSort.sort(elements));

	int elemsCounting1[17] = {1, 4, 6, 7, 3, 14, 38, 24, 90, 200, 11, 7, 9, 9, 4, 66, 27};
	elements.elements = elemsCounting1;

	Utils::printInline("CountingSort: ");
	Utils::printArray(countingSort.sort(elements));

	Utils::printNewLine();

	int elemsQuick2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	elements.size = 10;
	elements.elements = elemsQuick2;

	Utils::printInline("QuickSort: ");
	Utils::printArray(quickSort.sort(elements));

	int elemsHeap2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	elements.elements = elemsHeap2;

	Utils::printInline("HeapSort: ");
	Utils::printArray(heapSort.sort(elements));

	int elemsCounting2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	elements.elements = elemsCounting2;

	Utils::printInline("CountingSort: ");
	Utils::printArray(countingSort.sort(elements));

	return 0;
}
