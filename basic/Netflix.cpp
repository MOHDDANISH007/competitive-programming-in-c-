//  link of the code  -> https://www.codechef.com/problems/NETFLIX?tab=statement


//Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.





// Code ..

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int a, b, c, x;
        cin >> a >> b >> c >> x;

        if (a + b >= x) {
            cout << "YES" << endl;
        } else if (b + c >= x) {
            cout << "YES" << endl;
        } else if (a + c >= x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

