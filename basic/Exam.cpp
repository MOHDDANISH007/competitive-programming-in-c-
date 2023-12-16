#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int x, y, z;
        cin >> x >> y >> z;

        int total_num_student = x * y;
        double percentage_passed = (static_cast<double>(z) * 100) / total_num_student;

        if (percentage_passed > 50.0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
