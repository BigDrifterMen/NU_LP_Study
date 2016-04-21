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
