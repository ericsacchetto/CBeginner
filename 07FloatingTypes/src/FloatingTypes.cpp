//============================================================================
// Name        : FloatingTypes.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 76.4;

	cout << "size of: " << sizeof(float) << endl;
	cout << "Value: " << setprecision(10) << fixed << fValue << endl;

	double dValue = 76.43245;
	cout << setprecision(4) << fixed << dValue << endl;

	//Comparing floating

	float value = 1.1;

	if(value < 1.1){
		cout << "Equals" << endl;
	}
	else {
		cout << "Not equal" << endl;
		cout << "Value = " << setprecision(10) << value << endl;
	}



	return 0;
}
