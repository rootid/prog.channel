#include<iostream>
using namespace std;

//Pick the item or don't pick the item (2^n)
int getMaxValueFromKnapSack (int W,int wt[],int val[],int n) {
    if (n == 0 || W == 0) {
        return 0;
    }
    
    if (wt[n-1] > W) {
        return (W,wt,val,n-1);
    }
    return max (  val[n-1] + getMaxValueFromKnapSack (W-wt[n-1],wt,val,n-1) 
                ,getMaxValueFromKnapSack (W,wt,val,n-1) );

}

int main () {

}
