#include "functions.h"

double P0(const int K, const int N) {
    double p = 1.0;
    for (int j = K; j <= N; j++)
        p *= sqrt((j * j) / (1 + exp(-j)));
    return p;
}

double P1(const int K, const int N, const int j) {
    if (j > N)
        return 1.0;
    else
        return sqrt((j * j) / (1 + exp(-j))) * P1(K, N, j + 1);
}

double P2(const int K, const int N, const int j) {
    if (j < K)
        return 1.0;
    else
        return sqrt((j * j) / (1 + exp(-j))) * P2(K, N, j - 1);
}

double P3(const int K, const int N, const int j, double p) {
    p *= sqrt((j * j) / (1 + exp(-j)));
    if (j >= N)
        return p;
    else
        return P3(K, N, j + 1, p);
}

double P4(const int K, const int N, const int j, double p) {
    p *= sqrt((j * j) / (1 + exp(-j)));
    if (j <= K)
        return p;
    else
        return P4(K, N, j - 1, p);
}
