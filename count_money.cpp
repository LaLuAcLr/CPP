#include "splib.h"
/*
读入penny(1分)，nickel(5分)，dime(1角)，quarter(25分)，half dollar, dollar
并输出总数值
*/
int main() {
    int penny=0, nickel=0, dime=0, quarter=0;
    int half_dollar=0, dollar=0;
    cout << "How many pennies do you have?\n";
    cin >> penny;
    cout << "How many nickels do you have?\n";
    cin >> nickel;
    cout << "How many dimes do you have?\n";
    cin >> dime;
    cout << "How many quarters do you have>\n";
    cin >> quarter;
    cout << "How many half dollars do you have?\n";
    cin >> half_dollar;
    cout << "How many dollars do you have?\n";
    cin >> dollar;
    cout << "You have:\n";
    if (penny == 1) {
        cout << "1 penny.\n";
    }
    else
    {
        cout << penny << " pennies.\n";
    }
    if (nickel == 1) {
        cout << "1 nickel.\n";
    }
    else
    {
        cout << nickel << " nickels.\n";
    }
    if (dime == 1) {
        cout << "1 dime.\n";
    }
    else
    {
        cout << dime << " dimes.\n";
    }
    if (quarter == 1) {
        cout << "1 quarter.\n";
    }
    else
    {
        cout << quarter << " quarters.\n";
    }
    if (half_dollar == 1) {
        cout << "1 half dollar.\n";
    }
    else
    {
        cout << half_dollar << " half dollars.\n";
    }
    if (dollar == 1) {
        cout << "1 dollar.\n";
    }
    else
    {
        cout << dollar << " dollars.\n";
    }
    double total = 0;
    total = penny * 0.01 + nickel * 0.05 + 
            dime * 0.1 + quarter * 0.25 +
            half_dollar * 0.5 + dollar;
    cout << "total: $ " << total;
}