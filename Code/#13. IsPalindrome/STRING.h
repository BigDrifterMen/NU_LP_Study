#pragma once

#include <iostream>
using namespace std;


const int SIZE = 100;

class STRING {
	char str[SIZE] = { 0 };
	int length = 0;
public:
	STRING(char *s = "\0");
	// help to not violate array border. Safe array.
	char &operator[](int i);
	// write your string to str[SIZE]
	void enterStr() { cout << "Enter you string: ";  cin.getline(str, SIZE - 10); }
	// determine length of str
	void strlen() { length = 0; for (int i = 0; i < SIZE - 1 && str[i] != 0; ++i, length++); };
	// delete ' ' symbols
	void delSpace();
	// if it is palindrome return true, else false
	bool isPalindrome();
	// Display string
	void printStr(int fromElem = 0, int toElem = SIZE);
};

