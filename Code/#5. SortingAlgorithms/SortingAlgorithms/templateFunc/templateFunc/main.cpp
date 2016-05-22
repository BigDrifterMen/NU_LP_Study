#include "func.h"
#include <iostream>
using namespace std;

void main()
{
	double a, b, c, x1, x2;
	int choose;
	while (1) {
		
		cout << "\nChoose type of rivnyanya : " << endl;
		cout << "ax+b=0 (0), ax^2+bx+c=0 (1) or (2) to exit: ";
		cin >> choose;
		switch (choose)
		{
		case 0:
			cout << "Write cof: " << endl;
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			findRoot(a, b, x1);
			cout << "Root: " << x1 << endl;
			break;
		case 1:
			cout << "Write cof: " << endl;
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "c = ";
			cin >> c;
			findRoot(a, b, c, x1, x2);
			cout << "Roots: " << x1 << " " << x2 << endl;
			break;
		case 2:
			return;
		}
	}
	

}