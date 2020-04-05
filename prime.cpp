#include "splib.h"
/*
输出0到max的素数
*/
int main() {
    int prime(int);
    int n=1, max;
    vector<int> prime_list;
    cout << "max: ";
    cin >> max;
    for (; n <= max; ++n) {
        if (prime(n)) prime_list.push_back(n);
    }
    for (int i=0; i<prime_list.size(); ++i) 
        cout << prime_list[i] << '\n';
}

int prime(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    for (int i=2; i< sqrt(n) + 1; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}