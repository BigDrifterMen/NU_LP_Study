/*
AMOUNT OF POSITIVE NUMBERS BETWEEN MIN AND MAX ELEMENTS IN ARRAY

Task. 
Print amount of positive numbers, which located between min and max elements in array.

Example :
Input :
1 2 8 0 -4 2 5 9 0 -3 20
Output :
3

*/


#include "functions.h"

void main()
{
	int n;
	cout << "Enter number of numbers: ";
	cin >> n;

	//first init
	cout << "Enter numbers: \n";
	int *A = new int[n];
	for (int i = 0; i < n; cin >> A[i++] );
	
	//finding min and max elements in array
	int Min, Max;
	minMaxFinding(A,n,Min,Max);
	
	//printing result of prog
	cout << "Positive numbers behide maximum and minimum elem: " << result(A, Min, Max) << endl;
}