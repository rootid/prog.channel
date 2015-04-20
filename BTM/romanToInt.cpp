#include<iostream>
#include<unordered_map>
using namespace std;

//III
int romanToInt (string r,unordered_map<char,int>& uMap) {
    
    int no = 0;
    int len = r.length();
    if (len <= 0 ) {
        return no;
    } 
    else {
        if (len >=2 ) {
            if ( uMap[r[0]] < uMap[r[1]] ) {
                no += uMap[r[1]];
                no -= uMap[r[0]];
                no = no + romanToInt(r.substr(2),uMap);
            } else {
                no += uMap[r[0]];
                no = no + romanToInt(r.substr(1),uMap);
            }
        } else {
            no += uMap[r[0]];
            no = no + romanToInt(r.substr(1),uMap);
        }
    }   
    return no;
}

int main () {

    unordered_map<char,int> uMap;
    //string s = "III";
    string s = "IVV";
    uMap['I'] = 1;
    uMap['V'] = 5;
    uMap['X'] = 10;
    cout << romanToInt (s,uMap) << endl;
}
