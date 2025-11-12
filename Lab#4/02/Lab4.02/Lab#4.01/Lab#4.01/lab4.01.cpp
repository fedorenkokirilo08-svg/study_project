#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
using namespace std;

double term(int j)
{
	return sqrt((j * j) / (1 + exp(-j)));
}
int main()
{
	setlocale(LC_ALL, "Ukrainian");
    SetConsoleOutputCP(65001);
	cout << fixed << setprecision(10);
	
    double P1 = 1.0;
    int j = 1;
    while (j <= 15) {
        P1 *= term(j);
        j++;
    }

    double P2 = 1.0;
    j = 1;
    do {
        P2 *= term(j);
        j++;
    } while (j <= 15);

    double P3 = 1.0;
    for (int k = 1; k <= 15; ++k) {
        P3 *= term(k);
    }
    double P4 = 1.0;
    for (int k = 15; k >= 1; --k) {
        P4 *= term(k);
    }

    cout << "Результати для варіанту 26:\n";
    cout << "Формула: P = ∏(j=1..15) sqrt(j² / (1 + e^(-j)))\n\n";
    cout << "while:      P1 = " << P1 << endl;
    cout << "do..while:  P2 = " << P2 << endl;
    cout << "for ++:     P3 = " << P3 << endl;
    cout << "for --:     P4 = " << P4 << endl;

    double eps = 1e-10;
    bool equal = fabs(P1 - P2) < eps && fabs(P1 - P3) < eps && fabs(P1 - P4) < eps;
    cout << "\nУсі результати однакові (з точністю " << eps << "): "
        << (equal ? "Так" : "Ні") << endl;

    return 0;
}