#include<iostream>
#include<vector>
#include<utility>
using namespace std;

//Naive solution O(2^n)
void getPandaSubsets(vector<int>& s,int k,vector<int> &cand,vector<pair<vector<int>,vector<int> > > & result) {

    if ( k == s.size() ) {
        vector<int> first;
        vector<int> second;
        for (int i=0;i<k;i++) {
            if (cand[i] == 1) {
                first.push_back(s[i]);
            } else {
                second.push_back(s[i]);
            }
        }
        result.push_back(make_pair(first,second));
        //cout << endl;
        return;
    }
    cand[k] = 1;
    getPandaSubsets(s,k+1,cand,result);
    cand[k] = 0;
    getPandaSubsets(s,k+1,cand,result);
}

void getPandaSolutionSet ( vector< pair<vector<int>,vector<int> > >& pandaPairs
        ,vector< pair<vector<int>,vector<int> > >& pandaSolution,int len) {
    
    for (int i=0;i<pandaPairs.size();i++) {
        vector<int> first = pandaPairs[i].first;
        vector<int> second = pandaPairs[i].second;
        if (first.size() == len || first.size() == 0) {
            continue;
        }
        int firstResult = first[0];
        int secondResult = second[0];
        for (int j = 1 ;j < first.size(); j++) {
            firstResult ^= first[j];
        }
        for (int k = 1 ;k < second.size(); k++) {
            secondResult ^= second[k] ;
        }
        if (firstResult == secondResult) {
            pandaSolution.push_back(pandaPairs[i]);
        }
    }

}


int main () {

    int a[] = {1,2,3};
    vector<int> av(a,a+sizeof(a)/sizeof(a[0]));
    int k = 0;
    int len = sizeof(a)/sizeof(a[0]);
    vector<int> cand(len+1,0);
    vector< pair<vector<int>,vector<int> > > pandaPairs;
    vector< pair<vector<int>,vector<int> > > pandaSolution;
    getPandaSubsets(av,k,cand,pandaPairs);
    getPandaSolutionSet (pandaPairs,pandaSolution,len);
    cout << "Total # of subsets " << pandaSolution.size() / 2 << endl;
}
