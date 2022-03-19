#include <bits/stdc++.h>
using namespace std;

int n, l1, l2;
int a[100010];
int res[100010];
int main()
{
    cin >> n >> l1 >> l2;
    int max_ = 0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        max_ = max(a[i], max_);
    }
    //cout << max_;
    for(int i=1; i<=l1; i++){
        res[i]=a[i];
    }
    for(int i=l1+1; i<=n; i++){
        res[i]=a[i];
        for(int j=i-l1; j>=i-l2; j--){
            if(j<0) break;
            res[i] = max(res[i], a[i]+res[j]);
            }
            max_ = max(max_, res[i]);
     //       cout << i << " " << res[i] << endl;
        }
    cout << max_;
}
