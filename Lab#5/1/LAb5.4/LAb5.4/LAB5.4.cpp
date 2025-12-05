#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

int main() {
    int K, N;
    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;

    cout << "(iter) P0 = " << P0(K, N) << endl;
    cout << "(rec up ++) P1 = " << P1(K, N, K) << endl;
    cout << "(rec up --) P2 = " << P2(K, N, N) << endl;
    cout << "(rec down ++) P3 = " << P3(K, N, K, 1.0) << endl;
    cout << "(rec down --) P4 = " << P4(K, N, N, 1.0) << endl;

    return 0;
}
