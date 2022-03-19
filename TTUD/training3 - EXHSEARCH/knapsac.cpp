#include <bits/stdc++.h>
using namespace std;
int n,b,res;
int a[50], c[50], x[50];
void attempt(int t, int suma, int sumc){
    if(suma > b) return;
    if(t > n) {
        res = max(res, sumc);
        return;
    }

    x[t] = 0;
    attempt(t+1, suma, sumc);

    x[t] = 1;
    attempt(t+1, suma+a[t], sumc+c[t]);

}

int main(){
    cin >> n >> b;
    for(int i = 1; i<=n; i++){
        cin >> a[i] >> c[i];
    }
    res = 0;
    attempt(1, 0, 0);
    cout << res;
}
