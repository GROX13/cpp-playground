#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include "commons.h"

class HeapSort
{
	public:
		Array sort(const Array elemnets);
		
	private:
		void heapify(const Array elemnets);

		void shiftDown(int* elemnets, const int start, const int end);
};

#endif