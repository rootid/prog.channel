#include<iostream>
#include<vector>
#include<utility>
using namespace std;

//Given parent,child : first find parent and then do BFS with parent and print the nodes

//It's about a list of parent/child pairs, then print out the family tree.
//input: [<a,b>,<b,c>,<a,e>]
//output:
// a 
//e  b
//    c
//

void printTree (vector<pair <int,int> > &tList) {

    //find the parent : w/o any ancestor
    int len = tList.length();
    unordered_set <int> childSet;
    for (int i=0;i<len;i++) {
        childSet.insert(tList[i].second);
    }
    
    int rootIdx = -1;
    for (int i=0;i<len;i++) {
        if (childSet.find(tList[i].first) == childSet.end() ) {
            rootIdx = i;
            break;
        }
    }
    
    swap (tList[0],tList[rootIdx]);
    queue<pair <int,int> > bfsQ;
    
    bfsQ.push (tList[0]);
    int currentV = 1;
    int nextV = 0;
    int visited(len,0);
    visited[0] = 1;
    while (!bfsQ.empty()) {
        int parent = bfsQ.front().first;
        int child = bfsQ.front().second;
        cout << parent << " ";
        for (int i =0;i<len;i++) {
            if (visited[i] == 1) {
                continue;
            } else {
                if (tList[i].first == parent || tList[i].first == child) {
                    bfQ.push(tList[i].second);
                    nextV++;
                } 
                visited[i] = 1;
            }
        }
       
        
        if (currV == 0) {
            cout << endl;
            currV = nextV;
            nextV = 0;
        }
        bfsQ.pop();
    }
    
}
