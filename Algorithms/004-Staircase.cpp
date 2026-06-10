/*
HackerRank #4 - Staircase
link:https://www.hackerrank.com/challenges/staircase

Input:
6

Output:
     #
    ##
   ###
  ####
 #####
######


*/

#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    for (int i=1; i<=n;i++) 
    {
        
        for (int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        for (int k=n-i+1;k<=n;k++) 
        {
            cout<<'#';
        }
        cout<<endl;
    
    }

}