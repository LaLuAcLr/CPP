#include "splib.h"
/*
读入数据，并做单位转换。排序，得出max,min。存入vector。
*/
int main() {
    double max=0, min=0, t=0, sum=0;
    int i = 0;
    string unit=" ";
    vector<double> data;
    while (cin >> t >> unit) {
        double num;
        ++i;
        if (unit == "cm") {
            num = t;
            data.push_back(t);
        }
        else if (unit == "m") {
            num = t * 100;
            data.push_back(num);
        }
        else if (unit == "in") {
            num = t * 2.54;
            data.push_back(num);
        }
        else if (unit == "ft") {
            num = t * 2.54 * 12;
            data.push_back(num);
        }
        else {
            cout << "Wrong unit.\n";
            continue;
        }
        sum += num;
        if (i == 1) {
            max = min = num;
        }
        else {
            if (max <= num) {
                cout << "the largest so far.\n";
                max = num;
            }
            if (min >= num) {
                cout << "the smallest so far.\n";
                min = num;
            }
        }
    }
    sort(data.begin(), data.end());
    for (int i=0; i < data.size(); ++i)
        cout << data[i] << " cm\n";
}