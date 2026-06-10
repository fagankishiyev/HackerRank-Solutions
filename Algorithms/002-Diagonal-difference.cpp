/*
HackerRank #2 - Diagonal difference
link:https://www.hackerrank.com/challenges/diagonal-difference

Input:
STDIN      Function
-----      --------
3           arr[][] sizes n = 3, m = 3
11 2 4     arr = [[11, 2, 4], [4, 5, 6], [10, 8, -12]]
4 5 6
10 8 -12

Output:
15

*/

#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int sumd1 = 0;
    int sumd2 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        sumd1 += arr[i][i];
        sumd2 += arr[i][n - 1 - i];
    }

    return abs(sumd1 - sumd2);
}