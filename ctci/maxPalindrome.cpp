#include<iostream>
#include<string>
using namespace std;
//aaabbaa
bool isPalindrome (string &input) {

    int start = 0;
    int end = input.length() - 1;
    
    while (start < end ) {
        if (a[start++] != a[end--]) {
            return false;
        }
    }
    return true;
}


int maxLenPalindrome (string input,int k,int& maxLen) {
    
    int len = input.length();
    if (k == input.length()) {
        return;
    }
    for (int i=k;i<len;i++) {
        string sub = input.substr(k,i-k+1);  a 
        if ( isPalindrome (sub) ) {
            cout << sub << endl;
            int maxL = max(maxLen,sub.length());
            maxLenPalindrome (input,i+1,maxL);
        }
    }
}

int main () {

    string input = "aaaabba";
    int maxLen = -1;
    maxLenPalindrome (input,0,maxLen);
}
