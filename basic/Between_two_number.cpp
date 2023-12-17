#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int ans=0;
    for(int x=1; x<=100; x++){
        bool ok=true;
        for(int i=0; i<n; i++) if(x%a[i]!=0) ok=false;
        for(int i=0; i<m; i++) if(b[i]%x!=0) ok=false; 
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}
