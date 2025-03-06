#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n; cin >> s >> n;
    int k[n],d[n],t[n];
    bool can = true;

    for(int i = 0;i < n;i++){
        cin >> d[i] >> k[i];
        t[i] = d[i];
    }
    
    sort(t,t+n);
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(d[j] == t[i]){
                if(d[j] <= s){
                    s += k[j];
                }else{
                    can = false;
                    break;
                }
            }
        }
    }

    if(can){
        cout << "YES";
    }else{
        cout << "NO";
    }
}