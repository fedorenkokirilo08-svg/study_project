// Lab_04_4.cpp
// Федоренко Кирило Євгенович
// Лабораторна робота № 4.4
// Варіант 26
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, dx, R, F;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed << setprecision(10);
	cout << "------------------------------------------\n";
	cout << "|         x       |            F         |\n";
	cout << "------------------------------------------\n";
	for (double x = xp; x <= xk; x += dx) {
		if (x <= -5)
		{
			F = -3;
		}
		else
			if (-5 < x && x <= -R)
			{
				F = 3 / (5 - R) * (x + 5) - 3;
			}
			else
				if (-R < x && x <= R)
				{
					F = sqrt((R * R) - (x * x));
				}
				else
					if (R < x && x <= 8)
					{
						F = (R / 8 - R) * (x - R);
					}
					else {
						F = R;

					}

		cout << "| " << setw(15) << x << " | " << setw(20) << F << " |\n";
	}
	cout << "------------------------------------------\n";
	return 0;
}
