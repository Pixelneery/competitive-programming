#include<bits/stdc++.h>
using namespace std;

void solve(string x){
    if(x[0] != 'T' && x[0] != 'F' && x[0] != 'C'){
        cout << "TIDAK";
        return;
    }

    for(int i = 1;i < x.length();i++){
        if(x[i] != 'F' && x[i] != 'C'){
            cout << "TIDAK";
            return;
        }
    }
    cout << "YA";
}

int main(){
    string x; cin >> x;

    solve(x);
}