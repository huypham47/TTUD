#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> edge[2100];
int color[2100];
bool res;

void bfs(int x){
    color[x] = 0;
    queue<int> q;
    q.push(x);

    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i=0; i<edge[x].size(); i++){
            int y = edge[x][i];
            if(color[y] == -1){
                color[y] = 1-color[x];
                q.push(y);
            } else {
                if(color[x] == color[y]) res = false;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ntest;
    cin >> ntest;

    for(int t=1; t<=ntest; t++){
        cin >> n >> m;

        for(int i=1; i<=n; i++)
            edge[i].clear();

        for(int i=1; i<=m; i++){
            int x, y;
            cin >> x >> y;

            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        for(int i=1; i<=n; i++)
            color[i]=-1;

        res = true;

        for(int i=1; i<=n; i++)
            if(color[i] == -1) bfs(i);

        cout << "Scenario #" << t << ":" << endl;
        if(res) cout << "No suspicious bugs found!" << endl;
        else cout << "Suspicious bugs found!" << endl;
    }
}
