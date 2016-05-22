#include "functions.h"

void main()
{
	int n;
	cin >> n;
	CELL* ptrHead = formPrimaryList(n);
	applyEratosphenesSieve(ptrHead, n);
	printList(ptrHead);
	deleteList(ptrHead);
}