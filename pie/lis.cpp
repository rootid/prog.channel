#include<iostream>
using namespace std;


//Go from left to right 
int findLIS (int a[],int n) {

    if (n <= 1) {
        return n;
    }
    int maxLen = 1;
    for (int i=0;i<n-1;i++) {
        int prev = a[i];
        int tmpMx = 1;
        for (int j=i+1;j<n;j++) {
            if (prev <= a[j]) {
                tmpMx++;
            }
        }
        if (tmpMx > maxLen) {
            maxLen = tmpMx;
        }
    }
    cout << "LIS = " << maxLen << endl;
    return maxLen;
}

//Go from right to left
int findLISRL (int a[],int n) {

    if (n <= 1) {
        return n;
    }
    int maxLen = 0;
    for (int i=1;i<n;i++) {
        int next = a[i];
        int tmpMx = 1;
        for (int j= i-1;j >=0 ;j--) {
            if (next > a[j]) {
                tmpMx++;
            }
        }
        if (tmpMx > maxLen) {
            maxLen = tmpMx;
        }
    }

    cout << "LIS RL = " << maxLen << endl;
    return maxLen;
}

int main () {
    int a[] = {9,2,1,3,9,5};
    int len = sizeof(a)/sizeof(a[0]);

    findLISRL (a,len);

    findLIS (a,len);

}
