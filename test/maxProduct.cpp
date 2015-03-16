#include<iostream>



//maximum product subarray 

//[2,3,-2,4]
//the contiguous subarray [2,3] has the largest product = 6.

int getContProduct (int a[],int n) {
    
    int mx = a[0];
    int mn = a[0];
    int maxNum = a[0];
    int tmp = a[0];
    for (int i=1;i<n;i++) {
      tmp = mx;
      mx = max ( max(tmp* a[i], a[i] * mn),a[i]);
      mn = min( min (tmp*a[i],a[i]*mn),a[i]);
      maxNum = max (mx,mn);
    }
    return maxSum;
}



int main () {

}
