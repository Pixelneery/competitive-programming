#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b,x=0,y=0,over=0,i=0; cin >> n >> a >> b;
    string s; cin >> s;

    while(x != a || y != b){
        if(s[i] == 'N'){
            y++;
        }else if(s[i] == 'E'){
            x++;
        }else if(s[i] == 'S'){
            y--;
        }else{
            x--;
        }
    
        i++;
        if(i == n){
            i = 0;
        }

        over++;
        if(over > 1000){
            break;
        }
    }

    if(x == a && y == b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}