// Utils
#include "utils.h"

void Utils::printInline(const string str) {
	cout << str;
}

void Utils::printArray(const Array elements) {
	for (int i = 0; i < elements.size; i++)
		cout << elements.elements[i] << "; ";
	cout << endl;
}

void Utils::printNewLine() {
	cout << endl;
}

void SwitchUtils::switchElements(int* elements, const int first, const int second) {
	const int fisrtElement = elements[first];
	const int secondElement = elements[second];
	elements[first] = secondElement;
	elements[second] = fisrtElement;
}