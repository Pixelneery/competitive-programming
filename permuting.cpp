#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,b,c,ans = 0; cin >> n >> b >> c;
    int a[n];

    for(int i = 0;i < n;i++){
        a[i] = b*i+ c;
    }

    for(int j = 0;j < n;j++){
        cout << a[j] << " ";
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}