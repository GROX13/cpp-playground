#include <iostream>
#include "utils.h"
#include "quick_sort.h"

using namespace std;

int main()
{
   QuickSort quickSort;

   int elems[5] = {1, 4, 6, 7, 3};

   Array elements;

   elements.size = 5;
   elements.elements = elems;

   Utils::printInline("QuickSort: ");
   Utils::printArray(quickSort.sort(elements));
   
   return 0;
}
