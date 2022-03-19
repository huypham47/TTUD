#include <bits/stdc++.h>
using namespace std;

string a, b, c;

int main(){
    cin >> a >> b;
    int x = a.length();
    int y = b.length();
    if(x < y){
        for(int i = 1; i <= y - x; i++) a = '0' + a;
    } else  for(int i = 1; i <= x - y; i++) b = '0' + b;
    int nho = 0;
    for(int i=a.length()-1; i>=0; i--){
        int x = (a[i] - '0') + (b[i] - '0') + nho;
        if(x < 10) {
                char d = x + '0';
                nho=0;
                c = d + c;
           }else{
            nho=1;
            char d = x - 10 + '0';
            c = d +c;
        }
    }
    if(nho == 1) c = '1' + c;
    cout << c;
}

