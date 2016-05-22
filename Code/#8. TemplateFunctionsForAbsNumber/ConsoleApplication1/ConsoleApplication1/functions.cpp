#include "functions.h"

const int VALUE = 10;

void absValue()
{
	char num[VALUE] = { '\n' };
	int isDotCorrect = 0, isFDCorrect = 0, isCorrect = 1;
	int length;
	do {
		cout << "Enter value, please: ";
		cin >> num;
		for (int i = 0; i < VALUE; ++i)
		{
			if (num[i] < '0' && num[i]>'9' && 'L' != num[i] && 'F' != num[i] && '-' != num[i] && '.' != num[i] && ',' != num[i])
			{
				cout << "Unvalid data. Please try again.\n";
				isCorrect = 0;
				break;

			}
			if ('L' == num[i] || 'F' == num[i])
			{
				++isFDCorrect;
				if (isFDCorrect > 1)
				{
					cout << "Unvalid data. Please try again.\n";
					isFDCorrect = 0;
					isCorrect = 0;
					break;

				}
			}
			if ('.' == num[i] || ',' == num[i])
			{
				++isDotCorrect;
				if (isDotCorrect > 1)
				{
					cout << "Unvalid data. Please try again.\n";
					isDotCorrect = 0;
					isCorrect = 0;
					break;

				}
			}
			if (num[i] == '\0')
			{
				length = i + 1;
				break;
			}
		}

	} while (!isCorrect);

	char *value = new char[length];
	for (int i = 0; i < length; ++i)
	{
		value[i] = num[i];
	}

	bool isFloat, isLong;

	isFloat = isLong = 0;
	for (int i = 0; i < length; ++i)
	{
		if ('L' == num[i])
			isLong = true;
		if ('F' == num[i])
			isFloat = true;
	}

	if (isDotCorrect != 1)
		absValue(atoi(value));
	else if (isLong)
		absValue(atol(value));
	else absValue(atof(value));


	delete[]value;
}
template <class T> T absValue(T x)
{
	cout << (x < 0 ? -x : x);
	return x;
}

// linear equation
inline void linEquat()
{
	cout << "Equatation root: ";
	cout << "double and integer: " << endl;
	cout << linEquat(5.0, 5) << endl;
	cout << "double and long: " << endl;
	cout << linEquat(2, 5L) << endl;
	cout << "integer and float: " << endl;
	cout << linEquat(5, 3.0f) << endl;
	cout << "integer and integer: " << endl;
	cout << linEquat(-3, 5) << endl;

}
template <class T1,class T2> double linEquat(T1 a, T2 b)
{
	return (-b / a);
}

// square equation
inline void sqrEquat()
{
	double x1, x2;
	cout << "Equatation root: ";
	cout << "double and integer and float: " << endl;
	sqrEquat(5.0, 5, 5.3f,x1,x2);
	cout << "x1: " << x1 << ", x2: " << x2 << endl;
	cout << "double and long and double: " << endl;
	sqrEquat(2, 5L, 3.123, x1, x2);
	cout << "x1: " << x1 << ", x2: " << x2 << endl;
	cout << "double and float and double: " << endl;
	sqrEquat(5.0, 3.0f, 2.5, x1, x2);
	cout << "x1: " << x1 << ", x2: " << x2 << endl;
	cout << "integer and integer: " << endl;
	sqrEquat(-3, 5, 0, x1,x2);
	cout << "x1: " << x1 << ", x2: " << x2 << endl;
}
template <class T1, class T2, class T3> void sqrEquat(T1 a, T2 b, T3 c, double &x1, double &x2)
{
	double disc = b*b - 4 * a*c;
	if (disc < 0)
	{
		cout << "D<0. Square equation have zero roots. ";
		return;
	}
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

// arithmetic mean of array
inline void aritMeanOfArray()
{
	const int n = 20;
	int ARR[n];
	double A[n];

	for (int i = 0; i < n; ++i)
	{
		ARR[i] = rand() % 100;
		A[i] = rand() % 100;
	}

	for (int i = 0; i < n; cout << ARR[i++] << ' ');
	cout << endl;
	cout << "arithmetic mean of int array: " << aritMeanOfArray(ARR, n) << endl;
	for (int i = 0; i < n; cout << A[i++] << ' ');
	cout << endl;
	cout << "arithmetic mean of double array: " << aritMeanOfArray(A, n) << endl;
}
template <class T> double aritMeanOfArray(T A[], const int &n)
{
	double arit = 0;
	for (int i = 0; i < n; ++i)
	{
		arit += A[i];
	}
	return (arit / n);
}

// matrix multiplication
inline void matrMult()
{
	const int n = 10, m = 5;
	int Ai[n][m], Bi[m][n];
	double Ad[n][m], Bd[m][n];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			Ai[i][j] = rand() % 100;
			Ad[i][j] = rand() % 100;
		}
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			Bi[i][j] = rand() % 100;
			Bd[i][j] = rand() % 100;
		}

	matrMult(Ai, Bi, n, m);
	matrMult(Ad, Bd, n, m);
}
template <class T> T matrMult(T A[][], T B[][], const int &n, const int &m)
{

}