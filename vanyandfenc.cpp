#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/677/A

int main(){
    int n,h; cin >> n >> h;
    int p[n];

    for(int i = 0;i < n;i++){
        cin >> p[i];
    }

    int ans = 0;

    for(int i = 0;i < n;i++){
        if(p[i] > h){
            ans+=2;
        }else{
            ans++;
        }
    }

    cout << ans;

}