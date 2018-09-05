//============================================================================
// Name        : 10IfElse.cpp
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

	int number = 0;
	if(value == 1){
		cout << "Choose number > " << flush;
		cin >> number;
		cout << "New number > " << number << endl;
	}

	if(value == 2){
		cout << "Number deleted." << endl;
		cout << "Number > " << number << endl;
	}

	if(value == 3){
		cout << "Number > " << number << endl;
	}

	if(value == 4){
		cout << "Option not available" << endl;
	}

	if(value == 5){
		cout << "Terminating program..." << endl;
	}

	if(value > 5){
		cout << "Invalid option" << endl;
	}

	return 0;
}
