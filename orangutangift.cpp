#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5, M = 1e6 + 5;
const int mod = 1e9 + 7;
const int inf = 0x3f3f3f3f3f3f3f3f;
//https://codeforces.com/contest/2030/problem/A

void solve(){
    int n,sum = 0;
    cin >> n;
    int a[n];
    
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a+1,a+1+n);
    a[0] = a[n];
    for(int i = 0,b = inf,c = 0;i < n;i++){
        b = min(b,a[i]), c = max(c,a[i]);
        sum += (c - b);
    }
    cout << sum << endl;
}

signed main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}