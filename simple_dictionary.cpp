#include "splib.h"
/*
输入单词排序
*/
int main() {
    vector<string> words;
    string t;
    while (cin >> t) {
        words.push_back(t);
    }
    cout << "Number of words: " << words.size() << '\n';

    sort(words.begin(), words.end());

    for (int i=0; i<words.size(); ++i) {
        if (i==0 || words[i-1] != words[i]) {
            cout << words[i] << '\n';
        }
    }
}