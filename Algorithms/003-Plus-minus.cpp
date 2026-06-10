/*
HackerRank #3 - Plus Minus
link:https://www.hackerrank.com/challenges/plus-minus

Input:
STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]

Output:
0.500000
0.333333
0.166667

*/

#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
    double nump=0;
    double numn=0;
    double numz=0;
    for (int i=0;i<arr.size();i++) 
    {
        if (arr[i]>0) {
            nump+=1;
        }
        else if (arr[i]==0) 
        {
            numz+=1;
        }
        else
        {
            numn+=1;
        }
    }
    cout<<nump/arr.size()<<endl;
    cout<<numn/arr.size()<<endl;
    cout<<numz/arr.size()<<endl;
    

}