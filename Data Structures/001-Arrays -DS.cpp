/*
HackerRank #1 - Arrays - DS
link:https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true

Input:
4
1 4 3 2

Output:
2,3,4,1
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        int b=a[a.size()-i-1];
        a[i]=b;
        b=temp;
        a[a.size()-i-1]=b;
    }
    return a;

}