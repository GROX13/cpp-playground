#include <iostream>
using namespace std;

// main() is where program execution begins.

enum color { red, green, blue=9 };

int main()
{
   cout << "Hello World" << endl; // prints Hello World

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   color first = red;
   color second = green;
   color fird = blue;

   cout << "Red: " << first << endl;
   cout << "Green: " << second << endl;
   cout << "Blue: " << fird << endl;

   return 0;
}
