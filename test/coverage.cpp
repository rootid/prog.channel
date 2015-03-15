#include<iostream>
#include<vector>
using namespace std;

//Modification of merge interval 

//interval length

//(1,4) (-2,3) [9,10)

//coverage 7

struct Interval {
    int first;
    int second;
    Interval (int f,int s) : 
        first(f),second(s)
    {
        
    }
};

//sort by the first number
struct IComparator {
      bool operator() (const Interval &a,const Interval &b) {
          return (a.first > b.first);
      }  
};

bool Comp(const Interval &a, const Interval &b){
        return a.start < b.start;
};


int findCoverage (vector<Interval> &s ) {

    sort (s.begin(),s.end(),ICompartor());
    
    //sort (s.begin(),s.end(),Comp);
    int len = s.size();
    int coverage = 0;
    if (len == 0) {
        return coverage;
    }
    
    int low = s[0].first;
    int high = s[0].second;
    coverage = (high - low);   
    int tmpCoverage = 0;
    
    for (int i=1;i<len;i++) {
        int tmpLow = s[i].first;
        int tmpHigh = s[i].second;
        if (tmpLow < high) {
            //think of (1,5) (3,7) AND (1,7) , (3,5)
            tmpCoverage = max(tmpHigh,high) - low;
            high = max(tmpHigh,high);
        } else {
            low = tmpLow;
            high = tmpHigh;
        }
        if (tmpCoverage > coverage) {
            coverage = tmpCoverage;
        }
        
    }
    return coverage;
    
}
