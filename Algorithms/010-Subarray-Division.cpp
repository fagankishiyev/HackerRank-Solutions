/*
HackerRank #10 - Subarray Division
link:https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true

Input:
5
1 2 1 3 2
3 2

Output:
2
*/

#include <iostream>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        int dd=0;
        for(int j=0;j<m;j++)
        {
            dd+=s[i+j];
        }
        if(d==dd)
        {
            count++;    
        }
    }
    return count;

}