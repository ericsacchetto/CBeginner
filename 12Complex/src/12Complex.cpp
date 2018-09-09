//============================================================================
// Name        : 12Complex.cpp
// Author      : Eric Sacchetto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 *  == equality test
 *  != not equal
 *  < less than
 *  > greater than
 *  <= less than or equal to
 *  >= greater than or equal to
 */

int main() {

	int value1 = 7;
	int value2 = 4;

	if(value1 > 8){
		cout << "Condition 1: True" << endl;
	}
	else{
		cout << "Condition 1: False" << endl;
	}

	if(value1 == 7 && value2 < 3){
		cout << "Condition 2: True" << endl;
	}
	else{
		cout << "Condition 2: False" << endl;
	}

	if(value1 == 7 || value2 < 3){
		cout << "Condition 3: True" << endl;
	}
	else{
		cout << "Condition 3: False" << endl;
	}

	if(value2 != 8 && value1 == 10 || value1 < 10){
		cout << "Condition 4: True" << endl;
	}
	else{
		cout << "Condition 4: False" << endl;
	}

	// A better way to present the above code

	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = value1 <10;

	if(condition1 || condition2){
		cout << "Condition 5: True" << endl;
	}
	else{
		cout << "Condition 5 : False" << endl;
	}

	return 0;
}
