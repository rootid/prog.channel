


oStack : //6 1 1 7 8 8 

mStack : //6 1 1  

S(n) : O(n)
T(n) : O(1)

class MinStack {


    private : 
        stack<int> oStack;
        stack<int> mStack;

    public :


    bool isEmpty () {
        oStack.isEmpty();
    }
    
    void push(int x) {
        oStack.push(x);
        if (mStack.isEmpty() || mStack.top() >= x) { 
            mStack.push(x);
        }
    }

    void pop() {
        if (!isEmpty(oStack)) {
            if (top() == mStack.top() ){
                mStack.pop();
            }
            oStack.pop();
        }
    }

    int top() {
        if (!isEmpty(oStack)) {
            oStack.top();
        }
       
    }

    int getMin() {
            
    if (!isEmpty(oStack)) {
            mStack.top();
        }
    }
}

//
