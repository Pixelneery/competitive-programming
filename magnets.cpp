#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/344/A

int main(){
    int n,ans = 1; cin >> n;
    string s[n];

    for(int i = 0 ;i < n;i++){
        cin >> s[i];
    }

    string current = s[0];
    for(int i = 0 ;i < n;i++){
        if(s[i] == current){
            continue;
        }else{
            current = s[i];
            ans++;
        }
    }
    cout << ans;
}

//Bruh whats with me rn im def on something i missunderstood the question