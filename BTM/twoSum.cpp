#include<iostream>
#include<vector>
using namespace std;

vector<pair <int,int> > getTwoSum (int a[],int n,int sum) {

    vector<pair <int,int> > result;
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (sum == a[i] + a[j]) {
                result.push_back( pair(i,j) );
            }
        }
    }
    return result;
}

int main () {

}
