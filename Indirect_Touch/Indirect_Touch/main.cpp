/*
INDIRECT TOUCH

Task:
Create array of pointers and point them to row of new two-dimesional array with numbers.
By using pointers count sum of rows, and save new information in third array.
Also, by using pointers, sort rows of array.

Student:
Vilkovych Svyatoslav

*/

#include "func.h"

void main() {

	int m, n;
	cout << "Input number of rows:   ";
	cin >> n;
	cout << "Input number of column: ";
	cin >> m;

	int **pointersToRows = new int *[n]; // Array of pointer, which will point to row
	int **dataArray = new int *[n];	// two-dimesional array, which will contain our information

	// Array creating
	creatingAndInitArray(pointersToRows, dataArray, n, m);

	// output array
	cout << "Array :\n";
	arrayOutput(dataArray, n, m);
	
	// Array which sum of rows
	int *sumOfRows = new int[n];
	sumRow(pointersToRows, sumOfRows, n, m);

	// sorting array with array of pointer
	sorting(pointersToRows,n);

	// output pointers
	cout << "Sorted sum of rows by the increasing :\n";
	for (int i = 0; i < n; ++i )
	{ 
		cout << *pointersToRows[i] << "\n";
	}

	// clearing memory (ALWAYS DO IT! Did you hear me, man?)
	delete [] sumOfRows;
	delete [] dataArray;
	delete [] pointersToRows;
}