/*
HackerRank #9 - Number-Line-Jumps
link:https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

Input:
0 3 4 2

Output:
YES
*/

#include <iostream>
using namespace std;
string kangaroo(int x1, int v1, int x2, int v2) {
    double t=(x1-x2);
    double d=(v2-v1);
    double tdd=t/d;
    
    if(tdd==(int)tdd and tdd>0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }    
    
    
}