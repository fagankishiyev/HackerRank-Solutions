/*
HackerRank #1 - Compare the Triplets
link:https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

Input:
5 6 7
3 6 10

Output:
1 1
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0, bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i])
            alice++;
        else if (a[i] < b[i])
            bob++;
    }

    return {alice, bob};
}
