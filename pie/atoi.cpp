#include<iostream>
#include<string>
using namespace std;

//"1231" => 1231
// 1 : 1 + 0 * 10 = 1
// 12 : 2 + 1 * 10 = 12
//123 : 3 + 12 * 10 = 123
//1231 : 1 + 123 * 10 = 1231

int atoi (string& s) {
    
    int start = 0;
    int end = s.length();
    int result = 0;
    int factor = 10;
    while (start < end) {
        result = s[start] - '0' + result * factor;
        start++;
    }
    return result;
}

int main () {
}
