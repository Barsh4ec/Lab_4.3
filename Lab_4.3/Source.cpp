// Lab_04_3.cpp
// Борща Тараса Ігоровича
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметра
// Варіант 2

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, dx, xk, F, a, b, c;

	cout << "a ="; cin >> a;
	cout << "b ="; cin >> b;
	cout << "c ="; cin >> c;
	cout << "xp ="; cin >> xp;
	cout << "xk ="; cin >> xk;
	cout << "dx ="; cin >> dx;
	
	cout << fixed;
	cout << "______________________________" << endl;
	cout << "|" << setw(7) << "x" << "       |" << setw(7) << "F" << "       |" << endl;
	cout << "______________________________" << endl;

	x = xp;

	while (x <= xk)
	{
		
		if (((x + 5) < 0) && c == 0)
			F = (1. / (a * x)) - b;
		else
		{
			if (((x + 5) > 0) && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);
		}
			

		cout << "|" << setw(9) << setprecision(1) << x
			<< "     |" << setw(9) << setprecision(4) << F
			<< "     |" << endl;
		x += dx;

	}
	cout << "______________________________" << endl;

	return 0;
}
