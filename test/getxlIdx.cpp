#include<iostream>
using namespace std;




//A, b, c, d, ... AA, AB
//1,2 3 4      ...27
//1-26 : 
//A     A: 
//1+26  1
int titleToNumber(string s) {
       int step  = 1;
       int colIdx = 0;
       for ( int i = s.length()-1; i >= 0; i-- )
       {
           colIdx += ( s[i] - 'A' + 1 ) * step;
           step *=  ('Z' - 'A') + 1 ;
       }
       return colIdx;
   }
