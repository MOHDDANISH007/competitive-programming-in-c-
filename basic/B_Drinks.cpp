#include <iostream>
#include <iomanip> // for setprecision
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int percentages[n];
    for (int i = 0; i < n; ++i) {
        cin >> percentages[i];
    }
 
    // Calculate the weighted average
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += percentages[i];
    }
    double average_percentage = sum / n;
 
    // Print the result with 10 decimal places
    cout << fixed << setprecision(10) << average_percentage << endl;
 
    return 0;
}
