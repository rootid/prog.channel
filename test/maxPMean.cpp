#include<iostream>
#include<algorithm>

using namespace std;

//Given an array of n integers, return the maximum PMEAN of all possible array rotations, 
//where PMEAN = the sum of each integer multiplied by its current location (index + 1).
//
//For example:
//
//The PMEANs for every rotation of the array {20, 30, 10} are:
//
//PMEAN1 = (1 * 20) + (2 * 30) + (3 * 10) = 110
//PMEAN2 = (1 * 30) + (2 * 10) + (3 * 20) = 110
//PMEAN3 = (1 * 10) + (2 * 20) + (3 * 30) = 140
//
//The max PMEAN of array {20, 30, 10} is 140.
//The question is simple enough. I was able to get a working algorithm quick enough, but I failed to optimize my answer. 
//Hint from the interviewer: 
//If you have PMEANn, how can you use the result to get PMEANn+1?

int maxPMeanLin (int a[],int n,int result) {

    int sum = 0;
    int pMean = 0;
    for (int i=0;i<n;i++) {
        sum += a[i];  
        pMean = a[i] * (i+1);
    }
    int bestM = pMean;
    
    for (int i=0;i<n-1;i++) {
        pMean -= sum;
        pMean += (a[i] * n);
        if (bestM < pMean) {
            pMean = bestM;
        }
        
    }
    
    return pMean;
    
    
}



int maxPMean (int a[],int n,int result) {

    int len = a.size();
    sort(a,a+n);
    
    pmean = 0;
    for (int i=0;i<len;i++) {
        pmean = a[i] * (i+1);
    }

    return pmean;
}
 


int main () {
    
    int a[] = {5,3,9};
    int n = sizeof(a)/sizeof(a[0]);
    sort (a,a+n);
    int r = sumArray (a,n);
    cout << "result = " << r << endl;
}
