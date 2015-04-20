#include<iostream>
using namespace std;

//  {a,    b,      c} 
// (1,0) ,(1,0) , (1,0)


void enumSet (vector<char>&s,int k,vector<bool>&c,vector< vector<char> >& result)  {

    int tlen = s.size();
    if (k == tlen) {
        int len = c.size();
        vector<char> tmpV;
        for (int i=0;i<len;i++) {
            if (c[i] == true) {
             tmpV.push_back(s[i]);   
            }
        }        
        result.push_back(tmpV);
        return;
    }
    
    for (int i=k;i<tlen;i++) {
        c[i] = true;
        enumSet (s,k+1,c,result);
        c[i] = false;
        enumSet (s,k+1,c,result);
    }

}

//O(2n!) 
//O(n!) + O(n!) 
//3! = 3 X 2 = 6 
//t t t  :  c[0] = true (b,c)   
//f,t,t
//t,f,t  
//t,t,f
//f,t,t
//f,f,t
//f,f,f
