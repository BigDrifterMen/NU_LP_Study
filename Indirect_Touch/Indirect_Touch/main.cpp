#include "func.h"

void main() {

	int m, n;
	cout << "Input number of rows:   ";
	cin >> n;
	cout << "Input number of column: ";
	cin >> m;

	int **A = new int *[n]; // Array of pointer
	int **B = new int *[n];	// two-dimesional array of numbers

	// Array creating
	creatingAndInitArray(A, B, n, m);

	// output array
	cout << "Array :\n";
	arrayOutput(B, n, m);
	
	// suming rows
	int *C = new int[n];
	sumRow(A, C, n, m);

	// sorting array with array of pointer
	sorting(A,n);

	// output pointers
	cout << "Sorted sum of rows by the increasing :\n";
	for (int i = 0; i < n; ++i )
	{ 
		cout << *A[i] << "\n";
	}

	// clearing memory (ALWAYS DO IT! Did you hear me, man?)
	delete [] C;
	delete [] B;
	delete [] A;
}