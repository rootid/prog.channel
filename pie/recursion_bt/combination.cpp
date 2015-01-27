#include<iostream>
#include<vector>
#include<string>
using namespace std;


//combination of string

//abc : abc
//      ab
//      ac
//      bc
//      a
//      b
//      c
        
//         a   b    c
//        / \ / \  / \
//       a    b    c
//      / \  / \  / \
//      a    b    c
      


void enumCombination (string s,int k,vector<int>& cand, vector<string> &result) {

    int len = s.length();
    if (k == len) {
        string tmpResult = "";
        for (int i=0;i<len;i++) {
            if (cand[i] == 0) {
                tmpResult += s[i];
            }
        }
        cout << tmpResult << endl;
        result.push_back(tmpResult);   
        return; 
    }
    cand[k] = 1;
    enumCombination (s,k+1,cand,result);
    cand[k] = 0;
    enumCombination (s,k+1,cand,result);
}


int main () {
    
    string s = "1234";
    vector<int> cand (s.length(),0);
    vector<string> result;
    enumCombination (s,0,cand,result);
}
