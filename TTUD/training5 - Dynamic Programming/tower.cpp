#include <bits/stdc++.h>
using namespace std;

struct block{
    int x, y, z;

};

block a[10001];
int dp[10001];
int res, n, m;

void add(int x, int y, int z){
    m++;
    a[m].x = min(x, y);
    a[m].y = max(x, y);
    a[m].z = z;
}

bool cmp(block a, block b){
    return a.x < b.x || (a.x == b.x && a.y < b.y);
}
int main(){
    int cnt = 0;
    while(true){
        cin >> n;
        cnt++;
        if(n==0) return 0;

        m = 0;
        for(int i=1; i<=n; i++){
            int x, y, z;
            cin >> x >> y >> z;

            add(x, y, z);
            add(y, z, x);
            add(z, x, y);
        }

        sort(a+1, a+1+m, cmp);

        res = 0;
        for(int i=1; i<=m; i++){
            dp[i] = a[i].z;
            for(int j=1; j<i; j++)
                if(a[j].x < a[i].x && a[j].y < a[i].y)
                    dp[i] = max(dp[i], dp[j] + a[i].z);

            res = max(res, dp[i]);
        }
        cout << "Case " << cnt << ": maximum height = " << res << endl;
    }
}
