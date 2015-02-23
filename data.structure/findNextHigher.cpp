
/*
     * Given a number,find the next higher number using the same digits in the
     * number. Eg- 15432, Soln- 21345
     */
     
//15432 : 21345
//99
//567 657
//412 421
//445 : 544  
//6564531 : :6 (firstMX - digit) < diff 
//445
 
int getNextHigher (int number)  {

    if (number/10 <= 1) {
        return number;
    }
    
    string numberStr = "";
    int idx = 0;
    int tmp = number;
    int diff = INT_MAX;
    int fMinIDx = 0
    int sMinIDx = 0;
    int fMX = 0;
    while (tmp != 0 ) {
        int digit = tmp % 10;
        if (fMin > digit) {
            fMin = digit;
            fMinIDx = idx;
        } else if ( (digit - fMin) < diff ) {
            diff = fMx - digit;
            sMinIDx = idx;
        }
        idx++;
        char digitChar = digit + '0';
        numberStr.push(digitchar)
        tmp /= 10;
    }
    //O(n)
    //sort (numberStr.begin(),numberStr.end());
    swap(numberStr[fMinIDx],numberStr[sMinIDx]);
    
    int opNo= 0;
   
    for (int i=0;i<numberStr.length();i++) {
        int tmp_ = (opNo * 10 + numberStr[i]);
        op += tmp_;
    }
    
    return opNo;
} 
     
     
     
