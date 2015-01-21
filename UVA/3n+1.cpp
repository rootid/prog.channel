#include <iostream>
#include <algorithm>
using namespace std;

//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=29&page=show_problem&problem=36

//Sample Input
//1 10
//100 200
//201 210
//900 1000

//Sample Output
//1 10 20
//100 200 125
//201 210 89
//900 1000 174

void solve3nPlusOne (int i,int j) {
    int max_cycle_len = 0;
    int tmp_cycle_len = 0;
    int tmp_i= i;
    int tmp_j = j;
    if (i > j) { 
        swap (i, j);
    }
    while ( i <= j ) {
        int n = i;
        tmp_cycle_len = 1;
        while (n != 1) {
            if ( (n & 1) == 1)  { //if n is odd
                n = 3 * n + 1;
            } else {
                n = n >> 1;
            }
            tmp_cycle_len++;
        }
        max_cycle_len = max (max_cycle_len,tmp_cycle_len);
        i++;
    }
    cout << tmp_i << " "  << tmp_j  << " " << max_cycle_len << endl;
}


int main () {

    solve3nPlusOne (1,10);
    solve3nPlusOne (100,200);

}
