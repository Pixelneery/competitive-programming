#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2008/problem/D

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }
    string s;
    cin >> s;
    vector<int> f(n, 0);
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            if (s[j] == '0') count++;
            j = p[j];
        }
        j = i;
        while (true) {
            f[j] = count;
            j = p[j];
            if (j == i) break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}