#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permuteString (string input,int k,vector<string>&sVec) {

    if (k == input.length() ){
        cout << input << endl;
        sVec.push_back(input);
        return;
    } 
    for (int i=k;i<input.length();i++) {            //abc 
        swap(input[i],input[k]);
        permuteString(input,k+1,sVec);
        swap(input[k],input[i]);
    }

}


int main () {
    
    string s = "hel";
    vector<string> op;
    permuteString (s,0,op);

    int len = op.size() ;
    cout << "The size " << len << endl;
}
