
//merge sorted array

//1 2 3 4
//4 5 6
//S : O(m+n)
//T : O(m+n)
vector<int> merge (vector<int>& f,vector<int>& s ) {

    int len1 = f.size();
    int len2 = s.size();
    vector<int> result;
    int fIdx = 0;
    int sIdx = 0;
    while (fIdx < len1 && sIdx < len2 ) {
        int tmpN = 0;
        if (f[fIdx] <= s[sIdx]) {
           tmpN = f[fIdx];
           fIdx++;  
        } else {
            tmpN = s[sIdx];
            sIdx++;
        }
        result.push_back(tmpN);
    }
    
    while (fIdx < len1) {
        result.push_back(f[fIdx]);
        fIdx++;
    }
    
    while (sIdx < len2) {
        result.push_back(s[sIdx]);
        sIdx++;  
    }
    
    return result;
}
