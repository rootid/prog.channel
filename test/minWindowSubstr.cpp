#include<iostream>
#include<string>
#include<cstring>
#include<limits.h>
#include<stdio.h>

using namespace std;

//sa
//ind vs ire vs aust vs sa
int findMinWindowSubstr(string s,string t) {
    int slen = s.length();
    int tlen = t.length();
    int minLen = INT_MAX;
    int howMany[256];
    int count = 0;
    memset(howMany,0,sizeof(howMany));
    
    int covered[256];
    memset(covered,0,sizeof(covered));

    int minEnd = 0;
    int minStart = 0;

    for (int i=0;i<tlen;i++) {
        howMany[t[i]]++;
    }

    for (int start=0,end=0; end < slen; end++) {
        if ( howMany[s[end]]  == 0) {
            continue;
        }
        covered[s[end]]++;
        count++;
        if (count >= tlen) {
            while (covered[s[start]] == 0 || covered[s[start]] > howMany[s[start]] ) {
                if (covered[s[start]] > howMany[s[start]] ) {
                    covered[s[start]]--;
                    count--;
                }
                start++;
                cout << "strt = " << start << endl;
            }
            minStart = start;
            minEnd = end;
        }
    }
   
    cout << " ( " << minStart << "," << minEnd << " ) " << endl;
    if (count != tlen ) {
        return minLen;
    } else {
        minLen = minEnd - minStart + 1 ;
    }
    return minLen ;
}

int main () {

    int result = findMinWindowSubstr ("ind vs ire vs aust vs sa","sa");
    cout << "the result = " << result << endl;

}


