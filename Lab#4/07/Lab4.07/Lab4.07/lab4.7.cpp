#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "--------------------------------------------------------" << endl;
    cout << "|   x    |   ln(1 - x)  |     S (sum)    |  n (terms)  |" << endl;
    cout << "--------------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        n = 1;
        a = -x;
        S = a;

        do {
            n++;
            R = -x * (1.0 / n);
            a *= R;
            S += a;
        } while (abs(a) >= eps);

        cout << "|"
            << setw(7) << setprecision(2) << x << " |"
            << setw(13) << setprecision(5) << log(1 - x) << " |"
            << setw(15) << setprecision(5) << S << " |"
            << setw(12) << n << " |"
            << endl;

        x += dx;
    }

    cout << "--------------------------------------------------------" << endl;
    return 0;
}
