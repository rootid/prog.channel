#include<iostream>
#include<cstring>
using namespace std;


string removeDuplicateChars (string s) {

    cout << "the string=" << s << endl;
    int store[256];
    memset (store,0,sizeof(store));
    int start = 0;
    int end = s.length();
    for (int i=0;i<end;i++) {
        if (store[s[i]]++ == 0) {
            swap(s[start++],s[i]);
        }
        
    }

    cout << "the string=" << s.substr(0,start) << endl;
    return s.substr(0,start);
}

int main () {

        removeDuplicateChars ("aabcadedf");
}


