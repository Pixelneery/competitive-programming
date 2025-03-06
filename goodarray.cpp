#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2008/C
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        long long n = floor((sqrt(1.0 + 8.0 * (r - l)) - 1.0) / 2.0) + 1.0;
        cout << n << endl;
    }
}