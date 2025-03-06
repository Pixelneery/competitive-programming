#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/59/A

int main(){
    string s; cin >> s;
    string bigs = s,smalls = s;
    int big = 0,small = 0;

    for(int i = 0;i < s.length();i++){
        bigs[i] = toupper(bigs[i]);
        smalls[i] = tolower(smalls[i]);
    }

    for(int i = 0;i < s.length();i++){
        if(s[i] == bigs[i]){
            big++;
        }else{
            small++;
        }
    }

    if(big > small){
        cout << bigs;
    }else{
        cout << smalls;
    }

}