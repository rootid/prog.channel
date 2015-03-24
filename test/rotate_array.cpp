#include<iostream>
using namespace std;

//[1,2,3] 4 [,5,6,7]
//
//0      3  4     7
//[4,3,2,1] 4 [7,6,5]
//
//[5,6,7,1,2,3,4]
//3
//
//[5,6,7,1,2,3,4]
//
//
//[1,2] : k : 1
// 
// [2,1]
// 
// [2,1]
// [1,2]

void swapElem (int a[],int start,int end) {
    
   while (start < end) {
      swap(a[start++],a[end--]);
  }  

}

void rotateArray (int a[],int n,int k) {

  swapElem(a,0,k-1);    // O(n/2) 
  swapElem(a,k,n-1);   // O(n/2)
  swapElem(a,0,n-1);     // O(n)
}


int main () {
    
}
