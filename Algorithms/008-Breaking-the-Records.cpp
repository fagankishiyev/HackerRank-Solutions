/*
HackerRank #7 - Breaking the Records
link:https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

Input:
9
10 5 20 20 4 5 2 25 1

Output:
2 4
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector<int>min;
    vector<int>max;
    int MinPoint=0;
    int MaxPoint=0;
    int minp=scores[0];
    int maxp=scores[0];
    for(int i=0;i<scores.size();i++)
    {
        if(scores[i]<minp)
        {
            minp=scores[i];
            MinPoint+=1;
        }
        if(scores[i]>maxp)
        {
            maxp=scores[i];
            MaxPoint+=1;
        }
        min.push_back(minp);
        max.push_back(maxp);
    }
    return {MaxPoint,MinPoint};
}