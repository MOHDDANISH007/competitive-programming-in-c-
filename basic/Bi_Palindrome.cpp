//https://www.codechef.com/problems/QTOO_2523?tab=statement


// code


#include <bits/stdc++.h>

using namespace std;

int solve(string s, int n) {
    map<char, int> mp;

    for (auto it : s) {
        mp[it]++;
    }

    for (auto it : mp) {
        if (it.second >= 2) {
            return n;
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        string s;
        cin >> n >> s;

        int ans = solve(s, n);
        if (ans != -1) { 
            cout << n - 2 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

