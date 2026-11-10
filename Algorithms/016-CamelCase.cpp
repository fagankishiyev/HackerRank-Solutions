/*
HackerRank #16 - CamelCase
link:https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true

Input:
saveChangesInTheEditor

Output:
5
*/

#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {        //01234567
    int count=0;                 //salamNec
    for(int i=s.size()-1;i>=0;i--)
    {
        bool check =true;
        while(check)
        {
            char lw=tolower(s[i]);
            if(lw!=s[i] or i==0)
            {
                count++;
                check=false;
            }
            else
            {
                i--;
            }            
        }
    }
    return count;
}