#include <iostream>
#include "quick_sort.h"

using namespace std;

int main()
{
   QuickSort sort;
   int elems[5] = {1, 4, 6, 7, 3};

   Array elements;

   elements.size = 5;
   elements.elements = elems;

   elements = sort.sort(elements);

   for (int i = 0; i < elements.size; i++)
      cout << elements.elements[i] << "; ";
   cout << endl;
   
   return 0;
}
