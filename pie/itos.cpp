#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//1 -> 1 % 10 + result = 1
//12 -> 12 % 10 + result = 2
string itos (int n) {
    
    string result = "";
    char store[256];
    memset(store,-1,sizeof(store));
    int idx = 0;
    while (n > 0) {
        char rem =  (n % 10 ) + '0';
        store[idx++] = rem;
        n = n / 10;
    }
    idx -= 1;
    
    while (idx >= 0) {
        result += store[idx--];
    }
    
    return result;
}


int main () {
    cout << itos (1231) << endl;
}
