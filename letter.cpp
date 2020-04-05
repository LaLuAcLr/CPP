#include "splib.h"
/*
写信，根据输入决定输出
*/
int main() {
    string first_name = " ";
    string friend_name = " ";
    char friend_sex = 0;
    int age = -1;
    cout << "Enter the name of the person you want to write to\n";
    cin >> first_name;
    cout << "Enter another name.\n";
    cin >> friend_name;
    cout << "Enter your friend's sex.(f/m)\n";
    cin >> friend_sex;
    cout << "Enter age.\n";
    cin >> age;
    if (age <= 0 or age >= 110)
        cout << "your are kidding.\n";
    cout << "Dear " << first_name << ",\n";
    cout << "  How are you? I am fine. I miss you.\n";
    cout << "  Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'm')
        cout << "  If you see " << friend_name << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "  If you see " << friend_name << " please ask her to call me.\n";
    cout << "  I hear you just had a birthday and you are " << age << " years old.\n";
    if (age < 12)
        cout << "  Next year you will be " << age+1 << ".\n";
    if (age == 17)
        cout << "  Next year you will be able to vote.\n";
    if (age > 70)
        cout << "  I hope you are enjoying retirement.\n";
    cout << "Yours sincerely, \n\nGeorge";
}