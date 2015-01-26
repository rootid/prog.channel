#include<iostream>
using namespace std;

// Find K closest points in a plane

//(a,b) 


struct Point {
    int x;
    int y;
    Point (int x,int y) :
     x(x),y(y) 
    {
    
    };
};

struct Metric {
    float distance;
    Point p;
    Metric (float dist,Point p) : 
       distance(dist),p (p)
    {
    
    };
};

int cmpDistnce (const Metric &one,const Metric &two) {
    return (one.distance - two.distance);
};

//(0,0)
//sort wrt x : (1,1) (2,4) (2,6) (2,3) (2,1) :distnce  
//sort wrt y : (1,1) (2,1) (2,3) (2,4) (2,6) : distance
//distace,point 
//sort 
//distance : (x2+y2)^1/2
//O(n) + O(k) : // O(n log n) : O(n log n) , O(n)

int partitition (vector<Metric> &result,int start,in end) {
        // start prev end      
        //left > pivotE < right 
        int pivotE = result[--end];
        int pivotI = end;
        int prev = start - 1;
        while (start < end) {
            if (result[start] < pivotE) {
                swap (result[start],result[++prev]);
            }
            start++;
        } 
       swap (result[++prev],result[pivotE]);
       return prev;
}
// S : O(n) T : O(n) 
vector<Point> findClosestNeighbour(vector<Point>& input,Point& start, int howMany){

    vector<Point> result;
    int tN = input.size();
    int startX =  start.x;
    int startY = start.y;
    vector<Metric> storeM;
    for (int i=0;i<tN;i++) {
        float dist = pow ( (input[i].x - startX) , 2) + pow (input[i].y - startY) , 2);
        dist = pow (dist,0.5);
        Metric *tmp = new Metric( dist,Point(input[i].x,input[i].y));
        storeM.push_back (tmp);
    } 
    int m = storeM.size();
    int k = partitition (storeM,0,m);
    while (k < howMany) {              // 0 ----k- k+1-- howMany ---k--end
      k = partitition (storeM,k+1,m);  
    }
    int i = 0;
    while (howMany != 0) {
        result.push_back (storeM[i++].p);
        howMany--;
    }
    
    return result;
}
