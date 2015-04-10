#include<iostream>
using namespace std;

int sort () {
    
    char a [] = { 'd','a','b','c','d' };

    int len = sizeof(a)/sizeof(a[0]);
    for (int i=0;i<len;i++) {
        cout << a[i]+1 << " ";
    }


}

int main () {
    sort ();
}
