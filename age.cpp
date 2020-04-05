#include "splib.h"

int main() {
    string first_name = "???";
    string second_name = "???";
    int age = -1;
    cout << "Please enter your first name and age\n";
    cin >> first_name >> age;
    cout << "Hello, " << first_name << "(age " << age << ")\n";
    cout << "Enter two names\n";
    cin >> first_name >> second_name;
    cout << first_name << ' ' << second_name;
}