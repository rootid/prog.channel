#include<iostream>
#include<vector>
#include<utility>
using namespace std;

struct Input {
    int totalNumbers;
    //vector<int> val;
    //int val[totalNumbers];
};



int main () {
    int numberOfCases = 0;
    const int MOD_CONST = 10;
    cin >> numberOfCases;
    Input input[numberOfCases];
    int tmp = 0; 
    for (int i=0;i<numberOfCases;i++) {
        cin >> input[i].totalNumbers;
        int reserve[MOD_CONST];
        int count = 0;
        for (int k=0;k< MOD_CONST;k++) {
            reserve[k] = 0;
        }
        for (int j=0;j<input[i].totalNumbers;j++) {
            cin >> tmp;
            //input[i].val.push_back(tmp);
            int val_ = tmp%MOD_CONST;
            reserve[val_]++;
        }
        for (int k=0;k < MOD_CONST;k++) {
            if (reserve[k] > 1) {
                count += (reserve[k] - 1) ;
            }
        }
        cout << count << endl;
    }

}
