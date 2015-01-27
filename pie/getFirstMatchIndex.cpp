#include<iostream>
#include<string>
#include<limits.h>
#include<unordered_map>
using namespace std;


int getFirstMatchIndex (string &l,string &s) {
    
    unordered_map <char,int> storeMap;
    int start =0 ;
    int len = s.length();
    while (start < len) {
        storeMap[ s[start++] ] = -1;
    }
    
    start = 0;
    int lLen = l.length();
    while (start < lLen) {
        if (storeMap.find(l[start]) != storeMap.end() ) {
            if (storeMap[l[start]] == -1) {
                storeMap[l[start]] = start;
            }
        }
        start++;
    }
    
    int minIdx = INT_MAX;
    for (auto &p:storeMap) {
        if (minIdx > p.second) {
            minIdx = p.second;
        }
    }

    cout << minIdx << endl;
    return minIdx;
}


int main () {

    string l = "abcdef";
    string s = "cba";
    l = "csxxxfbg";
    s = "xgf";
    getFirstMatchIndex (l,s);

}
