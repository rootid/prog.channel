#include<iostream>
#include<vector>

using namespace std;

int countTrees (int n) {
    
    vector<int> G (n+1,1);
    G[0] = 1;
    G[1] = 1;

    for (int i=2;i<=n;i++) {
        cout << i << "   " ;
        for (int j=0;j<i;j++) {
            G[i] += G[j] * G[i-j];
            cout << j << " " ;
        }
        cout << endl;
    }
    
    return G[n];

}

int main () {

    cout << countTrees  (4) << endl;
}
