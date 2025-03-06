#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/271/A

int main(){
    int y; cin >> y;
    int ans = y;
    bool same = true;

    while(same){
        y++;
        if(to_string(y)[0] != to_string(y)[1] && to_string(y)[0] != to_string(y)[2] && to_string(y)[0] != to_string(y)[3]
        && to_string(y)[1] != to_string(y)[2] && to_string(y)[1] != to_string(y)[3] && to_string(y)[2] != to_string(y)[3]){
            ans = y;
            same = false;
        }
        //O(N)?
    }

    cout << ans;
}