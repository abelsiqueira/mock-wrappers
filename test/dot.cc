#include <iostream>
#include <cmath>

#include "mock-wrappers.h"

int main() {
    int N = 5;
    float x[N], y[N];
    float dot_expected = 0.0f;

    for (int i = 0; i < N; i++) {
        x[i] = 1.0f / (1 + i);
        y[i] = (i - 2) * 1.0f;
        dot_expected += x[i] * y[i];
    }

    float error = fabs(dot_expected - dot(N, x, y));
    std::cout << error << std::endl;

    return 0;
}