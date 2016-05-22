#include "functions.h"

const int INT_TO_START = 2;

void printList(CELL* ptrHead)
{
	while (ptrHead)
	{
		cout << ptrHead->data << ' ';
		ptrHead = ptrHead->ptr;
	}
}

void deleteList(CELL* ptrHead)
{
	CELL*ptrHelp = ptrHead;

	while (ptrHead->ptr != NULL)
	{
		ptrHelp = ptrHead->ptr;
		ptrHead->ptr = NULL;
		delete ptrHead;
		ptrHead = ptrHelp;
	}
}

CELL* formPrimaryList(int n)
{
	CELL* ptrHead = new CELL;
	ptrHead->data = INT_TO_START;
	ptrHead->ptr = 0;

	CELL*ptrHelp = ptrHead, *ptrLast = ptrHead;

	for (int k = INT_TO_START; k++ < n; ptrLast->ptr = ptrHelp, ptrLast = ptrHelp)
	{
		if (k % 2)
		{
			ptrHelp = new CELL;
			ptrHelp->data = k;
			ptrHelp->ptr = 0;
		}
	}

	ptrHelp->ptr = 0;

	return ptrHead;
}

void removeCell(CELL*& ptrToDelete, CELL* ptrHead)
{
	CELL* ptrLastBeforeTarget = ptrHead;
	for (; ptrLastBeforeTarget->ptr != ptrToDelete; ptrLastBeforeTarget = ptrLastBeforeTarget->ptr);
	ptrLastBeforeTarget->ptr = ptrToDelete->ptr;
	ptrToDelete->ptr = 0;
	delete ptrToDelete;
	ptrToDelete = ptrLastBeforeTarget;

}

void applyEratosphenesSieve(CELL* ptrHead, int n)
{
	CELL* ptrHelp = ptrHead, *ptrTemp = ptrHead;

	for (int primeNumber = ptrHelp->data; ptrHelp&&pow(primeNumber, 2) < n; ptrHelp = ptrHelp->ptr, primeNumber = ptrHelp->data)
	{
		for (ptrTemp = ptrHelp->ptr; ptrTemp; ptrTemp = ptrTemp->ptr)
		{
			if (!(ptrTemp->data % primeNumber))
			{
				removeCell(ptrTemp, ptrHead);
			}
		}
	}
}