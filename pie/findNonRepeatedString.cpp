#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

//aaabbcde
string LongestSubstringWithoutRepeatingChar (string s) {

    //unique (start,MaxLen) = total string
    //accounting mechinesm 
    int start = 0;
    int maxLen = 0;
    int end = s.length();
    int tmpStart = 0;  
    int current = 0;
    char store [256];
    //transform(s[0],s[end-1],s[0],::tolower);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    memset(store,0,sizeof(store));
    
    while (current < end) {
        if ( store [ s[current] - 'a'] == 0) {
            store [s [current] ] = 1;
        } else {
            //memset(store,0,sizeof(store[0])* 256);
            memset(store,0,sizeof(store));
            if  ( (current - tmpStart) > maxLen ) {
                maxLen = current - tmpStart;
                start = tmpStart;
            } 
            //Reset everything
            tmpStart = current;
            store [s [current] ] = 1;
        }
        current++;
    }
    
    if  ( (current - tmpStart) > maxLen ) {
                maxLen = current - tmpStart;
                start = tmpStart;
         }
            
    return s.substr(start,maxLen);        
}


int main () {
}
