#include<iostream>
using namespace std;

bool binSearch (int a[],int key,int start,int end) {
    
     if (start < end) {
         int mid = start + (end - start)/2;
         if (key == a[mid] ) {
             return true;
         } else if (key < a[mid]) {
             binSearch (a,key,start,mid-1);
         }else {
             binSearch (a,key,mid+1,end);
         }
     } else {
         return false;
     }
}


bool binSearchI (int a[],int key,int n) {
    int start = 0;
    int end = n;
    while (start < end){
         int mid = start + (end - start)/2;
         if (key == a[mid] ) {
             return true;
         } else if (key < a[mid]) {
            end = mid - 1;
         }else {
           start = mid + 1;
         }
    }
    return false;
}


int main () {

}
