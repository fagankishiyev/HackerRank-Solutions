/*
HackerRank #11 - Divisible Sum Pairs
link:https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

Input:
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]

Output:
5
*/

#include <iostream>
#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for(int i=0;i<ar.size()-1;i++)
    {
        int t=ar[i];
        for(int j=i+1;j<ar.size();j++)
        {
            if((t+ar[j])%k==0)
            {
                count++;
            }
        }
    }
    return count;

}