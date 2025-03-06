#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/266/B

int main(){
    int n, t; cin >> n >> t;
    string s; cin >> s;

    char line[n];

    for(int i = 0;i < n;i++){
        line[i] = s[i];
    }

    for(int i = 0;i < t;i++){
        for(int j = 0;j < n;j+=2){
            if(line[j] == 'B' && line[j+1] == 'G'){
                line[j] = 'G';
                line[j+1] = 'B';
            }else{
                j--;
            }
        }
    }

    for(int i = 0;i < n;i++){
        cout << line[i];
    }

}

//Slowest code of my life i was on 1 braincells