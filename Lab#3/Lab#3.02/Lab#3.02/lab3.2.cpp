// Lab_03_2.cpp
// Федоренко Кирило Євгенович
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 26
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	if (c < 0 && b != 0) {
		F = (a * (x * x)) + ((b * b) * x);
	}
	if (c > 0 && b == 0) {
			F=(x + a) / (x + c);
		}
	if (!(c < 0 && b != 0) && !(c > 0 && b == 0)) {
		F = x / c;
	}
	cout << "1.F = " << F << endl;
	if (c < 0 && b != 0) {
		F = (a * (x * x)) + ((b * b) * x);
	}
	else
		if (c > 0 && b == 0) {
			F = (x + a) / (x + c);
		}
		else {
			F = x / c;
		}
	
	cout << "2.F = " << F << endl;

	cin.get();
	return 0;





}