#include<iostream>
#include<string>
using namespace std;

bool strCmp (string &s,string &t) {
    int m = s.length();
    int n = t.length(); 
    if (m != n) {
        return false;
    } 
    int idx = 0; 
    while (idx < m) {
        if (s[idx] != t[idx]) {
            return false;
        }
        idx++;
    }
    return true; 
}

void strCmpTest (string s,string t) {

    if ( strCmp (s,t) == true ) {
        cout << " ( " <<  s << ", " << t  << ") " << " are equal" << endl;
    } else {
        cout << " ( "  << s << ", " << t  << ") " << " are not equal" << endl;
    }
}

int main () {
    strCmpTest ("algorithm","logarithm");
    strCmpTest ("test","test1");
    strCmpTest ("test1","test1");
}
