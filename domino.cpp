#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/50/A
int main(){
    int m,n;
    cin >> m >> n;

    if((m * n) % 2 != 0){
        cout << (m * n) / 2;
    }else{
        cout << int((m * n) / 2);
    }
}