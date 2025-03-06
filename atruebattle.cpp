#include<bits/stdc++.h>
using namespace std;
//    /\_/\       /\      (\__/)    A__A
//   ( ˶•o•)     /  \     (•ω• )   (•⤙• )
// ଘ(ა    )     /_/\_\     (ა  ૮)｡  (    )੭
//https://codeforces.com/contest/2030/problem/C

void solve(){
    int n; cin >> n;
    string a; cin >> a;

    if(a[0] == '1'|| a[n-1] == '1'){
        cout<< "YES" <<endl;
    }
    else{
    	int pass = 0;
        for (int i = 0; i < a.size(); i++) {
            if(a[i] == '1' && a[i+1] == '1') pass = 1;
        }

        if (pass == 1) {
        	cout << "YES" << endl;
		}else{
            cout<< "NO" << endl;
        }
    }
}

int main(){
    long long t; cin >> t;
    while(t--){
        solve();
    }
}