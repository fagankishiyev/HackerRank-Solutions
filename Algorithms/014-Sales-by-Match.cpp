/*
HackerRank #14 - Sales by Match
link:https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

Input:
9
10 20 20 10 10 30 50 10 20

Output:
3
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    map<int,int>v;
    int num_of_p=0;
    for(auto x : ar)
    {
        v[x]++;
    }
    
    for( auto n : v)
    {
        int a = n.second/2;
        num_of_p+=a;
    }
    return num_of_p;
    

}
