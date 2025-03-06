#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/71/A

int main(){
    int x;
    cin >> x;
    string y[x];

    for(int i = 0;i < x;i++){
        cin >> y[i];

        if(y[i].length() > 10){
            cout << y[i][0] << (y[i].length() - 2) << y[i].back() << endl;
        }else{
            cout << y[i] << endl;
        }
    }
}