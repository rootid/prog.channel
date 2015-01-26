#include<iostream>
#include<string>
using namespace std;
//aaabbaa
bool isPalindrome (string &s) {

    int start = 0;
    int end = s.length() - 1;
    
    while (start < end ) {
        if (s[start++] != s[end--]) {
            return false;
        }
    }
    return true;
}


void maxLenPalindrome (string input,int k,int& maxLen) {
    
    int len = input.length();
    if (k == input.length()) {
        return ;
    }
    for (int i=k;i<len;i++) {
        string sub = input.substr(k,i-k+1);  
        if ( isPalindrome (sub) ) {
            cout << sub << endl;
            int l = sub.length();
            maxLen = max(maxLen,l);
            maxLenPalindrome (input,i+1,maxLen);
        }
    }
}



bool isPalindrome (string &s) {

    int start = 0;
    int end = s.length() - 1;
    
    while (start < end ) {
        if (s[start++] != s[end--]) {
            return false;
        }
    }
    return true;
}


void maxLenPalindrome (string input,int k,int& maxLen) {
    
    int len = input.length();
    if (k == input.length()) {
        return ;
    }
    for (int i=k;i<len;i++) {
        string sub = input.substr(k,i-k+1);  
        if ( isPalindrome (sub) ) {
            cout << sub << endl;
            int l = sub.length();
            maxLen = max(maxLen,l);
            maxLenPalindrome (input,i+1,maxLen);
        }
    }
}


int main () {

    string input = "aaaabba";
    int maxLen = -1;
    maxLenPalindrome (input,0,maxLen);
    cout << "the maxLen " << maxLen << endl;
}
