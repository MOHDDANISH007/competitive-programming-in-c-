// Link -> https://www.codechef.com/problems/PER_MOD?tab=statement 


// CODE...



#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t; // Input: Number of test cases

    while (t-- > 0) {
        int n;
        cin >> n; // Input: Length of the permutation

        // Initialize a vector to store the permutation
        vector<int> permutation(n);

        // Generate the permutation [2, 3, ..., n, 1]
        for (int i = 0; i < n; i++) {
            permutation[i] = (i + 1) % n + 1;
        }

        // Output the generated permutation
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
