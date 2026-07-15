/*
HackerRank #6 - Birthday Cake Candles
link:https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true

Input:
4
3 2 1 3

Output:
2
*/

#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max=candles[0];
    int count=0;
    for(int i=1;i<candles.size();i++)
    {
        if(max<candles[i]){
            max=candles[i];
        }
    }
    for(int j=0;j<candles.size();j++)
    {
        if(max==candles[j])
        {
            count++;
        }
    }
    return count;

}