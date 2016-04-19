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

	// result
	cout << "Number in " << num_sys << " system: ";
	numberTransformation(num, num_sys);
	cout << endl;

}