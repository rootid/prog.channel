#include<iostream>
#include<vector>
using namespace std;

//ex: 
//input 5,2,6,3,4,1,9,9,8,9,5 
//output: 2,3,4,8,9

int findIncreasingOrder (vector<int>& a) {
    
    int n = a.size();
    vector<int> prev (n+1,-1);
    vector<int> opt(n+1,0);
    int maxLen = 0;
    for (int i=1;i<n;i++) {
        prev[i] = -1;
        opt[i] = 1;   
        for (int j=0;j<i;j++) {
            if ( (opt[j] + 1 > opt[i]) && (a[j] < a[i]) ) {
            //Increasing subsequence sum 
            //if ( (a[i] > a[j]) && (a[i] < a[j] + a[i])  ) {
            // opt[i] = opt[j] + a[i];
                opt[i] = opt[j] + 1;
                prev[i] = j;
            }
        }
        
        if (maxLen < opt[i]) {
            maxLen = opt[i];
        }
       
    }
}


int main () {

}

