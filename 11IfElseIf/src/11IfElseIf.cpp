//============================================================================
// Name        : 11IfElseIf.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "1.\tAdd a new number" << endl;
	cout << "2.\tDelete number" << endl;
	cout << "3.\tView number" << endl;
	cout << "4.\tSearch reccord" << endl;
	cout << "5.\tQuit" << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if(value == 1){
		cout << "Adding new record " << endl;
	}
	else if(value == 2){
		cout << "Deleting reccord..." << endl;
	}
	else if(value == 3){
		cout << "Viewing reccord..." << endl;
	}
	else if(value == 4){
		cout << "Searching reccord..." << endl;
	}
	else if(value == 5){
		cout << "Quitting..." << endl;
	}
	else{
		cout << "Invalid option" << endl;
	}

	return 0;
}
