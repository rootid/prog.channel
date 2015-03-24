#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertToHeap () {

}

int main () {

    vector<int> minHeap;
    vector<int> maxHeap;

    int n = 4;
    for (int i=0;i<n;i++) {
        maxHeap.push_back(i);
        //push_heap(minHeap.begin(),minHeap.end(),greater<int>()); 
        push_heap(maxHeap.begin(),maxHeap.end(),less<int>()); 
    }

    for (int i=0;i<n;i++) {
        cout << maxHeap[i] << " ";
    }
    cout << endl;

}
