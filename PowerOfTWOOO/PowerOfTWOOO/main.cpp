/*
POWEEEEER OF TWOOOO

Task:
Create program which will count 2^n for n>>1. (Use array)
p.s. I also add stack realization.

p.s.s. It stops working on ~4,000. Maybe because of recurtion. :C

p.s.s.s. It worked with much more powers (~20,000), but then *it was shoot in the knee*crossed* I decide "optimize" the code.

*/


#include "func.h"

void main()
{
	int n, choose;
	cout << "Enter the number of 2^n: ";
	cin >> n;

ENTER_AGAIN:
	cout << "Choose calculation method : (0) stack, (1) array: ";
	cin >> choose;
	switch (choose)
	{
	case 0: stacks(n);
		break;
	case 1: arrays(n);
		break;
	default: goto ENTER_AGAIN;
		break;
	}
}
//	cout << 16 % 10; // 6
//	cout << 16 / 10; // 1
