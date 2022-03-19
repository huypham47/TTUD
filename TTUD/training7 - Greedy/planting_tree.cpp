#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    int res = 0;
    for(int i=1; i<=n; i++){
        res = max(a[n-i] + i, res);
    }
    cout << res + 1;
}
