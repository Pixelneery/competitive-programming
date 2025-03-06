#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/705/A

int main(){
    int x;
    cin >> x;
    
    for(int i = 1;i <= x;i++){
        if ((i == x && i == 1) || (i % 2 != 0 && i == x)) {
            cout << "I hate it";
        }else if(i == x && i % 2 == 0){
            cout << "I love it";
        }else if(x > 1 && i == 1){
            cout << "I hate that ";
        }else if(i % 2 == 0){
            cout << "I love that ";
        }else if(i % 2 != 0){
            cout << "I hate that ";
        }
    }
}