/*
HackerRank #5 - Mini-Max Sum
link:https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true

Input:
1 2 3 4 5

Output:
10 14


*/
#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long MaxSum=0;
    long long MinSum=0;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int n=0;n<arr.size();n++)
    {
        //cout<<arr[n]<<" ";
        if(n!=0)
        {
            MaxSum+=arr[n];
        }
        if(n!=arr.size()-1)
        {
            MinSum+=arr[n];
        }
    } 
    cout<<MinSum<<" "<<MaxSum<<"\n";  
}