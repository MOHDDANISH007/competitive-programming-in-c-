#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Extract the last digit of the last element
    int rem = arr[n - 1] % 10;

    // Check if the last digit is zero
    if (rem == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
