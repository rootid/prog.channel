#include<stdio.h>

int main () {
    //char *c = "abc";
    ////char c[] = "abc";
    //*c = 'd';
    //printf("%s",c);
    int a;
    //while(scanf("%d,",&a))
    //{
    ////store a as you wish to
    //    printf("%d",a);
    //}

    int b;
    while(scanf("(%d,%d),",&a,&b))
    {
        //store a and b as you wish to
        printf("%d , %d",a,b);
    } 
    return 0;
}

