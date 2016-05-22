#include "func.h"
#include <iostream>

template <typename T> void findRoot(T a, T b, T c, T &x1, T &x2)
{
	T prom = sqrt(b*b - 4 * a*c);
	x1 = (-b + prom) / (2 * a);
	x2 = (-b + prom) / (2 * a);
}

template <typename T> void findRoot(T a, T b, T &x1)
{
	x1 = -b / a;
}