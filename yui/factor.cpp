#include<iostream>
#include<string>
using namespace std;

void computeFactor (string expr,int dividend,int prevFactor) {
    for (int factor = dividend - 1; factor >= 2; --factor)  {  
        if (dividend % factor == 0 && factor <= prevFactor)  {  
            // found 2 factors  
            int nextFactor = dividend / factor;  
            // try printing only if secondfactor is smaller (i.e. descending order)  
            if (nextFactor <= factor)  {  
               if (nextFactor <= prevFactor)  
               {  
                  cout << "(" << factor  << " * " <<  nextFactor <<")" << endl;  
               }  
            }  
            computeFactor("", nextFactor, factor);  
        }
    }
}

int main () {

    computeFactor ("",12,12);
}
         
