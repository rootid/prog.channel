#include<iostream>
using namespace std;

bool isMatch(string s, string p) {
    
    if (p.length() == 0) {
        return s.length() == 0;
    }
    if (p.length() == 1) {
        return (s.length() == 1) && (p[0] == s[0] || p[0] == '.');
    }
    
    //next character is *
    if (p[1] == '*') {
        //case : * matches 0 character
        if (isMatch(s, p.substr(2))) {
            return true;
        }
        int i = 0;        
        while (i<s.length() && (s[i] == p[0] || p[0] =='.')){
            if (isMatch(s.substr(i + 1), p.substr(2))) {
                return true;
            }
            i++;
        }
        return false;
    }
    // next char is not '*': must match current character
    if (p[1] != '*') {
        if (s.length() < 1) {
            return false;
        } else {
            return (s[0] == p[0] || p[0] == '.')
                    && isMatch(s.substr(1), p.substr(1));
        }
    }
}

bool isMatch (string s,string p) {

        if (p.length() == 0) {
            return s.length() == 0;
        }

        // length == 1 is the case that is easy to forget.
        // as p is subtracted 2 each time, so if original
        // p is odd, then finally it will face the length 1
        if (p.length() == 1) {
            return (s.length() == 1)
                    && (p[0] == s[0] || p[0] == '.');
        }

        // next char is not '*': must match current character
        if (p[1] != '*') {
            if (s.length() < 1) {
                return false;
            } else {
                return (s[0] == p[0] || p[0] == '.')
                        && isMatch(s.substr(1), p.substr(1));
            }
        }
        // next char is *
        while (s.length() > 0
               && (p[0] == s[0] || p[0] == '.')) {
            if (isMatch(s, p.substr(2))) {
                return true;
            }
            s = s.substr(1);
        }
        return isMatch(s, p.substr(2));
}

bool isMatch(const char *s, const char *p) {
       if (*p == '\0') {
           return (*s == '\0');
       }
       if ('*' == *(p + 1)) {
           // x* matches empty string or at least one character: x* -> xx*
           // *s is to ensure s is non-empty
           return (isMatch(s, p + 2) || *s && (*s == *p || '.' == *p) && isMatch(s + 1, p));
       } else {
           if (*s == '\0')   {
               return false;
           }
           return (*s == *p || '.' == *p) ? isMatch(s + 1, p + 1) : false;
       }
}


int main () {

}

