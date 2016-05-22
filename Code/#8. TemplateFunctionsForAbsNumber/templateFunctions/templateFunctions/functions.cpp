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

}
template <class T> double linEquat(T a, T b)
{
	return (-b / a);
}

// square equation
inline void sqrEquat()
{

}
template <class T> double sqrEquat(T a, T b, T c, double &X0, double &X1)
{

}

// arithmetic mean of array
inline void aritMeanOfArray()
{

}
template <class T> double aritMeanOfArray(T *A[], const int &m, const int &n)
{

}

// matrix multiplication
inline void matrMult()
{

}
template <class T> T matrMult(T *A[], T *B[], const int &m, const int &n)
{

}