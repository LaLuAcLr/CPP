#include "splib.h"
/*
删除重复词语，计数
*/
int main() {
    int num = 0;
    string previous = " ";
    string current;
    while  (cin >> current) {
        num++;
        if (previous == current) {
            cout << "word number: " << num;
            cout << " repeated word:" << current << '\n';
        }
        previous = current;
    }
}