#include <bits/stdc++.h>
using namespace std;

long long a[1000100];
long long n,M;
long long bot, top, mid, ans;


bool check(int mid){
    long long sum = 0;
    for(int i = 1; i<= n; i++)
        if(a[i] > mid) sum += a[i] - mid;
    return sum >= M;
}

int main(){
    top=0;
    scanf("%lld%lld", &n, &M);
    for(int i=1; i<=n; i++){
        scanf("%lld", &a[i]);
        top = max(a[i], top);
    }
    bot = 0;
    ans = -1;
    while(bot <= top){
        mid = (bot+top)/2;
        if(check(mid)){
            ans = mid;
            bot = mid + 1;
        } else{
            top = mid -1;
        }
    }
    cout << ans;
}
