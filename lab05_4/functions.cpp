
#include <cmath>
#include "functions.h"

double term(int i)
{
    double s = sin(static_cast<double>(i));
    double c = cos(1.0 / i);
    return (s * s + c * c) / (static_cast<double>(i) * i);
}

double P0(int K, int N)
{
    double p = 1.0;

    for (int i = K; i <= N; i++)
        p *= term(i);

    return p;
}

double P1(int K, int N, int i)
{
    if (i > N)
        return 1.0;

    return term(i) * P1(K, N, i + 1);
}

double P2(int K, int N, int i)
{
    if (i < K)
        return 1.0;

    return term(i) * P2(K, N, i - 1);
}

double P3(int K, int N, int i, double p)
{
    p *= term(i);

    if (i >= N)
        return p;

    return P3(K, N, i + 1, p);
}

double P4(int K, int N, int i, double p)
{
    p *= term(i);

    if (i <= K)
        return p;

    return P4(K, N, i - 1, p);
}
