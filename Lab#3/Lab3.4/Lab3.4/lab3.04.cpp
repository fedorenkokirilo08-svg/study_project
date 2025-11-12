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
	if ((((x - R) * (x - R) + y * y <= R * R) && (y >= 0)) ||
		(((x + R) * (x + R) + (y + R) * (y + R) <= R * R))) 
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