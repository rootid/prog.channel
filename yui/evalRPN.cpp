
//["2", "1", "+", "31", "*"]
//
//((2 + 1) * 3) = 9
//2,1,+,
//3,3,*
//9
//
//T //o(n) + O(1)
//S // O(n)
int evaluateRPN (vector<string>& e) {

    int result = 0;
    int len = e.size();
    stack<int> oStack;
    for (int i=0;i<len;i++) {
           
        if (e[i] == "*" || e[i] == "+" || e[i] == "/" || e[i] == "-") {
            
            int secondO = oStack.top();
            oStack.pop();
            int firstO = oStack.top();
            oStack.pop();
            int tmpResult = 0;
            string tmp = e[i];
            char r = tmp[0];
            switch (r) {
             case '*' :
                 tmpResult = firstO * seconO;
             break;   
               case '+' :
                 tmpResult = firstO + seconO;
             break; 
                case '/' :
                 tmpResult = firstO / seconO;
             break; 
                case '-' :
                 tmpResult = firstO - seconO;
             break; 
            }
            oStack.push(tmpResult);
            
        } else {
            //oStack.push(stoi(e[i]));
            oStack.push(atoi(e[i].c_str()));
        }
         
    }

    if (!oStack.empty()) {
        result = oStack.top();
        oStack.pop();
    }
    
    return result;

}
