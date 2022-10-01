#include "easy.h"

using namespace std;

void itc_name() {
    cout << "Peter" << endl;
}

void itc_fio() {
    cout << "Davydov" << endl;
}

int itc_abs(int input) {
    return input < 0 ? input * -1 : input;
}


double itc_fabs(double input) {
    return input < 0 ? input * -1 : input;
}

int itc_revnbr(int input) {
    int a = input / 100;
    int b = input / 10 % 10;
    int c = input % 10;
    return c * 100 + b * 10 + a;
}
