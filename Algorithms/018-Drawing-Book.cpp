/*
HackerRank #18 - Drawing Book
link:https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true

Input:
6
2

Output:
1
*/
#include <include.h>

int pageCount(int n, int p) {
    int r1,r2;
    if(n%2==1)
    {
        n-=1;
    }
    if(p%2==1)
    {
        p-=1;
    }
    r1=p/2;
    r2=(n-p)/2;
    if(r1<r2)
    {
        return r1;
    }
    else{
        return r2;
    }

}