#include "splib.h"
/*
输入三个整数，按大小输出，逗号分隔
*/
int main() {
    string a, b, c, t;
    cin >> a >> b >> c;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    cout << a << ", " << b << ", " << c;
}