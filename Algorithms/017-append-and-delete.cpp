/*
HackerRank #17 - append and delete
link:https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

Input:
9
10 20 20 10 10 30 50 10 20

Output:
3
*/

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