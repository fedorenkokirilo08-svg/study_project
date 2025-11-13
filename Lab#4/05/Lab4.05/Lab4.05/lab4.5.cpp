#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
    double x, y, R;
    cout << "R = "; cin >> R;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        if ((x >= 0 && y >= 0 && pow(x - R, 2) + pow(y, 2) <= R * R) &&
            !(x <= 0 && y <= 0 && pow(x + R, 2) + pow(y, 2) <= R * R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 4. * rand() / RAND_MAX - 2;
        y = 4. * rand() / RAND_MAX - 2;
        if ((x >= 0 && y >= 0 && pow(x - R, 2) + pow(y, 2) <= R * R) &&
            !(x <= 0 && y <= 0 && pow(x + R, 2) + pow(y, 2) <= R * R))
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
