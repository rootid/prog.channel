
23
"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"

"123"

1 2
ab cd
 
 "b" - ad

"12"

"abc" "def"

0 : "abc"
(a)
1 : "def"
s(a,d)
s(a,e)
s(a,f)

s(b,d)
s(b,e)
s(b,f)

s(c,d)
s(c,e)
s(c,f)

//n : n T : O(n!) S: O(C), Result store : O(n*c), O(n+max(c))   
void phoneHelper(string& s,int ip_offset,unordered_map<char,string>& keyPad,string s1,vector<string> &result) {
    
    if ( k == s.length()) {
        
        result.push_back(s1);
        return;
    } 
    for (int i=k;i<s.length();i++) {
       string c = keyPad [ s[i] ];
       for (int j = 0;j< s.length();j++) { //iter candidates "12"
               s1.push_back(c[j]);       //abc
               phoneHelper(s,ip_offset + 1,keyPad,s1,result); 
               s1.pop_back();
       }
        
    }

}




vector<string> enumPhoneNumber (string& s) {
    
      vector<string> result;
      unordered_map<int,string> keyPad;
      keyPad['1'] = "abc";
      keyPad['2'] = "def";
      int k = 0;
      string s1 = "";
      phoneHelper(s,k,keypad,s1,result);
      return result;
}

