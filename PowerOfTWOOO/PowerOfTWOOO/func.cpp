#include "func.h"
// stack realization
struct POW {
	int a;
	POW * addr;
	POW() { a = 0; };
} *P1, *P2, *P3, *P4, *P5;

void expon(POW *(&P5), POW *(&P2), POW *(&P3), POW *(&P4))
{
	P4->a *= 2;
	if (P4->addr)
	{
		expon(P5->addr, P2, P3, P4->addr);
	}
	if ((P5->a) > 9)
	{
		if (P5->addr == 0)
		{
			P3 = new POW;
			P5->addr = P3;
			P5->a %= 10;
			++P3->a;
			P3->addr = 0;
			P2 = P3;
		}
		else
		{
			P5->a %= 10;
			++(P5->addr->a);
		}
	}

}
void output(POW *(&P1), POW *(&P2), POW *(&P3))
{
	cout << "Your number is :" << endl;
	while (P1->addr != 0)
	{
		P3 = P1;
		while ((P3->addr) != P2)
			P3 = P3->addr;
		cout << P2->a;
		delete P2;
		P2 = P3; P3->addr = 0;
	}
	cout << P1->a << endl;
	delete P1;
}
inline void firstInitialization(POW *(&P1), POW *(&P2), POW *(&P3))
{
	P3 = new POW;
	P3->a = 1;
	P3->addr = 0;
	P1 = P2 = P3;
}
void stacks(int &n)
{
	firstInitialization(P1, P2, P3);

	while (n)
	{
		P4 = P5 = P1;
		expon(P5, P2, P3, P4);
		--n;
	}

	output(P1, P2, P3);
}

// array realization
int arr[n];
int step(int i, int var)
{
	if (var)
	{
		if (arr[i] > 9)
		{
			arr[i - 1]++;
			arr[i] %= 10;
			return step(i - 1, var);
		}
		else return step(i - 1, var - 1);
		--var;
	}
	else return 0;
}
void arrays(int pow)
{
	arr[n - 1] = 1;
	int var;
	for (int i = n - 1; pow; )
	{
		int j = i;
		while (j)
		{
			arr[j] *= 2;
			if (arr[j])
				var = j;
			--j;

		}
		step(i, var);
		--pow;
	}
}
void output()
{
	int pr = 1;
	for (int i = 0; i < n; ++i)
	{
		if (pr)
			cout << arr[i];
	}
	cout << "\n";
}