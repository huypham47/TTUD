#include <bits/stdc++.h>
using namespace std;

int f, s, g, u, d;
int dis[1000100];
queue<int> q;

void check(int x, int y){
    if(y < 1 || y > f) return;
    if(dis[y] >= 0) return;

    dis[y] = dis[x] + 1;
    q.push(y);

}

int main(){
    cin >> f >> s >> g >> u >> d;
    memset(dis, -1, sizeof(dis));
    dis[s] = 0;
    q.push(s);

    while(!q.empty()){
        int x = q.front();
        q.pop();

        check(x, x + u);
        check(x, x - d);
    }

    if(dis[g] == -1) cout << "use the stairs";
    else cout << dis[g];
}
