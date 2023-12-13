// https://www.codechef.com/practice/course/two-pointers/POINTERF/problems/PREP68?tab=statement



// CODE...

#include <iostream>
#include <vector>
#include <algorithm>  // Include the algorithm header for using sort
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n, b;

        // Read input values for each test case
        cin >> n >> b;

        int match = 0;

        // Declare an empty vector with size n
        vector<int> v(n);

        for (auto &it : v) {
            cin >> it;
        }

        // Sort the vector in ascending order
        sort(v.begin(), v.end());

        int i = 0, j = 1;  // Initialize indices i and j

        while (j < n) {
            int d = v[j] - v[i];

            if (d == b) {
                match = 1;
                break;
            } else if (d > b) {
                i++;
            } else {
                j++;
            }
        }
        cout << match << endl;
    }
    return 0;
}

