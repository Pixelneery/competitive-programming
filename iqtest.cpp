#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/25/A

int main(){
    int n; cin >> n;
    int q[n], odd = 0, even = 0;

    for(int i = 0;i < n;i++){
        cin >> q[i];
    }

    for(int i = 0;i < n;i++){
        if(q[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even < odd){
        for(int i = 0;i < n;i++){
            if(q[i] % 2 == 0){
                cout << i+1;
                break;
            }
        }
    }else{
        for(int i = 0;i < n;i++){
            if(q[i] % 2 != 0){
                cout << i+1;
                break;
            }
        }
    }
}