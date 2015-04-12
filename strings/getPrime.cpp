
//1:100
//T (n) : O(n^2)

bool getPrimeHelper (int n) {

    int len = n - 1;
    if (n == 1) {
        return false;
    }

    //optmize
    if ( (n%2) == 0 && n != 2) {
        return true;
    }
    if ( (n%3) == 0 && n != 3) {
        return true;
    }
    if ( (n%5) == 0 && n != 5) {
        return true;
    }
  
        
    while (len > 1) {
        if ( (n % len) == 0 ) {
            return false;
        }
        len--;
    }
    return true
}

void getPrime (int from,int to) {

    for (int i=from;i<to;i++) {
        if (getPrimeHelper (i) == true ) {
            cout << i << ",";
        }
    }
    
    cout << endl;
}
