// Lab_03_4.cpp
// <Федоренко Кирило Євгенович>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 26

#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	if ((y >= 0 && pow(x - R, 2) + pow(y, 2) <= R * R)
		|| (x <= 0 && y <= 0 && x >= -R && y >= -R && pow(x + R, 2) + pow(y + R, 2) >= R * R))
	{
		cout << "Yes!" << endl;
	}
	else
		{
		cout << "No!" << endl;
	}
	cin.get();
	return 0;




}