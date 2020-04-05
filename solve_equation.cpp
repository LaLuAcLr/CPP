#include "splib.h"
/*
解一元二次方程，虚根报错
*/
void solve(double a, double b, double c) {
    double delta = b*b - 4*a*c;
    if (delta < 0) throw runtime_error("delta < 0");
    vector<double> solution(2);
    solution[0] = (-b + sqrt(delta)) / (2*a);
    solution[1] = (-b - sqrt(delta)) / (2*a);
    cout << "solutions are " << solution[0] 
        << " & " << solution[1] << endl;
}

int main() {
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    vector<double> solution(2);
    try {
        solve(a, b, c);
    }
    catch(runtime_error& e) {
        cout << e.what() << endl;
    }

}