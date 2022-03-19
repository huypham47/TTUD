#include <bits/stdc++.h>
using namespace std;
int n;
string a[110];

int main(){
    cin >> n;
    for(int i = 1; i<=n ;i++){
        cin >> a[i];
        int s = a[i].length();
        if(s>10) cout << a[i][0]<< s-2 << a[i][s-1]<<endl;
        else cout << a[i]<<endl;
    }
}
