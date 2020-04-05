#include "splib.h"
/*
输入键值对，此处用No more终止输入，并查询相应的键与值
*/
int main() {
    vector<string> names;
    vector<int> scores;
    int score, i;
    string name;
    while (cin >> name >> score) {
        if (name == "Nomore") break;
        for (i=0; i<names.size(); ++i) {
            if (name == names[i]) {
                cout << "Wrong name.\n";
                exit(-1);
            }
        }
        names.push_back(name);
        scores.push_back(score);
    }
    for (i=0; i<names.size(); i++) {
        cout << names[i] << '\t' << scores[i] << endl;
    }
    //查询name
    cout << "name: ";
    cin >> name;
    for (i=0; i<names.size(); i++) {
        if (names[i] == name) {
            cout << scores[i] << endl;
            break;
        }
    }
    if (i == names.size()) cout << "name not found\n";
    //查询score
    cout << "score: ";
    cin >> score;
    for (i=0; i<scores.size(); i++) {
        if (scores[i] == score) {
            cout << names[i] << endl;
            break;
        }
    }
    if (i == scores.size()) cout << "score not found\n";
}