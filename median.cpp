#include "splib.h"
/*
输出中值
*/
int main() {
    double t;
    vector<double> data;
    while(cin >> t) {
        data.push_back(t);
    }
    sort(data.begin(), data.end());
    if (data.size() % 2 != 0) {
        cout << "Median: " << data[data.size()/2] << '\n';
    }
    else {
        cout << "Median: " << (data[data.size()/2]+data[data.size()/2-1])/2.0 << '\n';
    }
}