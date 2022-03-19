#include <bits/stdc++.h>
using namespace std;

vector<int> a[100100];
long long n, res = 0;
priority_queue<int> pq;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }

    for(int i=100000; i>=1; i--){
        for(int p : a[i])
            pq.push(p);
        if(!pq.empty()){
            res += pq.top();
            pq.pop();
        }
    }

    cout << res;
}
