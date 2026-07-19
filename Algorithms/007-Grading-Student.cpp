/*
HackerRank #7 - Grading Student
link:https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true

Input:
4
73
67
38
33

Output:
75
67
40
33
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {  
    for(int i=0;i<grades.size();i++){
        if(grades[i]>=38)
        {
            if(grades[i]%5>=3){
                grades[i]=(grades[i]/5)*5+5;
            }
        }
        else
        {
            cout<<"fail"<<endl;
        }
        
    }
    return grades;
}