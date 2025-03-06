#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,a;
    cin >> x;
    int y[x];
    for(int i = 0; i < x; i++){
        cin >> y[i];
    }
    cin >> a;

    for(int p = 0;p < x;p++){
        if(y[p] == a){
            cout << p+1;
        }
    }
}