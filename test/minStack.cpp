#include<iostream>
#include<stack>
using namespace std;

struct MStack {
    stack<int> mStack;
    stack<int> pStack;

    MStack (int capacity)  
    {
        //stack<int> mstack(capacity,-1);
        //pStack = new stack<int> (capacity);
    };
};

//O(1)
int getMin (MStack &m) {

    int min = m.mStack.top();
    m.mStack.pop();    
    return min;
}

int pop (MStack &m) {
   
   int min = m.mStack.top();
   
   while (m.pStack.top() == min) {
        m.mStack.pop();
    }
    m.pStack.pop();    
}


bool push (MStack &m,int i) {

    int moveCnt = 0;
  
    
    if (m.mStack.empty() && m.pStack.empty()) {
        m.mStack.push(i);
    } else {
        if (m.mStack.top() >= i) {
            m.mStack.push(i);  
        }
    }
    m.pStack.push(i);
    return true;
}

int main () {

}
