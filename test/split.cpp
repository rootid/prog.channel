#include<iostream>
#include<string>
using namespace std;

//this::is:::a:test

vector<string> split (string s,char delim) {
    
    int len = s.length();
    string temp = "";
    vector<string> result;
    for (int i=0;i<len;i++) {
        if (s[i] != delim) {
            temp += s[i];
        } else {
            if (temp != "") {
                result.push_back(temp);
            }
            temp = "";
        }        
    }
    if (temp != "") {
        result.push_back(temp);
    }
    return result;

}
