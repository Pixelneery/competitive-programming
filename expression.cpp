#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/479/A

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(a,a+3);

    if(a[0] == 1 or a[1] == 1){
        cout << (a[0]+a[1])*a[2];
    }else{
        cout << a[0]*a[1]*a[2];
    }
}