#include "splib.h"
/*
计算max, min, 和差乘除
*/
int main() {
    int val1 = 0;
    int val2 = 0;
    cin >> val1 >> val2;
    if (val1 > val2) {
        cout << "max: " << val1 << '\n';
        cout << "min: " << val2 << '\n';
    }
    else {
        cout << "max: " << val2 << '\n';
        cout << "min: " << val1 << '\n';
    }
    cout << "sum: " << val1 + val2 << '\n';
    cout << "minus: " << val1 - val2 << '\n';
    cout << "times: " << val1 * val2 << '\n';
    double divide = (double) val1 / (double) val2;
    cout << "divide: " << divide << '\n';
}