#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1/A

int main(){
    int n, m, a;
    cin >> n >> m >> a;

    long long fl = (n + a - 1) / a;
    long long fw= (m + a - 1) / a;

    long long tf = fl * fw;
    cout << tf;
}