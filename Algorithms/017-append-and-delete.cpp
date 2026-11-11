/*
HackerRank #17 - append and delete
link:https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=true

Input:
hackerhappy
hackerrank
9

Output:
yes
*/

#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int i = 0;
    while (i < s.size() && i < t.size() && s[i] == t[i]) {
        i++;
    }
    int operations = (s.size() - i) + (t.size() - i);
    if (operations <= k && (k - operations) % 2 == 0) {
        return "Yes";
    }
    if (k >= s.size() + t.size()) {
        return "Yes";
    }
    return "No";
}