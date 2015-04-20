#include<stdio.h>
#include<iostream>
#include<string.h>
#include<limits.h>
#include<string>
#include<vector>

using namespace std;


string expandAroundCenter(string s, int c1, int c2) {
  int l = c1, r = c2;
  int n = s.length();
  while (l >= 0 && r <= n-1 && s[l] == s[r]) {
    l--;
    r++;
  }
  return s.substr(l+1, r-l-1);
}
 
int longestPalindromeSimple(string s) {
  int n = s.length();
  if (n == 0) return 0;
  string longest = s.substr(0, 1);  // a single char itself is a palindrome
  for (int i = 0; i < n-1; i++) {
    string p1 = expandAroundCenter(s, i, i);
    if (p1.length() > longest.length())
      longest = p1;
 
    string p2 = expandAroundCenter(s, i, i+1);
    if (p2.length() > longest.length())
      longest = p2;
  }
  return longest.length();
}

void enumCombination (string s,int k,vector<int>& cand, vector<string> &result) {

    int len = s.length();
    if (k == len) {
        string tmpResult = "";
        for (int i=0;i<len;i++) {
            if (cand[i] == 0) {
                tmpResult += s[i];
            }
        }
        result.push_back(tmpResult);   
        return; 
    }
    cand[k] = 1;
    enumCombination (s,k+1,cand,result);
    cand[k] = 0;
    enumCombination (s,k+1,cand,result);
}

int PalindromeLengthPuzzle(char* s[])
{
	//Write code here
        int len = 0;
        while(s[++len] != NULL);
	string s1 = "";
	for (int i=0;i<len;i++) {
	   s1 += s[i][0];
	
	}
	vector<string> s2V;
        vector<int> cand (s1.length(),0);
        enumCombination (s1,0,cand,s2V);
	int maxL = INT_MIN;
	for (int i=0;i<s2V.size();i++) {
	    int tmpLen = longestPalindromeSimple(s2V[i]);
	    maxL = max(maxL,tmpLen);
	}
	 
        return maxL;
	
}

int main () {

    char *s [] = {"Bharatu","Bharati","Ak","Bh","Ch","Bri","Che","Arva","Bha"};
    int l = PalindromeLengthPuzzle (s) ;
    cout << "the len =  " << l << endl;
}
