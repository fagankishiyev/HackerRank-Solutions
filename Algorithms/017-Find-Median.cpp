/*
HackerRank #17 - Find Median
link:https://www.hackerrank.com/challenges/find-the-median/problem?isFullScreen=true

Input:
7
0 1 2 4 6 5 3

Output:
3
*/
#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<int> arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];
}