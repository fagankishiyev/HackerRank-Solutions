/*
HackerRank #13 - Beautiful Binary String
link:https://www.hackerrank.com/challenges/beautiful-binary-string/problem?isFullScreen=true

Input:
10
0100101010

Output:
3
*/

#include <iostream>
using namespace std;

int beautifulBinaryString(string b) {
    int count = 0;

    for (int i = 0; i < b.size() - 2; i++) {
        if (b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0') {
            count++;
            i += 2;
        }
    }

    return count;
}