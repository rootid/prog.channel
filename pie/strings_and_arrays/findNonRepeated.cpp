#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

char firstNonRepeatedChar (string s) {

    int len = s.length();
    int start = 0;
    unordered_map<char,int> uMap;
    while (start < len) {
        uMap[s[start]]++;     
        start++;
    }
    
    for (int i=0;i<len;i++) {
        if (uMap[s[i]] == 1) {
            return s[i];
        }
    }
    return 0;
}


int main () {

    cout << firstNonRepeatedChar ("aaaabbceddd") << endl;
}
