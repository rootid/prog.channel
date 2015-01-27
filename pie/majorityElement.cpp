#include<iostream>
using namespace std;
//1112222
//if (vc == 0) {
//    vc = 1;
//    maj = a[current];
//}
//vc++ if maj === a[current]
//else vc--
//caveat: # must be > 50%
int getMajorityElement (int a[],int n) {
    
    int vc = 0;
    int majEle = 0;
    for (int i=0;i<n;i++) {
       
       if (vc == 0) {
           vc = 1;
           majEle = a[i];
       } else if (a[i] == majEle) {
           vc++;
       } else {
           vc--;
       }
    }
    
    return majEle;
}
