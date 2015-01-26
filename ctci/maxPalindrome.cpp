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



int expandAndTraverse (string s,int start,int end) {

    int l = s.length();
    int len = 0;
    while (end < l && start >= 0) {
        if (s[start] != s[end]) {
            return len;
        }
        len++;
        start++;
        end--;
    }
}

int maxLenPalindromeLin (string input) {
    
    int len = input.length();
    int maxLen = 0;
    for (int i=0;i<len;i++ ) {
        int l1 = expandAndTraverse(input,i,i);
        int l2 = expandAndTraverse(input,i,i+1);
        maxLen = max(l1,l2);
    }
    return maxLen;
 
}

int main () {

    string input = "aaaabba";
    int maxLen = -1;
    maxLenPalindrome (input,0,maxLen);
    cout << "the maxLen " << maxLen << endl;
}
