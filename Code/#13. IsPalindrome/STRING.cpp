#include "STRING.h"


STRING::STRING(char *s)
{
	for (register int i = 0; i < SIZE && 0 != (*s); ++i)
	{
		str[i] = *s;
		s++;
	}
	strlen();
}
// if it is palindrome return true, else false
bool STRING::isPalindrome()
{
	int i = 0, j = length - 1;
	while (i < j)
	{
		if (str[i] != str[j])
			return false;
		++i;
		--j;
	}
	return true;

}

// delete ' ' symbols
void STRING::delSpace()
{
	char s[SIZE] = { 0 };
	for (register int i = 0, j = 0; i < SIZE - 1 && str[i] != 0; ++i)
	{
		if (str[i] != ' ')
		{
			s[j] = str[i];
			++j;
		}
	}
	for (register int i = 0; i < SIZE; ++i)
	{
		if (s[i] != 0)
			str[i] = s[i];
		else
			str[i] = '\0';
	}

	strlen();
}

// Display string
void STRING::printStr(int fromElem, int toElem)
{
	for (register int i = fromElem; i < toElem && 0 != str[i]; cout << str[i++]);
	cout << endl;
}

// help to not violate array border. Safe array.
char &STRING::operator[](int i)
{
	if (i<0 && i>SIZE - 1)
	{
		cout << "Error. " << i << " is more than str length.\n";
		exit(1);
	}
	return str[i];
}


