//============================================================================
// Name        : IntegerTypes.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int value = 1231;
	cout << value << endl;

	cout << "Max value int: "<< INT_MAX << endl;
	cout << "Max value int: "<< INT_MIN << endl;
	cout << "Max unsigned int " << UINT_MAX << endl;

	long int lValue = 2147483647;
	cout << lValue << endl;

	short int sValue = 2134;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int)<< endl;
	cout << "Size of long int: " << sizeof(long int)<< endl;
	cout << "Size of short int: " << sizeof(short int)<< endl;

	return 0;
}
