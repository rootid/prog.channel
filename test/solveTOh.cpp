#include<iostream>
using namespace std;

void solveTOH (int n,int src,int dest,int mid) {
    
        if(n == 1) {
            cout << "move from src to dest" << n << endl;
            return;
        }
        solveTOH (n-1,src,mid,dest);
        cout << "move the TOH from src to dest" << endl;
        solveTOH (n-1,mid,dest,src);
}

int main () {

}
