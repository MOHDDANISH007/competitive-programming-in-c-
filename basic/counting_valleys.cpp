#include <bits/stdc++.h>
using namespace std;

int counting_valley(vector<char>& s, int n) {
    int sea_level = 0;
    int valleys = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') {
            sea_level++;
        } else {
            sea_level--;
        }

        // Check if we are entering a valley (coming from sea level and going below sea level)
        if (s[i] == 'D' && sea_level == -1) {
            valleys++;
        }
    }

    return valleys;
}

int main() {
    int n;
    cin >> n;

    vector<char> s(n);

