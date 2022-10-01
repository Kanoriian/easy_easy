#include "easy.h"

using namespace std;

int itc_pow(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; ++i)
        result *= a;
    return result;
}

bool itc_ispositive(int a) {
    return a >= 0;
}

bool itc_ispositive_d(double a) {
    return a >= 0;
}
