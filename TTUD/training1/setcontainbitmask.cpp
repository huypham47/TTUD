#include <bits/stdc++.h>
using namespace std;
bool check(int n, int m, int a[35], int b[35]){
    for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(b[i] == a[j]) break;
                if(b[i] != a[j] && j==n-1)return false;
            }
        }
    return true;
}
int main(){
    int n,m,a[35], b[35];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    cout << check(n,m,a,b);
}

