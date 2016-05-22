/*
TEMPLATE FUNCTIONS.



*/

#include "functions.h"

void main()
{
	cout << "Nice to meet you. This is my program. Here you can :\n";
	cout << "1. Absolute value.\n";
	cout << "2. Find root linear equation.\n";
	cout << "3. Find root square equation. \n";
	cout << "4. Arithmetic mean of array. \n";
	cout << "5. Martix multiplication. \n";
	cout << "Choose needed program by writin respective number: ";
	int choose;
	cin >> choose;
	switch (choose)
	{
	case 1: absValue(); break;
	case 2: linEquat(); break;
	case 3: sqrEquat(); break;
	case 4: aritMeanOfArray(); break;
	case 5: matrMult(); break;
	default: 
		cout << "That's sad tha you choose nothing :("; break;
	}
}