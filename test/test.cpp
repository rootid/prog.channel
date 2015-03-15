#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int computeHash (string st) {
    int len = st.length();
    int hashv = 0; 
    for (int i=0;i<len;i++) {
        hashv = (hashv << 5) +  st[i];
    }
    return hashv;
}

void test (string st) {

    int hashV = computeHash (st);
    cout << " st = " << st << ", h = " << hashV << endl;
}

int main () {
    
    //unordered_map <int,int> tMap ;
    //tMap[10] = 34;
    //tMap[11] = 34;

    //for (auto &p : tMap) {
    //    cout << "(" << p.first << "," << p.second << ")" << endl;
    //}

    //cout << "--" << endl;
    //cout << tMap[10] << endl;
    test("ATGCGAAA");
    test("ATGCGAAG");
    test("ATGCGAAG");
    test("ATGCGAAA");
    //int hashV = computeHash (st);
    //cout << " st = " << st << ", h = " << hashV << endl;

}
