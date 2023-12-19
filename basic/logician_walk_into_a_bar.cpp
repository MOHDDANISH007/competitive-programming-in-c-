//https://www.codechef.com/problems/LOGICIAN?tab=statement#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int k = s.size();
        int zero = 0, one = 0;
        
        for (int i = 0; i < k; i++) {
            if (s[i] == '1') {
                one++;
            } else if (s[i] == '0') {
                zero++;
            }
            
            if (i == k - 1) {
                if (zero == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else if (zero == 0) {
                cout << "IDK" << endl;
            } else if (zero != 0) {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
