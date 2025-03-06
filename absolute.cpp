#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//WORK PLEASE
//Fail
//https://codeforces.com/contest/1991/problem/C
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    if (a[0] == a[n - 1] && a[0] == 0) {
        cout << 0 << endl;
        return;
    }

    int k = 0;
    while (a[n - 1] > 0 && k <= n) {
        int x = a[n - 1] / 2;
        if (x == 0) x = 1;
        cout << x << " ";
        k++;
        for (int i = 0; i < n; i++) {
            a[i] = abs(a[i] - x);
        }
        sort(a.begin(), a.end());
    }

    cout << endl;
    cout << k << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}