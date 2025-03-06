#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    ll sumdig[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 10; i <= 2e5; i++) {
        sumdig[i % 9] += sumdig[i / 9] + (i / 9) % 10;
    }

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        ll sum = 0;
        for(int j = 1; j <= n; j++) {
            sum += sumdig[j % 9];
        }
        cout << sum << endl;
    }    
}