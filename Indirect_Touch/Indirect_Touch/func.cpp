#include "func.h"

void sorting(int *A[], int n)
{
	//Choosing sort
	int PR = 1;

	for (int i = 0; i < n - 1; ++i)
	{
		if (!PR)
			return;
		PR = 0;
		for (int j = i; j < n; ++j)
			if (*A[j] <*A[i])
			{
				PR = 1;
				int *swap = A[j];
				A[j] = A[i];
				A[i] = swap;
			}
	}
}
void creatingAndInitArray(int *A[], int *B[], int &n, int &m)
{
	for (int i = 0; i < n; ++i) {
		B[i] = new int[m];
		A[i] = &B[i][0];
		for (int j = 0; j < m; ++j) // ініціалізація масиву
			B[i][j] = rand() % 10;
	}
}
void arrayOutput(int *B[], int &n, int &m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cout << B[i][j] << ' ';
		cout << "\n";
	}
}
void sumRow(int *A[], int C[], int &n, int &m)
{
	for (int i = 0; i < n;)
	{
		C[i] = 0;
		for (int j = 0; j < m; ++j)
			C[i] += *(A[i]++);
		A[i] = &C[i];
		i++;

	}
}