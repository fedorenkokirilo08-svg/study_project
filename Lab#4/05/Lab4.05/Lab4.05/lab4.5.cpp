#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <cstdlib>  
#include <ctime>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double R;
    cout << "Значення радіусу = ";
    cin >> R;
    double x0 = -2 * R;
    double x1 = 2 * R;
    double y0 = -2 * R;
    double y1 = 2 * R;
    double dx = 0.5;
    double dy = 0.5;
    double x, y;
    cout << fixed << setprecision(10);
    for (int i = 1; i <= 10; i++) {
        cout << "Постріл #" << i << ": Введіть x = ";
        cin >> x;
        cout << "Введіть y = ";
		cin >> y;
        bool in_shaded = (x >= 0 && y >= 0 && pow(x - R, 2) + pow(y, 2) <= R * R);
        bool in_unshaded = (x <= 0 && y <= 0 && pow(x + R, 2) + pow(y, 2) <= R * R);

        cout << "Координати: x = " << x << "; y = " << y << "\n";
        if (in_shaded && !in_unshaded) {
            cout << "Попадання!\n";
        }
        else {
            cout << "Промах!\n";
        }
    }
    srand(time(0));
    cout << "\nАвтоматичні постріли:\n";
    for (int i = 1; i <= 10; i++) {
        x = x0 + static_cast<double>(rand()) / RAND_MAX * (x1 - x0);
        y = y0 + static_cast<double>(rand()) / RAND_MAX * (y1 - y0);

        bool in_shaded = (x >= 0 && y >= 0 && pow(x - R, 2) + pow(y, 2) <= R * R);
        bool in_unshaded = (x <= 0 && y <= 0 && pow(x + R, 2) + pow(y, 2) <= R * R);

        cout << "Постріл #" << i << ": x = " << fixed << setprecision(2) << x
            << "; y = " << y << " -> ";
        if (in_shaded && !in_unshaded) {
            cout << "Попадання\n";
        }
        else {
            cout << "Промах\n";
        }
    }
    return 0; 

    

}