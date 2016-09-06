// Heap Sort
#include "utils.h"
#include "heap_sort.h"

using namespace std;

Array HeapSort::sort(const Array elemnets) {
	heapify(elemnets);
	int end = elemnets.size - 1;
	while (end > 0) {
		SwitchUtils::switchElements(elemnets.elements, end, 0);
		end--;
		shiftDown(elemnets.elements, 0, end);
	}

	return elemnets;
}

void HeapSort::heapify(const Array elemnets) {
	int heapsize = elemnets.size - 1;
	for(int i = (elemnets.size / 2); i >= 0; i--) {
    	shiftDown(elemnets.elements, i, heapsize);
	}
}

void HeapSort::shiftDown(int* elemnets, const int start, const int end) {
	int left, right, largest, temp;
	left = 2 * start;
	right = 2 * start + 1;
	if (left <= end && elemnets[left] > elemnets[start]) {
    	largest = left;
	} else {
		largest = start;
  	}
  	if(right <= end && elemnets[right] > elemnets[largest]) {
    	largest = right;
	}
  	if(largest != start) {
    	temp = elemnets[start];
    	elemnets[start] = elemnets[largest];
    	elemnets[largest] = temp;
    	shiftDown(elemnets, largest, end);
  	}
}