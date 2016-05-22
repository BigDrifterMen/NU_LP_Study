#include "functions.h"

int step(int i, int var)
{
	//continue our algorithm until make sense (:D). I don't know how named it.
	if (var)
	{
		if (arr[i] > 9)
		{
			++arr[i - 1];
			arr[i] %= 10;
			return step(i - 1, var);
		}
		else return step(i - 1, var - 1);
		--var;
	}
	else return 0;
}
void printNumber(double &duration)
{
	//go to first not-zero number
	int print = 0;
	while (arr[print] == 0)
		++print;

	//printing number
	for (int i = print; i < n; cout << arr[i++] << " ");
	cout << endl;
	cout << "Time: " << duration << endl;
}