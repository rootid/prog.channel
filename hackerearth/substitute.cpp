#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<unordered_map>
using namespace std;


string solution (string &s) {
    
    int len = s.length();
    if ( len <= 1 ) {
        return s;
    }
    //ABBCC
    unordered_map<string,string> map_;
    map_["AB"] = "AA";
    map_["BA"] = "AA";
    map_["CB"] = "CC";
    map_["BC"] = "CC";
    map_["AA"] = "A";
    map_["CC"] = "C";

    stack<string> st;

    queue<string> st;
   
    for (int i=0;i<len;i+=2)  {
        if ( (len - i) >= 2 ) {
            st.push(s.substr(i,2));
        } else {
            st.push(s.substr(i));
        }
    }

    while ( !st.empty() ) {
        cout << st.top() << endl;
        if ()
        st.pop();
    }
       
   return s; 
}


int main () {
    
    string s = "ABBCC";
    solution (s);
}

