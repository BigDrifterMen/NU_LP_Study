#include "functions.h"

void minMaxFinding(int A[], const int &n, int &Min, int &Max)
{
	Min = Max = A[0];
	for (int i = 0; i < n; ++i)
	{
		if (A[i] < A[Min])
			Min = i;
		else if (A[i]>A[Max])
			Max = i;

	}
}
int result(int A[], const int &Min, const int &Max)
{
	int count = 0;
	// funny construction, isn't it?)
	for (int i = (Min < Max ? Min : Max); i < (Min < Max ? Max : Min) - 1; A[++i]>0 ? ++count : 0);
	return count;
}