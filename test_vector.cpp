#include "splib.h"
/*
输入数组元素并输出
*/
int main() {
    vector<double> v;
    double t;
    while (cin >> t) {
        v.push_back(t);
    }
    for (int i=0; i<v.size(); ++i) {
        cout << "v[" << i << "]= " << v[i] << '\n';
    }

    //平均
    double sum = 0;
    for (int i=0; i<v.size(); ++i) sum += v[i];
    cout << "Average: " << sum/v.size() << '\n';

    //中位数
    sort(v.begin(), v.end());
    cout << "Median: " << v[v.size()/2] << '\n';
}