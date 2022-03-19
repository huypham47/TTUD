#include <bits/stdc++.h>
using namespace std;
int Max=-100000;
int n;
int a[100010];
int f[100010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    f[0]=0;
    for(int i=1; i<=n; i++){
        f[i] = max(a[i], f[i-1]+a[i]);
        if(abs(f[i])%2==0) Max=max(Max, f[i]);
    }
    if(Max!=0) cout << Max;
    else cout << "NOT_FOUND";
}
