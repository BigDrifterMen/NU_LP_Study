#pragma once
#include <iostream>
using namespace std;

// absolute value
void absValue();
template <class T> T absValue( T );

// linear equation
inline void linEquat();
template <class T> double linEquat( T a, T b);

// square equation
inline void sqrEquat();
template <class T> double sqrEquat( T a, T b, T c, double &X0, double &X1 );

// arithmetic mean of array
inline void aritMeanOfArray();
template <class T> double aritMeanOfArray( T *A[], const int &m, const int &n );

// matrix multiplication
inline void matrMult();
template <class T> T matrMult( T *A[], T *B[], const int &m, const int &n );



