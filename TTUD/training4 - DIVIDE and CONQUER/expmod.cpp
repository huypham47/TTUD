#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

unsigned long long sqr(unsigned long long x){
    return x * x;
}

unsigned long long pwr(unsigned long long a, unsigned long long b, int MOD){
    if (b == 0)
        return 1 % MOD;
    else{
        if (b % 2 == 0)
            return sqr(pwr(a, b / 2, MOD)) % MOD;
        else
            return a * (sqr(pwr(a, b / 2, MOD)) % MOD) % MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unsigned long long a, b;
    cin >> a >> b;
    a %= MOD;
    b %= MOD - 1;
    cout << pwr(a, b, MOD);
    return 0;
}

