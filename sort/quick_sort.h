#ifndef QUICK_SORT_H
#define QUICK_SORT_H

struct Array {
     int size;
     int* elements;
};

class QuickSort
{
     public :
          Array sort(const Array elemnets);
};
 
#endif