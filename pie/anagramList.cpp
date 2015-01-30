#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

//Given list of string split the strings for anagrams

//Give a string of words. Find anagram words and put them into the same list, then output the list of anagram words lists.
//input: [add, dad, care, race]
//output: [[add, dad], [care, race]]

vector<vector<string> > getAnagramList (vector<string>& sList) {
    //listing the vector
    vector< vector<string> > result;
    int n = sList.size();
    int idx = 0;
    unordered_map<string,int> contentDict;
    for (int i=0;i<n;i++) {
        string tmpStr = sList[i];
        vector<string> tmpResult;  
        tmpResult.clear();
        sort(tmpStr.begin(),tmpStr.end());
        
        if (contentDict.find(tmpStr) == contentDict.end() ) {
            contentDict[tmpStr] = idx;
            idx++;
            tmpResult.push_back(sList[i]);
            result.push_back(tmpResult);
        } else {
             int sIdx = contentDict[tmpStr];
             tmpResult = result[sIdx];
             tmpResult.push_back(sList[i]);  
             result [sIdx] = tmpResult;
        }
    }
    
    return result;
}


int getLc (int n) {
    return 2 * n;
}

int getRC (int n) {
    return (2 * n) + 1;
}

struct TrieNode {
    
    char val;
    TrieNode *child[R];
    int leafV ;
    TrieNode (char aVal,int aLeafV) :
        val (aVal),leafV (aLeafV)
    {
        
    };

};


int main () {
    
    string sList[] = {"add", "dad", "care", "race"};
    vector<string> resultList (sList,sList+sizeof(sList)/sizeof(sList[0]));
    vector<vector <string> > rList = getAnagramList (resultList);

    for (auto &p:rList) {
        vector<string> iV = p;
        for (auto &q:iV) {
            cout << q << ",";
        }
        cout << endl;
    }


}
