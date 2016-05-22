#include "func.h"

template <class T> void swaping(T &ob1, T &ob2)
{
	T swap = ob1;
	ob1 = ob2;
	ob2 = swap;
}

void sorting(int *A[],int S[], int n)
{
	// A Ч pointers
	// S Ч sum of rows
	int PR = 1;

	for (int i = 0; i < n - 1; ++i)
	{
		if (!PR)
			return;
		PR = 0;
		for (int j = i; j < n; ++j)
			if (S[j] < S[i])
			{
				PR = 1;
				swaping(A[i], A[j]);
				swaping(S[i], S[j]);
			}
	}
}
void creatingAndInitArray(int *A[], int *B[], int &n, int &m)
{
	for (int i = 0; i < n; ++i) {
		B[i] = new int[m];
		A[i] = &B[i][0];
		for (int j = 0; j < m; ++j) // ≥н≥ц≥ал≥зац≥€ масиву
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
		i++;

	}
	for (int i = 0; i < n; ++i)
		A[i] -= m;
}