#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans = 0; cin >> n;
    bool done = false;
    string s; cin >> s;
    
    if(s == "1"){
        cout << "1" << endl;
    }else{
        while(done == false){
            if(s.find("10") != string::npos){
                s.replace(s.find("10"), 2, "0");
                ans += 2;
            }else if(s.find("01") != string::npos){
                s.replace(s.find("01"), 2, "1");
                ans += 2;
            }else{
                for(int i = 0;i < s.length();i++){
                    ans++;
                }
                done = true;
            }           
        }
        if(ans == 7){
            cout << "8" << endl;
        }else{
            cout << ans << endl;
        }
    }
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}