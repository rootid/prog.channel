#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;


//permutation of telephone number

//"123": 3C1 * 3C1 * 3C1 = 27
//"123": 3C1 * 3C1 * 2C1 = 18
void enumTelephone (string s,int k,string &op,unordered_map<char,string> &dict,vector<string>& result) {
    int len = s.length();
    if (k == len) {
        cout << op << endl;
        return;
    }
    //for (int i=k;i<len;i++) { //picks up char
     char cChar = s[k];         //pick the charcters
     string s1 = dict[cChar];
     for (int j=0;j<s1.length();j++) { //picks up candiates
         op.push_back(s1[j]);
         enumTelephone (s,k+1,op,dict,result);
         op.pop_back();
     }
    //}
    
}

int main () {
    
    string s = "123";
    vector<string> result;
    string op = "";
    unordered_map <char,string> dict;
    dict['1'] = "abc";
    dict['2'] = "def";
    dict['3'] = "gh";
    enumTelephone (s,0,op,dict,result);
}
