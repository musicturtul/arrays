//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << "Array of integers" << endl;
	cout << "-----------------" << endl;
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	double numbers[4] = {3.4, 2.1, 5.2, 7.6};

	cout << endl << "Array of doubles" << endl;
	cout << "-----------------" << endl;
	cout << numbers[2] << endl;

	 for (int i = 0; i < 4; i++) {
		 cout << numbers[i] << endl;
	 }
// if you don't put anything in the brackets it will initialize at 0
	 cout << endl << "Initializing with zero value" << endl;
	 cout << "----------------------------" << endl;

	 int numberArray[8] = {};
	 for (int i = 0; i < 8; i++) {
		 cout << "Element at index " << i << ": " << numberArray[i] << endl;
	 }
	return 0;
}
