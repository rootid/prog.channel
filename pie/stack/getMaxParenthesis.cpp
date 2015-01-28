#include<iostream>
#include<stack>
using namespace std;


//()()() : 0,1,2,3,4,5
int maxParenthesis (string& s) {
    
    int end = s.length();
    int start = 0;
    stack<int> storeStack;
    int maxLen = 0;
    while (start < end) {
        
        if (s[start] == '(' ) {
            storeStack.push (start);
        } else {
         //right parenthesis found
          int topIdx = -1;             //If only one parenthesis  
          if( !storeStack.empty() && s [storeStack.top()] == '(' ) {
              storeStack.pop();
              if (!storeStack.empty() ) {     //Pop only once
                  topIdx = storeStack.top (); // 
                  //storeStack.pop(); //(( ) ) )))))
              }
              maxLen = max (maxLen , (start - topIdx) );
           }
           else {
               storeStack.push(start);
           }
        }
       start++;        
    }

}

int main () {

}
