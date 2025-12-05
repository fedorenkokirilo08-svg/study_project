#include <iostream>
#include <cmath>
using namespace std;

double g(const double x, const double y);

int main() {
	double s, t;
	cout << "s ="; cin >> s;
	cout << "t ="; cin >> t;
	double c = (g(s, t - 1) + pow(g(t * t, s), 2)) / pow(g(s * s + t * t, 1), 2);
	cout << "c =" << c;
	return 0;
}

double g(const double x, const double y)
{
	return (x / (y * y)) - (sin(y / (x * x)));
}