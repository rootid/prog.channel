
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int lonelyinteger(vector < int > a) {
        
    int len = a.size();
    unordered_set <int> u_set;
    for (int i=0;i<len;i++) {
        if (u_set.find(a[i]) == u_set.end ()) {
            u_set.insert(a[i]);
        } else {
            u_set.erase(a[i]);
        }
    }

    for (auto &a:u_set) {
        return a;
    }
   return 0;
}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
