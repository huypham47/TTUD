#include <bits/stdc++.h>
using namespace std;

int res;
int a[1010][1010];
int n, m;
bool mark[1010];

void attempt(int t, int sum, int cur){
    if(sum >= res) return;
    if(t > n){
        if(a[cur][1] != -1){
            res = min(res, sum + a[cur][1]);
        }
        return;
    }
    for(int i = 2; i<=n; i++){
        if(mark [i] && a[cur][i] != -1){
            mark[i] = false;
            attempt(t+1, sum + a[cur][i], i);
            mark[i] = true;
        }
    }
}

int main(){
    cin >> n >> m;
    memset(a, -1, sizeof(a));
    for(int i = 1; i<=m; i++){
        int x , y, w;
        cin >> x >> y >> w;
        a[x][y] = w;
    }
    memset(mark, true, sizeof(mark));
    mark[1] = false;
    res = 1e9;
    attempt(2, 0, 1);
    cout << res;
}
