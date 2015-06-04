#include<iostream>
#include<string>
#include<vector>
using namespace std;


int partition (vector<string>& s,int start,int end) {

   int pivot = end - 1;
   int i = start - 1;
   while (start < end) {
       
       if (s[start].compare(s[pivot]) > 0 ) {
           swap(s[start],s[++i]);
       }
       start++;
   }
   swap(s[++i],s[pivot]);
   return i;

}


int partition (vector<string>& s,int start,int end,int k) {

   int pivot = end - 1;
   int i = start - 1;
   while (start < end) {
       if (s[start].compare(s[pivot]) > 0 ) {
           swap(s[start],s[++i]);
       }
       start++;
   }
   swap(s[++i],s[pivot]);
   if ( i == k) {
       return s[i];
   } 
   if (i < k) {
       return partition (s,i+1,end,k);
   } 
   if (i > k)
       return partition (s,start,i,k);
}

void printList (vector<string>& l) {
    for (int i=0;i<l.size();i++) {
        cout << l[i] << ",";
    }
    cout << endl;

}

void sortString  (vector<string>& l,int start=0,int end=0) {

    start = 0;
    end = l.size();

    ///printList(l);
    
    if (start < end) {
        int p = partition (l,start,end);
        vector<string> uptoP (l.begin(),l.begin()+p);
        vector<string> afterP (l.begin()+p+1,l.end());
        sortString (uptoP);
        sortString (afterP);
        //sortString (l,start,p);
        //sortString (l,p+1,end);
    }
    
}


int main () {

    string sList [] = {"Hi","First","AB","CD","GHH"};

    vector<string> vList (sList,sList+sizeof(sList)/sizeof(sList[0]));
    printList(vList);
    int end = vList.size();
    sortString  (vList,0,end);
    printList(vList);
}
