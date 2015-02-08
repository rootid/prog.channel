
queue using 2 stacks

//queue 

//insert : O(1)

//delete : pop elements from stack1 and put to the stack2 O(n)

struct Queue {

    stack<int> stack1;
    stack<int> stack2;
    void insertEle (int ele);
    int deleteEle ();
    bool isEmpty();
};


void Queue  :: insert (int ele) {
    stack.push(ele);
}

//1 2 3 4 5 
//S1 // 3 2   1
//S2 // 2  3      
insertion :S1 // 3 2 

int Queue  ::delete () {
    if (stack1.empty() ) {
        return INT_MIN;
    }
       //O(n)
        while (!stack1.empty()) {
            int tmp = stack1.top();
            stack2.push(tmp);
            stack1.pop();
        }
        
        int rElem = stack2.top();
        stack2.pop();
        
        while (!stack2.empty()) {
            int tmp = stack2.top();
            stack1.push(tmp);
            stack2.pop();
        }
    
       return rEle;    
   
    
}
