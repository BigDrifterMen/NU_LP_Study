/*
IS STRING PALINDROME?


EXAMPLE :
abc cba = true

abcdaca = fasle

p.s. I know that I also should create ~STING(), but i am so exausted


*/


#include "STRING.h"

void main()
{
	STRING str;
	str.enterStr();
	str.delSpace();
	cout << "Is your string palindorme? " << str.isPalindrome() << endl;

}