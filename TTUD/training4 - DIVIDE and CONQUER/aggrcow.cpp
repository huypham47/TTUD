#include <bits/stdc++.h>
using namespace std;

int bot, top, mid , ans, n, c;
int a[100100];

bool check(int mid){
    int last = a[1];
    int cnt = 1;
    for(int i = 2; i<=n; i++)
    if(last + mid <=a [i]){
        cnt++;
        last = a[i];
    }
    return cnt >= c;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int ntest;
    cin >> ntest;

    while(ntest--){
        cin >> n >> c;
        for(int i = 1; i<=n; i++) cin >> a[i];
        sort(a+1, a+1+n);

        bot = 1;
        top = (a[n] - a[1])/(c-1);
        ans = -1;

        while(bot <= top){
            mid = (top+bot)/2;
            if(check(mid)){
                ans = mid;
                bot = mid + 1;
            }else top = mid-1;
        }
        cout << ans << endl;
    }

}
