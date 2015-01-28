#include<iostream>
#include<vector>
using namespace std;

//Get maximal rectangle histogram
//2,1,5,6,2,3 => (10)

//top () < current (5,6) = width * ht
//
//top () > current (2,1)


int getMaximumRectangleHist (vector<int>& rect) {
    int n = rect.size();
    int mxRectSize;
    stack<int> storeStack;
    int start = 0;
    while (start < n ) {
        if (storeStack.empty()) {
            storeStack.push(start);
        }else {   
           if ( rect[storeStack.top()] <= rect[start] ) {
                storeStack.push(start);
           } else {
              while (!storeStack.empty() && rect[start] < rect[storeStack.top()] )   {         
                  int topIdx = storeStack.top ();
                  storeStack.pop();
                  int rectA = 0;
                  if (storeStack.empty()) {
                      rectA =  start  * rect[topIdx];
                  } else {
                      rectA = start - 1 - topIdx * rect[topIdx];
                  }
                  maxRectSize = max(rectA,maxRectSize); 
              }                
              storeStack.push(start);     
           }
        }
        start++;
    }
    while (!storeStack.empty() )   {         
         int topIdx = storeStack.top ();
         storeStack.pop();
         int rectA = 0;
         if (storeStack.empty()) {
             rectA =  start  * rect[topIdx];
          } else {
             rectA = start - 1 - topIdx * rect[topIdx];
          }
         maxRectSize = max(rectA,maxRectSize); 
      }
      
    return mxRectSize;
}
