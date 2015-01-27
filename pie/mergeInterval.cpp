
//Given two sorted lists of ordered tuples, 
//combine them into one such that overlapping ranges are merged. 
//For example: [ (1,4) , (10, 15) , (20, 24) ] and [ (3, 5) , (16, 17), (21, 23) ] 
//becomes [ (1,5) , (10, 15) , (16, 17), (20, 24) ]  
//
//1  5
//1,4
//3,5


vector<pair> getMergedInterVal (vector<pair> &a,vector<pair>& b) {
    
    vector<pair> result;
    int m = a.size();
    int n = b.size();
    
    while (startM < m && startN < n) {
        
        
        int aStart = a[startM].first; 
        int aEnd = a[startM].second;
        
        int bStart = b[startN].first;
        int bEnd = b[startN].second;
        
        int minA = min (aStart,bStart);
        int maxA = max (aEnd,bEnd);
        
        if (minA <= aStart && minA <= bStart && maxA >= aEnd && maxA >= bEnd ) {
            result.push_back( pair(minA,maxA) );
            startM++;
            startN++;
        } else {
            if (minA == aStart) {
                startM++;
                 result.push_back( pair(minA,aEnd) );
            } else {
                startN++;
                result.push_back( pair(minA,bEnd) );
            }
        }
    }
    
    if (startM < m) {
        result.push_back( pair( a[startM].first, a[startM].second) );
        startM ++;
    }
    
    if (startN < n) {
         result.push_back( pair( a[startN].first, a[startN].second) );
         startN ++;
    } 
    return result;
}
