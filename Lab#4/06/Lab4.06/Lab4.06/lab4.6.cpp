#include <iostream>
using namespace std;

int main() {
    double smsh, a, b;
    int c, d;

    
    smsh = 0;
    c = 1;
    while (c <= 20) {
        d = 1;
        a = 1;
        while (d <= c) {
            a *= d;
            d++;
        }
        b = (c + a) / (c * c + a * a);
        smsh += b;
        c++;
    }
    cout <<"while = "<< smsh << endl;


    smsh = 0;
    c = 1;
    do {
        d = 1;
        a = 1;
        do {
            a *= d;
            d++;
        } while (d <= c);
        b = (c + a) / (c * c + a * a);
        smsh += b;
        c++;
    } while (c <= 20);
    cout <<"do while = "<< smsh << endl;


    smsh = 0;
    for (c = 1; c <= 20; c++) {
        a = 1;
        for (d = 1; d <= c; d++) {
            a *= d;
        }
        b = (c + a) / (c * c + a * a);
        smsh += b;
    }
    cout << "for++ = "<< smsh << endl;


    smsh = 0;
    for (c = 20; c >= 1; c--) {
        a = 1;
        for (d = c; d >= 1; d--) {
            a *= d;
        }
        b = (c + a) / (c * c + a * a);
        smsh += b;
    }
    cout << "for-- = " << smsh << endl;

    return 0;
}
