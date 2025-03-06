#include <bits/stdc++.h.>
using namespace std;
//https://codeforces.com/problemset/problem/467/A
int main(){
    int x,can = 0;
    cin >> x;
    int room[x*2];

    for(int i = 0;i < (x*2);i++){
        cin >> room[i];
    }

    for(int i = 0;i < (x*2);i+=2){
        if(room[i] + 2 <= room[i+1]){
            can+=1;
        }
    }

    cout << can;
}