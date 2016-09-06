// Quick Sort
#include "utils.h"
#include "quick_sort.h"

using namespace std;

void quicksort(const Array* elemnets, const int lo, const int hi);

int partition(const Array* elemnets, const int lo, const int hi);

Array QuickSort::sort(const Array elemnets) {
	quicksort(&elemnets, 0, elemnets.size - 1);
	return elemnets;
}


void quicksort(const Array* elemnets, const int lo, const int hi) {
	if (lo < hi) {
		const int p = partition(elemnets, lo, hi);
		quicksort(elemnets, lo, p - 1);
		quicksort(elemnets, p + 1, hi);
	}
}

int partition(const Array* elemnets, const int lo, const int hi) {
	int* A = elemnets->elements;
	const int pivot = A[hi];
	
	int i = lo;
	for (int j = lo; j < hi; j++) {
		if (A[j] <= pivot) {
			SwitchUtils::switchElements(A, i++, j);
		}
	}
	SwitchUtils::switchElements(A, i, hi);
	return i;
}

