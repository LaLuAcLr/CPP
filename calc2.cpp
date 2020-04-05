#include "splib.h"
/*
读入运算符后做一次运算
*/
int main() {
    char operation = 0;
    double var1, var2;
    cin >> operation;
    if (operation == '+') {
        cin >> var1 >> var2;
        cout << var1 + var2;
    }
    else if (operation == '-') {
        cin >> var1 >> var2;
        cout << var1 - var2;
    }
    else if (operation == '*') {
        cin >> var1 >> var2;
        cout << var1 * var2;
    }
    else if (operation == '/') {
        cin >> var1 >> var2;
        cout << var1 / var2;
    }
    else {
        cout << "Wrong.";
    }
}