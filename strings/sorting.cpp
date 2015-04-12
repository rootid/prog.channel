#include<iostream>
using namespace std;


void print(int a[],int len) {
    for (int i=0;i<len;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort(int a[],int len) {
    
    for (int i=0;i<len;i++) {
        for (int j=i;j>0;j--) {
            if (a[j] < a[j-1]) {
                swap(a[j],a[j-1]);
            } else {
                break;
            }
        }
    }

}

void selectionSort(int a[],int len) {

    for (int i=0;i<len;i++) {
        int minIdx = i;
        for (int j=i+1;j<len;j++) {
            if (a[minIdx] > a[j]) {
                minIdx = j;
            }
        }
        swap(a[minIdx],a[i]);
    }

}

int main () {
    int a [] = {10,-3,90,-4,4,10,100,120,3,5};
    int len = sizeof(a)/sizeof(a[0]);
    print (a,len);
    //selectionSort(a,len);
    insertionSort (a,len);
    print (a,len);
}
