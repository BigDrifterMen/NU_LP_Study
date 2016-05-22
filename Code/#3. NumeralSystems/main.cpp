/*
NUMERAL SYSTEMS

Task:
Create program which will transorm numbers from decimal nureal system to other (from 2 to 36 {36 = 26letters + 10num})

Student: 
Svyatoslav Vilkovych

Example:
(10) -> (32)
155  -> 4R
*/

#include "func.h"

void main()
{
	long int num;
	int num_sys;

	// input data
	cout << "Write number: ";
	cin >> num;
	cout << "Choose numeral system (from 2 to 36): ";
	cin >> num_sys;

	// Cheching for validate data
	while ((num < 0) || ((num_sys>36) || (num_sys < 2)))
	{
		cout << "Incorrect data. Our program working only for numbers more than 1, and transform into system from 2 to 36.\n";
		cout << "Please try again";

		cout << "Write number: ";
		cin >> num;
		cout << "Choose numeral system (from 2 to 36): ";
		cin >> num_sys;
	}

	// result
	cout << "Number in " << num_sys << " system: ";
	numberTransformation(num, num_sys);
	cout << endl;

}