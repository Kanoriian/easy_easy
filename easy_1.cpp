#include "easy.h"

using namespace std;

void itc_name() {
    cout << "Peter" << endl;
}

void itc_fio() {
    cout << "Davydov" << endl;
}

int itc_abs(int input) {
    if (input < 0) {
        return input * -1;
    }
    else
        return input;
}


double itc_fabs(double input) {
    if (input < 0) {
        return input * -1;
    }
    else
        return input;
}

int itc_revnbr(int input) {
    int a, b, c;
    a = input / 100;
    b = input / 10 % 10;
    c = input % 10;
    return c * 100 + b * 10 + a;
}
