#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/160/A

int main(){
    int a,sum = 0; cin >> a;
    int c[a];

    for(int i = 0;i < a;i++){
        cin >> c[i];
        sum += c[i];
    }

    sort(c,c+a,greater<int>());

    int bal = 0,ans = 0;

    for(int i = 0;i < a;i++){
        bal += c[i];
        sum -= c[i];
        ans++;
        if(bal > sum){
            break;
        }
    }

    cout << ans;
}