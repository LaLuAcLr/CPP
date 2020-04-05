/*
程序用向量存储4个0到9之间的整数，用户通过反复猜测找到这些数
bull代表正确的数在正确的位置
cow代表正确的数在不正确的位置
*/
#include "splib.h"
#include "time.h"

int main() {
    srand(time(0));   //设置随机种子
    vector<int> answer_vector(4);
    answer_vector[0] = rand() % 10;
    answer_vector[1] = rand() % 10;
    answer_vector[2] = rand() % 10;
    answer_vector[3] = rand() % 10;
    int answer = answer_vector[3] + answer_vector[2] * 10
        + answer_vector[1] * 100 + answer_vector[0] * 1000;
    cout << "answer: " << answer << endl;   //得出answer

    int guess;
    vector<int> guess_vector(4);

    while(cin >> guess) {
        //检查
        if (guess < 0 || guess > 9999) 
            throw runtime_error("wrong guess.\n");
        if (guess == answer) {
            cout << "Correct!\n";
            break;
        }
        //提取各位
        guess_vector[3] = guess % 10;
        guess /= 10;
        guess_vector[2] = guess % 10;
        guess /= 10;
        guess_vector[1] = guess % 10;
        guess /= 10;
        guess_vector[0] = guess % 10;
        //bull
        int bull=0;
        for (int i=0; i<4; i++) {
            if (guess_vector[i] == answer_vector[i]) {
                bull++;
            }
        }
        //cow
        int cow=0;
        for (int i=0; i<4; i++) {
            for (int k=0; k<4; k++) {
                if (guess_vector[i] == answer_vector[k] && i != k) {
                    cow++;
                    continue;
                }
            }
        }
        cout << "bull: " << bull << endl
            << "cow: " << cow << endl;
    }
}