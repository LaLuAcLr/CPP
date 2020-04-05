#include "splib.h"
/*
输出2^n
*/
int main() {
    double e=1;
    for (int i=1; i<65; ++i) {
        e *= 2;
        cout << i << '\t' << e << '\n';
    }
}