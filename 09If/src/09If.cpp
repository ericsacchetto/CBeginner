//============================================================================
// Name        : 09If.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	cout << "Enter your password > " << flush;

	string input;
	cin >> input;

	if(input == password){
		cout << "Password correct." << endl;
	}

	if(input != password){
		cout << "Password incorrect, try again." << endl;
	}
	return 0;
}
