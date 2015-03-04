#include<iostream>
#include<string>
using namespace std;

//-45555
bool isNumber (string n) {
    int len = n.length();
    for (int i=0;i<len;i++) {
        if (n[i] - '0' < 0 || n[i] - '0' > 9 ) {
            return false;
        }
    }
    return true;
}

void test (string n) {
    if (isNumber(n) == true) {
        cout << "number found" << endl;
    } else {
        cout << "number not found" << endl;
    }
}

int main () {
    test ("1000");
    test ("10A");
}
