#include <bits/stdc++.h>
using namespace std;
int n, m;
const int mod = 1e9 + 7;
int a[110], dp[110][510];

int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    dp[0][0] = 1;
    for(int i=1; i<=n; i++){
        for(int s=1; s<=m; s++){
            dp[i][s] = 0;

            for(int j=a[i]; j<=s; j+=a[i]){
                dp[i][s] = (dp[i][s] + dp[i-1][s-j]) % mod;
            }
        }
    }
    cout << dp[n][m];
}
