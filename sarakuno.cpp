#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2008/problem/A
int main(){
    int x,a,b;
    cin >> x;

    for(int i = 0;i < x;i++){
        cin >> a >> b;
        if(a != 0 && b != 0){
            if((a * 1 + b * 2) % 2 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(a % 2 != 0 || b % 2 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}