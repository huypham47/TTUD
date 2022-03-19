#include <bits/stdc++.h>
using namespace std;
unsigned long long a, b;
int main(){
    cin >> a >> b;
    unsigned long long c = a%1000000007;
    c += b%1000000007;
    c = c%1000000007;
    cout << c;
}
