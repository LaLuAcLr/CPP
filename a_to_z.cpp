#include "splib.h"
/*
打印a到z，和他们的ASCII码
*/
int main() {
    int x = 97;
    while (x < 123) {
        cout << char(x) << '\t' << x << '\n';
        ++x;
    }
}