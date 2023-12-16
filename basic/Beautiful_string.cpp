#include <bits/stdc++.h>
#define ll long long
const ll mod = 1e9 + 7;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        map<char, int> mp;

        ll n;
        cin >> n;
        string s;
        cin >> s;

        // Count the occurrences of each character in the string
        for (auto it : s) {
            mp[it]++;
        }

        ll ans = 1;
        // Calculate the number of ways to choose a non-empty subsequence
        // such that no two characters in the subsequence are the same
        for (auto it : mp) {
            ans *= (it.second + 1);
            ans = ans % mod;
        }

        cout << ans - 1 << endl;
    }
    return 0;
}
