#include<iostream>
using namespace std;

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
