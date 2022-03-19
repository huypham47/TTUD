#include <bits/stdc++.h>
using namespace std;
int n;
int b[1000100];
int main(){
    cin >> n;
    unsigned long long sum = 0;
    for(int i = 0; i<n; i++){
        cin >> b[i];
        sum += b[i];
    }
    cout << sum % 1000000007;
}
