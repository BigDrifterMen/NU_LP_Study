/*
POWER OF TWO

Task:
Create program which will count 2^n for n>>1. (Use array)

p.s. It stop working on ~20,000 . I have a bug, but don't know how to fix it.
Also I add timer.

*/

#include "functions.h"

void main()
{
	//for time
	clock_t start;
	double duration;
	
	//first init.
	arr[n - 1] = 1;
	int pow, var;
	cout << "Write power of 2 number: ";
	cin >> pow;
	
	start = clock();
	while(pow)
	{
		int i = var = n - 1;
		int j = i;
		while (j&&arr[var]!=0)
		{
			arr[j] *= 2;
			if (arr[j]) // I guess I have bug here
				var = j;
			--j;
		}
		step(i, var);
		--pow;
	}
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;

	printNumber(duration);

}

