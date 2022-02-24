#include "linalg.h"

float dot(int n, float *x, float *y) {
    float s = 0.0f;
    for (int i = 0; i < n; i++)
        s += x[i] * y[i];
    
    return s;
}