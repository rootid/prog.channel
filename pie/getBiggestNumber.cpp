#include<iostream>
#include<limits.h>
using namespace std;

//Given array arrange numbers to form Biggest number 
//int[] = {3,9,6,5}
//      = {9,3,6,5}
//9653

//O(n log n)
int getBiggestNumber (vector <int> a) {

     sort(a.begin(),a.end(),greater<int>);
     int len = a.size();
     
     int result = 0;
     int start = 0;
     while (start < len) {
        result = result * 10 + a[start];
        start++;
     }
     
     return result;
}

//O(n)
int getBiggestNumber (int a[],int n) {
    
    char bV [1024]; //1024*8 //[1 2 3 4 6 7 8] [9 10 12 13] [] []
    memset(bV,0,sizeof(bV));
    
    int max = INT_MIN;
    for (int i=0;i<n;i++) {
        if (max < a[i]) {
            max = a[i];
        }
       int prIdx = a[i] / 8;
       int secIdx = a[i] % 8;
       bv [prIdx] |= 1 << secIdx;
    }
      int result = 0;
    //3,9,6,5 -> 3,5,6,9
    int pIdx = max / 8;   
    for (int i = pIdx;i >= 0;i--) {
         char range = bv[i];
         int secIdx = 0;
         int n = sizeof (char);
         while (n >= 0) {
             if (range & (1 << (sizeof(char) - n) ) ) {
                 secIdx = sizeof(char) - n;
                 int number = i + secIdx;   
                 result = result * 10 + number;
             }
             n--;
         }
    }
    return result;    
}


int main () {


}
