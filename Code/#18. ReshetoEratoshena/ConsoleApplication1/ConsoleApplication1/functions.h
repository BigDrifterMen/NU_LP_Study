#pragma once

#pragma once
#include <iostream>
#include <math.h>

using namespace std;

struct CELL
{
	int data;
	CELL* ptr;
};

CELL* formPrimaryList(int);
void applyEratosphenesSieve(CELL*, int);
void printList(CELL*);
void deleteList(CELL*);
void removeCell(CELL*&, CELL*);
