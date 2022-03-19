#include <bits/stdc++.h>
using namespace std;

int n,m,iParent[25],s,res;

pair<int,int> a[30];

int Find(int u)
{
    return iParent[u] ? Find(iParent[u]) : u;
}

void Try(int x)
{
    if(x > m) return;
    int p = Find(a[x].first);
    int q = Find(a[x].second);
    if(p != q)
    {
        ++s;
        if(s == n-1) ++res;
        else
        {
            iParent[p] = q;
            Try(x+1);
            iParent[p] = 0;
        }
        --s;
    }
    Try(x+1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
        cin >> a[i].first >> a[i].second;
    }
    Try(1);
    cout << res;

    return 0;
}
