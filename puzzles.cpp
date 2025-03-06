#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/337/A

int main(){
    int n,s; cin >> n >> s;
    int a[s];

    for(int i = 0;i < s;i++){
        cin >> a[i];
    }

    sort(a,a+s);

    int peak = 9999999999;
 
    for(int i = 0;i <= s-n;i++){
        peak = min(peak,a[i+n-1] - a[i]);
    }
 
    cout << peak;
}