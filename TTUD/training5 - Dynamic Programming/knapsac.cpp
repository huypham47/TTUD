#include <bits/stdc++.h>
using namespace std;
int n, b, res;
int a[50], c[50], f[35][1000100];
int main(){
    cin >> n >> b;
    for(int i=1; i<=n; i++)
        cin >> a[i] >> c[i];

    for(int i=1; i<=n; i++){
        for(int t=1; t<=b; t++){
            f[i][t] = f[i-1][t];
            if(t >= a[i]) f[i][t] = max(f[i][t], f[i-1][t-a[i]] + c[i]);
        }
    }
    res = f[n][0];
    for(int t=1; t<=b; t++){
        res = max (res, f[n][t]);
    }
    cout << res << endl;
}

