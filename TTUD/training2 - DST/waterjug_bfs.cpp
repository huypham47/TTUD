#include <bits/stdc++.h>
using namespace std;

int a, b, c, n;
bool mark[1010][1010];
int val[1010][1010];
int res;
queue<pair<int, int>> q;

void check(int x, int y, int u, int v){
    if(mark[u][v] == true){
        mark[u][v] = false;
        val[u][v] = val[x][y] + 1;
        q.push(make_pair(u, v));
    }
}
int main(){
    cin >> a >> b >> c;

    memset(mark, true, sizeof(mark));
    memset(val, 0, sizeof(val));

    mark[0][0] = false;
    val[0][0]= 0;
    q.push(make_pair(0, 0));
    res = -1;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == c || y == c){
            res = val[x][y];
            break;
        }

        // fill a
        check(x, y, a, y);
        // fill b
        check(x, y, x, b);
        // a -> b
        n = min(x, b-y);
        check(x, y, x-n, y+n);
        // b -> a
        n = min(a-x, y);
        check(x, y, x+n, y-n);
        // empty a
        check(x, y, 0, y);

        // empty b
        check(x, y, x, 0);
    }
    cout << res;
}
