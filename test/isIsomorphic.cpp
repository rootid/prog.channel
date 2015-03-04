#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

//2 strings will have 1-1 relation
//for eg.  "FOO" "BAA" return true 
//for eg.  "FOO" "BAR" return false
//for eg.  "FOO" "BAR" return false

bool isIsomorphic (string s1,string s2) {

    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 != len2) {
        return false;
    }
    //Keeps the mapping of the string
    unordered_map<char,char> u_map1;
    for (int i=0;i<len1;i++) {
       if (u_map1.find(s1[i]) == u_map1.end()) {
           u_map1[s1[i]] = s2[i];
       } else {
           if (u_map1[s1[i]] != s2[i] ) {
               return false;
           }
       }
    }
    return true;
}


void test (string s1,string s2) {

    if ( true == isIsomorphic (s1,s2) ) {
        cout << "("  << s1 << "," << s2  << ")" << " are isomorphic." << endl;
    } else {
        cout << "("  << s1 << "," << s2  << ")" << " are not isomorphic." << endl;
    }
}


int main () {
    test("foo","bar");
    test("foo","baa");
}
