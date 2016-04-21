#pragma once
#include <iostream>
using namespace std;

// stack realization
struct POW;
void expon(POW *(&P5), POW *(&P2), POW *(&P3), POW *(&P4));
void output(POW *(&P1), POW *(&P2), POW *(&P3));
inline void firstInitialization(POW *(&P1), POW *(&P2), POW *(&P3));
void stacks(int &n);

//array realization
const int n = 4800;
extern int arr[n];


void arrays(int pow);
void output();
int step(int i, int var);

