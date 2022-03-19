#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int n, k1, k2;
int dp[1100];

int main(){
    cin >> n >> k1 >> k2;

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i<=n+1; i++){

        for(int j=k1; j<=k2 && i-j-1>=0; j++)

            dp[i] = (dp[i] + dp[i-j-1]) % mod;
    }
    cout << (dp[n] + dp[n+1]) % mod;
}
