#include<iostream>
#include<vector>
#include<string>
using namespace std;


//permutation of string

//abc : abc
void enumPermute (string s,int k,vector<string>& result) {
    
    int len = s.length();
    if (k == len) {
        //cout << s << endl;
        cout << "-------------------" << endl;
        result.push_back(s);
        return;
    }
    for (int i=k;i<len;i++) {
        swap (s[k],s[i]);

        cout << k << "|" << s << endl;
        enumPermute(s,k+1,result); //FOr EACH K there are candidates
        swap (s[k],s[i]);

        cout << k << "->" << s << endl;
    }
    
}


int main () {
    
    string s = "123";
    vector<string> result;
    enumPermute (s,0,result);
}
