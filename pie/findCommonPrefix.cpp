#include<iostream>
using namespace std;

//start and comapare each charcter

//find minString and compare with each
string findCommonPrefix(vector<string> sList) {

   int n = sList.size();
   int len = 0;   
   while (sList[0].length < len ) {
       char cmpChar = sList[0][len];
       int idx = 1;
       while ( idx < n && cmpChar == sList[indx][len]) {
           idx++;
       }
       if (idx < n) {
           break;
       }
       len++;
   }
   
   string tmpStr = sList[0];
   return tmpStr.substr(0,len);
}
