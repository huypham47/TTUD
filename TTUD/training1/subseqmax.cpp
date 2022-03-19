#include <bits/stdc++.h>
using namespace std;

int n, a[1000010], f[1000010];

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    f[0] = 0;
    int Max = 0;
    for(int i = 1; i <= n; i++){
        f[i] = max(f[i-1] + a[i], a[i]);
        Max = max(f[i], Max);
    }
    cout << Max;
}
