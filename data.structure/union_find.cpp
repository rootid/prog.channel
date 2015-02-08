#include<iostream>
#include<utility>
#include<vector>
using namespace std;

//Union find data structure that tells us whether there is connection between nodes 
//if there exists connection don't connect the nodes.
//It creates DAG (Directed Acyclic Graph)

struct UF {
    int count;   //number of components in graph
    int* idStore; // access site indexed array
    int totalSize;
    UF(int N) : 
        count(N),totalSize (N)
    {
        idStore = new int[count];
        for (int i=0;i<count;i++) {
            idStore [i] = i;
        }
    };
    void putUnion(int p, int q); //add connection between p and q
    int find(int p);             //quick-find , quick-union ,  weighted
    bool isConnected(int p, int q);
};

//This creates DAG structure so need to discard the connection that leads to cycle so will check 
//whether there is connection between the 2 nodes
void UF::putUnion (int p,int q) {
    int pID = find(p);
    int qID = find(q);
    // Nothing to do if p and q are already in the same component.
    if (pID == qID) return;
    // Rename p’s component to q’s name.
    for (int i = 0; i < totalSize ; i++) {
         if (idStore[i] == pID) { 
             idStore[i] = qID;
         }
    }
    count--;
}

int UF :: find(int p) {
    return idStore[p];
}

bool UF :: isConnected (int p,int q) {
    return (find(p) == find(q)) ;
}


int main () {

    vector <pair <int,int> > storeV;
    storeV.push_back(make_pair(4,3));
    storeV.push_back(make_pair(3,8));
    storeV.push_back(make_pair(6,5));
    storeV.push_back(make_pair(2,1));
    storeV.push_back(make_pair(5,0));
    storeV.push_back(make_pair(7,2));
    storeV.push_back(make_pair(6,1));
    storeV.push_back(make_pair(8,9));
    storeV.push_back(make_pair(1,0));
    storeV.push_back(make_pair(6,7));
    storeV.push_back(make_pair(4,9));

    UF uf(storeV.size());
    for (int i=0;i<uf.totalSize;i++) {
        int p = storeV[i].first;
        int q = storeV[i].second;
        if (uf.isConnected (p,q) ) {
            cout << " ( " << p << "," << q << " ) are connected."  << endl;
            continue;
        }
        uf.putUnion(p,q);
    }

    //    1 8 3   5
    //0 1 2 3 4 5 6 7 8 9 
}
