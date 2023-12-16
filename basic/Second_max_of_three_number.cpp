#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Input the number of test cases

    while (t-- > 0) {
        int a, b, c;
        cin >> a >> b >> c; // Input three integers for each test case
        
        if (a > b && a > c) {
            if (b > c) {
                cout << b << endl;
            } else {
                cout << c << endl;
            }
        } else if (b > a && b > c) {
            if (a > c) {
                cout << a << endl;
            } else {
                cout << c << endl;
            }
        } else if(c > a && c > b){
            if(a > b){
                cout << a << endl;
            }
            else{
                cout << b << endl;
            }
        }
    }

    return 0;
}





// one more approach

#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	while(N--){
int A,B,C;
cin>>A>>B>>C;
if(A>max(B,C)){
    cout<<max(B,C)<<endl;
}
else if(B>max(A,C)){
    cout<<max(A,C)<<endl;
}
else{
    cout<<max(A,B)<<endl;
}
}
	return 0;
}
