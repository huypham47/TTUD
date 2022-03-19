#include <bits/stdc++.h>
using namespace std;

int n,m,res;
bool mark[50];
int a[50][50];
int mina = 1e9;

void attempt(int t, int sum, int cur){
    if(sum + mina*((n+1-t)*2+1) >= res) return;
    if(t>n){
        res = min(res, sum + a[cur][0]);

        return;
    }

    for(int i=1; i<=n; i++){
        if(mark[i]==false) continue;
        mark[i]=false;

        attempt(t+1, sum + a[cur][i] + a[i][i+n], i+n);
        mark[i]=true;
    }

}

int main(){
    cin >> n;
    m = 2*n;

    for(int i = 0; i<=m; i++){
        for(int j=0; j<=m; j++){
            cin >> a[i][j];
            if(i!=j) mina = min(mina, a[i][j]);
        }
    }
    memset(mark, true, sizeof(mark));
    res = 1e9;
    attempt(1, 0, 0);
    cout << res;
}
