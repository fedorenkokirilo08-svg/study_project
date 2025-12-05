#include <iostream>
#include <cmath>
using namespace std;

const int N = 15; 


double P0(const int K) {
    double p = 1.0;
    for (int j = K; j <= N; j++)
        p *= sqrt((j * j) / (1 + exp(-j)));
    return p;
}


double P1(const int K, const int j) {
    if (j > N)
        return 1.0;
    else
        return sqrt((j * j) / (1 + exp(-j))) * P1(K, j + 1);
}


double P2(const int K, const int j) {
    if (j < K)
        return 1.0;
    else
        return sqrt((j * j) / (1 + exp(-j))) * P2(K, j - 1);
}


double P3(const int K, const int j, double p) {
    p *= sqrt((j * j) / (1 + exp(-j)));
    if (j >= N)
        return p;
    else
        return P3(K, j + 1, p);
}


double P4(const int K, const int j, double p) {
    p *= sqrt((j * j) / (1 + exp(-j)));
    if (j <= K)
        return p;
    else
        return P4(K, j - 1, p);
}

int main() {
    int K;
    cout << "K = "; cin >> K;

    cout << "(iter) P0 = " << P0(K) << endl;
    cout << "(rec up ++) P1 = " << P1(K, K) << endl;
    cout << "(rec up --) P2 = " << P2(K, N) << endl;
    cout << "(rec down ++) P3 = " << P3(K, K, 1.0) << endl;
    cout << "(rec down --) P4 = " << P4(K, N, 1.0) << endl;

    return 0;
}
