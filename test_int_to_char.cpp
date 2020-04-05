#include "splib.h"
/*
测试不安全类型转换
*/
int main() {
    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d= " << d
            << " i= " << i
            << " i2= " << i2
            << " char(" << c << ")\n";
    }
}