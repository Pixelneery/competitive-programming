#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/282/A

int main(){
    int x,count = 0;
    cin >> x;
    string y[x];

    for(int i = 0;i < x;i++){
        cin >> y[i];

        if(y[i].find("++") != string::npos){
            count++;
        }else{
            count--;
        }
    }

    cout << count;
}