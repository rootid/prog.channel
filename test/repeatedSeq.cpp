
All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.

Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.

For example,

Given s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT",

Return:
["AAAAACCCCC", "CCCCCAAAAA"].


vector<string> findRepeatedSeq (string s,int sLen = 10) {
    
    vector<string> result;
    hash<string> hash_fn;
    int len = s.length();
    if (len < sLen) {
        return result;
    }
    
    //unordered_set<string> storeV;
    unordered_map<int,int> storeH;
    for (int i=0;i<len-sLen;i++) {
        string tmp = s.substr(i,sLen); 
        int hashV = hash_fn(tmp);
        if (storeH[hashV]++ == 1) {
            result.push_back(tmp);
        }
        
       // if (storeV.find(tmp) == storeV.end()) {
       //     storeV.insert(tmp);
       // } else {
       //     result.push_back(tmp);
       // }
    }
    
    return result;
}
