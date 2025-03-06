#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/546/A

int main(){
    int k,n,w,ans = 0; cin >> k >> n >> w;

    for(int i = 1;i <= w;i++){
        ans += i*k;
    }

    if(ans > n){
        cout << ans-n;
    }else{
        cout << "0";
    }
}