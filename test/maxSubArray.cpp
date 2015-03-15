#include<iostream>
using namespace std;

int maxSubArray(int A[], int n) {
    int maxSum = INT_MIN;
    int tmpSum = INT_MIN;
    for (int i=0;i<n;i++) {
        if (tmpSum < 0) {
            tmpSum = A[i];
        } else {
            tmpSum += A[i];
        }
        if (maxSum < tmpSum) {
            maxSum = tmpSum;
        }
        
    }
    return maxSum;
}


int main () {

}
