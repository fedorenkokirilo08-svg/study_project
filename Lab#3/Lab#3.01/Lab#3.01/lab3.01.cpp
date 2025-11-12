// Lab_03_1.cpp
// Федоренко Кирило >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 26

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << " x = "; cin >> x;
	A = 4.95 * (x * x);
	if (x <= -3.5) {
		B = cos(3 * x) - sin(x);
	}
	if (-3.5 < x && x <= 1) {
		B = atan((x + 3.5) / 5);
	}
	if (x > 1) {
		B = 4 + pow(x, 2);
	}
	y = A + B;
	cout << " 1.y = " << y << endl;
	y = A + B;
	if (x <= -3.5) {
		B = cos(3 * x) - sin(x);
	}
	else 
		if (x > 1) {
						B = 4 + pow(x, 2);
		}
		else {
			B = atan((x + 3.5 )/ 5);
		}
	y = A + B;
	cout << " 2.y = " << y << endl;

	return 0;





}