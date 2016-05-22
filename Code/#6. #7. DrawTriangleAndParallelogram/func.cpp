#include "func.h"

// MAIN MENU
int ChooseFigure()
{
	int chooseFigure;

	cout << "Choose triangle(0) or parallelogram(1) : ";
	cin >> chooseFigure;

	if (chooseFigure) // if you enter 2,3,...,n — program choose parallelogram
		return 1;
	else
		return 0;
}

// TRIANGLE
void drawTriangle()
{
	cout << "___TRIANGLE___\n";
	int h = 0;
	while (h <= 0)
	{
		cout << "Enter high of triangle : ";
		cin >> h;
	}

	char **Triangle = new char *[h];

	for (int i = 0; i < h; ++i)
	{	// drawing edges
		Triangle[i] = new char[2 * h - 1];
		Triangle[i][h - 1 + i] = '*';
		Triangle[i][h - 1 - i] = '*';

	}

	// drawing bottom side
	for (int i = 1; i < (2 * h - 1); Triangle[h - 1][i++] = '*');

	// and drawing triangle
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < (2 * h - 1); ++j)
			if (Triangle[i][j] == '*')
				cout << Triangle[i][j];
			else
				cout << " ";
		cout << "\n";
	}
	delete[] Triangle;
	
	// realization without array by my friend.

	/* |Misha's Code|
	int h, hh, f;
	cout<<"Enter the height\n";
	cin>> h;
	hh = h - 1;
	for (int i = 0; i < h; i++)
	{
	f = h - i;
	for (int j = 0; j <= h + i - 1; j++)
	{
	if (f == 1)
	cout<<"*";
	else {

	if ((j >= f - 1) && (j <= h + i - 1))
	cout<<"*";
	else
	cout<<" ";
	}
	}
	}
	*/
}

// PARALLELOGRAM
void drawParallelogram()
{
	int h, l;
	
	cout << "___Parallelogram___\n";
	cout << "Enter high of Parallelogram : ";
	cin >> h;
	cout << "Enter length of Parallelogram : ";
	cin >> l;

	/* checking for validation of data */
	while ((h <= 0) || (l <= 0)) 
	{
		cout << "Wrong numbers. Lenght and high should be greater than zero.\n Please try again. \n";
		cout << "Enter high of Parallelogram : ";
		cin >> h;
		cout << "Enter length of Parallelogram : ";
		cin >> l;
	}

	char **Parallelogram = new char *[h];
	for (int i = h - 1; i >= 0; --i)
	{
		Parallelogram[i] = new char[h - 1 + l];
		// creating right edge
		Parallelogram[i][h - 1 - i] = '*';
		if ((i == h - 1) || (i == 0))
		{
			int num = 0;
			while (num<(l - 1))
				// creating bottom and top edge
				Parallelogram[i][h - 1 - i + num++] = '*';
		}
		// creating left edge
		Parallelogram[i][h - 1 - i + l - 1] = '*';
	}

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < (l + h - 1); ++j)
			if (Parallelogram[i][j] == '*')
				cout << Parallelogram[i][j];
			else
				cout << " ";
		cout << "\n";
	}
	delete[] Parallelogram;
}