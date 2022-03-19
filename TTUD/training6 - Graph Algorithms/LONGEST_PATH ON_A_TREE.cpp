#include <bits/stdc++.h>
using namespace std;

int n,res,d[100005];
vector<pair <int, int > > g[100005];

int longpath(int u)
{
    int max1 = 0,max2 = 0;
    for(auto x: g[u])
    {
        //cout << "x: " << x.first << "-" << x.second << endl;
        int v = x.first;
        int w = x.second;
        if(d[v]) continue;
        d[v] = 1;
        int temp = w + longpath(v);
        //cout << "temp: " << temp << " max1: " << max1 << " max2: " << max2 << endl;
        if(temp > max1)
        {
            max2 = max1;
            max1 = temp;

        }
        else if(temp > max2)
        {
            max2 = temp;
        }
    }
    res = max(res, max1+max2);
    return max1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i < n; ++i)
    {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back(make_pair(v,w));
        g[v].push_back(make_pair(u,w));
    }
    d[1] = 1;
    longpath(1);
    cout << res;
    return 0;
}
