#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/4/A
int main(){
    int w;
    cin >> w;

    if(w == 2){
        cout << "NO";
    }
    else if(w % 2 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}