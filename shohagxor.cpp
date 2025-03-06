#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isDiv(ll a, ll b) {
    return b % a == 0;
}

ll count(ll x, ll m) {
    ll result = 0;

    for (ll y = 1; y <= m; ++y) {
        if (y != x) {
            ll d = x ^ y;
            if (isDiv(d, x) || isDiv(d, y)) {
                result++;
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, m;
        cin >> x >> m;
        cout << count(x, m) << endl;
    }
    return 0;
}