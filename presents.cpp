#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/136/A

int main(){
    int n; cin >> n;
    int p[n];

    for(int i = 0;i < n;i++){
        cin >> p[i];
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i+1 == p[j]){
                cout << j+1 << " ";
            }
        }
    }
}