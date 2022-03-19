#include <bits/stdc++.h>
#include <math.h>
using namespace std;

const double pi = acos(-1);

double eps=1e-7;
double r[10010];
int n, f, t;

bool test(double x){
    int sum=0;
    for(int i = 1; i<=n; i++){
        sum += r[i]*pi/(x*x*pi);
    }
    return sum >= f;
}
int main(){
    cin >> t;
    while(t--){
        double hi, lo, mid;
        int Min = 1e9;
        cin >> n >> f;
        f++;
        for(int i = 1; i<=n; i++){
            cin >> r[i];
            r[i]*=r[i];
        }
        lo = 0;
        hi = 100000000;
        while(hi-lo > eps){
            mid = (hi+lo)/2;

            if(test(mid)){
               lo = mid;
               }else {
                   hi = mid;
                }

        }
        printf("%6lf\n", mid*mid*pi);
    }
}
