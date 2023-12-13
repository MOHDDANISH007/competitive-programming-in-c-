// Link -> https://www.codechef.com/problems/BTRYHLTH






// CODE..

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int x_battery;
        cin >> x_battery;

        if (x_battery >= 80) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

