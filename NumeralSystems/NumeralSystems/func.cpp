#include "func.h"

void numberTransformation(int num, int &num_sys)
{
	if (num >= num_sys)
	{
		numberTransformation(num / num_sys, num_sys);
	}
	int koef = num%num_sys;
	if (koef > 9)
		cout << (char)(55 + koef); // typing words.
	else
		cout << koef;
}