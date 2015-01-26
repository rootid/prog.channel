#include<string>
#include<iostream>
using namespace std;

//bbbc bded
string removeSpecificChar (string s,char r) {
    
    int prev = -1;
    int start = 0;
    int len = s.length();
    while (start < len) {
        if (s[start] != r) {
            swap(s[++prev],s[start]);
        }
        start++;
    }
    return s.substr(0,prev+1); 
}

int main () {

}
