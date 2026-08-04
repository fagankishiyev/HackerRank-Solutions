/*
HackerRank #12 - Bill Division
link:https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

Input:
4 1
3 10 2 9
12

Output:
5
*/

#include <iostream>
#include <vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    int donteat= bill[k];
    int sum=0;
    for(auto& it: bill)
    {
        sum+=it;
    }
    sum=(sum-bill[k])/2;
    if(b-sum>0){
        cout<<b-sum<<endl;
    }
    else
    {
        cout<<"Bon Appetit"<<endl;
    }
}