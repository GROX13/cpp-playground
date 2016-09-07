#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iostream>
#include "commons.h"

using namespace std;

class Utils
{
	public :
    	static void printInline(const string str);

		static void printArray(const Array elements);

		static void printNewLine();
};

class SwitchUtils
{
	public:
		static void switchElements(int* elements, const int first, const int second);
};
 
#endif