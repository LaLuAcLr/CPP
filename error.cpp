#include "splib.h"

void error(string s) {
    throw runtime_error(s);
}

int main() {
    string s="jlik";
    try{
        error(s);
    }
    catch (exception& e) {
        cerr << "runtime error: " << e.what() << endl;
        return 1;
    }
}