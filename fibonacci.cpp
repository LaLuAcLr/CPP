/*
输出最大可能的int斐波那契
*/
#include "splib.h"

int main() {
    int a=1, b=1;
    int t;
    cout << a << '\n';
    while (b > 0) {
        cout << b << '\n';
        t=a+b;
        a=b;
        b=t;
    }
}