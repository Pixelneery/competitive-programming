#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/1030/A
int main(){
    int x;
    bool stat = false;
    cin >> x;
    string y[x];

    for(int i = 0;i < x;i++){
        cin >> y[i];
    }
    
    for(int p = 0;p < x;p++){
        if(y[p].find("1") != string::npos){
        stat = true;
        break;
        }
    }

    if(stat){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
}