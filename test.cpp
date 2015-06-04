#include<iostream> 
#include<vector> 
using namespace std;


//put the pivot as the last element
//And inserted in middle
int partition (vector<int>& s,int start,int end,int k) {
    int pivot = end - 1;
    int i = start - 1;

    while (start < end) {
        cout << "start = " << start << ","  << " end = " << end  << "," << "i = " << i << "," << "k = " << k << endl;
        if (s[start] > s[pivot] ) {
            swap(s[start],s[++i]);
        }
        start++;
    }
    swap(s[++i],s[pivot]);
    if ( i == k) {
        return s[i];
    } 
    if (i < k) {
        return partition (s,i,end,k);
    } 
    if (i > k) {
       return partition (s,start,i,k);
    }
}

//Put the pivot as the first element
//
//Stored all elements in decreasing order
int partition (vector<int>& s,int start,int end,int k) {
    int pivotEle = s[start];
    int i = start;
    int j = end;

    while (i < j) {

        while ( i < j && s[j] <= pivotEle ) {
            j--;
        }
        s[i] = s[j];
        while ( i < j && s[i] >= pivotEle ) {
                i++;
        }
        s[j] = s[i];
    }
    s[i] = pivotEle;
    if ( i == k) {
        return s[i];
    } 
    if (i < k) {
        return partition (s,i+1,end,k);
    } 
    if (i > k) {
       return partition (s,start,i-1,k);
    }
}



int findKthLargest(vector<int>& nums, int k) {
    int end = nums.size();
    int result = partition (nums,0,end,k);
    cout << result << endl;
    return result;
}


int main () {
    int a[] = {2,1};
    int k = 1;

    //int a[] = {1};
    //int k = 1;
    vector<int> av(a,a+sizeof(a)/sizeof(a[0]));
    findKthLargest(av,k);
}
