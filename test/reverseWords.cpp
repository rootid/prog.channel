#include<iostream>

using namespace std;

//hi hello : ih olleh : hello hi
//hello hi
//hello hi : olleh ih : hi 


string reverseWords (string s) {
    //reverse the words
    int sIdx = 0;
    int eIdx = 0;
    int tIdx = 0;
    int len = s.length();
    
    //reverse all words
    while (tIdx <= len) { 
        while (tIdx < len && s[tIdx] != ' ') {
            tIdx++;
        }
        eIdx = tIdx - 1;
        //cout << s[eIdx] << "|" << endl;
        while (sIdx < eIdx) {
            swap(s[sIdx],s[eIdx]);
            sIdx++;
            eIdx--;
        }
        tIdx += 1;
        //cout << s[tIdx] << "|"  << s[tIdx + 1] << endl;
        sIdx = tIdx;
    }
    
    //reverse all line
    sIdx = 0;
    eIdx = len-1;
    while (sIdx < eIdx) {
        swap(s[sIdx++],s[eIdx--]);
    }  
    return s;
}

void test(string s) {
    cout << reverseWords(s) << endl ;
}

int main () {
    test("Hi hello");
    //test("Hello Hi");
}
