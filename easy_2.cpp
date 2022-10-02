#include "easy.h"

using namespace std;

bool itc_iseven(int input) {
    return input % 2 == 0;
}

int itc_max(int a, int b) {
    if (a > b) {
        return a;
    }else
        return b;
}

int itc_min(int a, int b) {
    if (a < b) {
        return a;
    }
    else
        return b;
}

double itc_fmax(double a, double b) {
    if (a > b) {
        return a;
    }
    else
        return b;
}

double itc_fmin(double a, double b) {
    if (a < b) {
        return a;
    }
    else
        return b;
}
