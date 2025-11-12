#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;	

int main() {
	double a, b, c, xp, xk, dx, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed << setprecision(10);
    cout << "------------------------------------------\n";
    cout << "|         x         |            F       |\n";
    cout << "------------------------------------------\n";

    for (double x = xp; x <= xk + dx / 2; x += dx) {
        if (c < 0 && b != 0)
            F = a * (x * x) + (b * b) * x;
        else if (c > 0 && b == 0)
            F = (x - a) / (x + c);
        else
            F = x / c;

        cout << "| " << setw(15) << x << " | " << setw(20) << F << " |\n";
    }

    cout << "------------------------------------------\n";
	return 0;





}