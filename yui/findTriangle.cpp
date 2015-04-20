#include<iostream>
using namespace std;

//find triangle from list (no is larger than other than 2 nos)
struct Triangle {
    int a;
    int b;
    int c;
    Triangle (int a,int b,int c) :
        a(a),b(b),c(c)
    {
    
    }
    
};

vector<Triangle> findTriangleList (vector<int>& lst) {
    vector<Triangle> triList;
    sort(lst.begin(),lst.end());
    int n = lst.size();
    for (int i=0;i<n - 1;i++) {
        int a = lst[i];
        int start = i + 1;
        int end = n - 1;
        while (start < end) {
            if ( lst[start] + a < a[end] || lst[end]+a < a[start] ) {
               triList.push_back(new Triangle(lst[start],a,lst[end]));   
               start += 1;
               end -= 1;
            } else {
                start += 1; // all are equal
            }
        }      
   }
}

int main () {

}
