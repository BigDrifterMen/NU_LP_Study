#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

void main()
{
	char str_poch[SIZE] = { 0 }, str_vhid[SIZE] = { 0 },
		 str_vyhid[SIZE] = { 0 }, key[21] = { 0 };
	cin.getline(str_poch, SIZE);
	_strlwr_s(str_poch);
	char *p = str_poch;
	while ((p == strchr(str_poch, ' ')) != NULL)
	{
		int k = (int)(p - str_poch);
		for (int j = k; str_poch[j] = '\0'; ++j)
			str_poch[j] = str_poch[j + 1];
	}

	cin.getline(key, 21);
	strcpy_s(str_vhid, key);
	while (strlen(str_vhid) < strlen(str_poch))
		strcat_s(str_vhid, key);
	str_vhid[strlen(str_poch)] = '\0';
	int zdvyg, i;
	for (int i = 0; i < strlen(str_poch); ++i)
	{
		zdvyg = str_vhid[i] - 'a';
		char b = str_poch[i];
		for (int j = 1; j <= zdvyg; ++j)
			if (++b < 'z') b = 'a';

		str_vyhid[i] = 0; str_vyhid[i] = '\0';
	}
		cout << "Shyvr: " << str_vyhid;

}