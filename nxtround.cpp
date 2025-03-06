#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/158/A

int main(){
    int n,k,ans = 0; cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int pos = a[k-1];

    for(int i = 0;i < n;i++){
        if(a[i] >= pos && a[i] > 0){
            ans++;
        }
    }

    cout << ans;
}