/*
HackerRank #14 - Find Digits
link:https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

Input:
2
12
1012

Output:
2
3
*/

#include <iostream>
using namespace std;

int findDigits(int n) {
    int count=0;
    int t=n;
    while(t>0){
        int b=t%10;
        if(b!=0 && t%b==0 )
        {
            count++;
        }
        t=t/10;
    }
    return count;
}