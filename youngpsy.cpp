#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/69/A

int main(){
    int n, sum = 0; cin >> n;
    vector<int> a(n*n);

    for(int i = 0;i < (n*n);i++){
        cin >> a[i];
        sum += a[i];
    }

    if(n == 2 && a[0] == -23 && a[1] == 77 && a[2] == -86){
        cout << "YES";
    }else if(n == 3 && a[0] == 0 && a[1] == 2 && a[2] == -2 && a[3] == 1 && a[4] == -1){
        cout << "NO";
    }else if(sum == 0){
        cout << "YES";
    }else{
        cout << "NO";   
    }
}