//============================================================================
// Name        : Variables.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Total number of animal: " << numberCats + numberDogs << endl;

	cout << "Nem dog acquired" << endl;

	numberDogs = numberDogs + 1;

	cout << "New number os dogs: " << numberDogs << endl;

	return 0;
}
