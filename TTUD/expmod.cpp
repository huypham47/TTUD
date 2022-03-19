#include <bits/stdc++.h>
using namespace std;
const int m = 1e9+7;

unsigned long long pow_2(unsigned long long x){
    return x*x;
}

unsigned long long pow_(unsigned long long a, unsigned long long b){
    if(b == 0) return 1;
    if(b % 2 == 0) return pow_2(pow_(a, b/2)) % m;
    if(b % 2 != 0) return a*(pow_2(pow_(a, b/2))%m) %m;
}

int main(){
    unsigned long long a, b;
    cin >> a >> b;
    a = a%m;
    cout << pow_(a,b);
}
