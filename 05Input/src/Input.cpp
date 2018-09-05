//============================================================================
// Name        : Input.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "Your name is realy " << input << "?" << endl;

	cout << "Enter your age: " << flush;
	int value;
	cin >> value;
	cout << value << "!? Are you REALY sure" << endl;

	return 0;
}
