#include<iostream>

//Given 2 sorted array find min diff in O(n) time

//11 34 55 99
//1 10 34 58 98 100

//Use the merge part in the merge sort

int getMinDiff (int a1[],int int a2[],int m,int n) {
    int i = 0;
    int j = 0;
    int diff = INT_MAX;
    int tmpDiff = 0;
    while (i < m && j < n) {
       
        tmpDiff = abs (a1[i],a2[j]); 
        diff = min (tmpDiff,diff);
        if (diff == 0) {
            return diff;
        }

        if (a1[i] < a2[j] ) {
            i++;
        } else {
            j++;
        }
    }
    if (i < m) {
        j--;
        while (i < m) {
            tmpDiff = abs (a1[i],a2[j]); 
            diff = min (tmpDiff,diff);
            i++;
        }


    } else (j < n) {
        i--;
        while (j < n) {
            tmpDiff = abs (a1[i],a2[j]); 
            diff = min (tmpDiff,diff);
            i++;
        }

    }

}

int main () {
        
    int a[] = {1,9,30,55,60,90};
    int b[] = {0,5,12,20,32,59,90,91};
}

