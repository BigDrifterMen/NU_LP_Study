#pragma once
#include <iostream>
using namespace std;

// absolute value
void absValue();
template <class T> T absValue(T);

// linear equation
inline void linEquat();
template <class T1, class T2> double linEquat(T1 a, T2 b);

// square equation
inline void sqrEquat();
template <class T1, class T2, class T3> void sqrEquat(T1 a, T2 b, T3 c, double &X0, double &X1);

// arithmetic mean of array
inline void aritMeanOfArray();
template <class T> double aritMeanOfArray(T A[], const int &n);

// matrix multiplication
inline void matrMult();
template <class T> T matrMult(T *A[], T *B[], const int &n, const int &m);



#pragma once
