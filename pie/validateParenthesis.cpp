#include<iostream>
#include<string>
using namespace std;
// ( ))))))
//(((()
//)(
//()

//((((
//)(
//)
//()
bool isValidParenthesis (string &s) {

    int leftP = 0;
    int rightP = 0;
    int len = s.length();
    int start = 0;
    while (start < len) {
        if (leftP < rightP ) {
            return false;
        }
        if (s[start] == '(' ) {
            leftP++;
        } else {
            rightP++;
        }
        start++;
    }
    if (leftP != rightP) {
        return false;
    }
    return true;
}
