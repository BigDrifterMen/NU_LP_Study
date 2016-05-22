#include <iostream>
using namespace std;

const int SIZE = 100;

char sortByWords(char *str)
{
	char newStr[SIZE];
	char *start_str = str;
	while (str)
	{
		for (int i = 0; i < strlen(str); ++i)
		{
			if(start_str[i]=
		}
	}
}

void main()
{
	char str[SIZE];
	cin.getline(str, SIZE-1);

	sortByWords(str);

}