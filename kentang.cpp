#include <iostream>
#include <vector>
#include <algorithm>
//Fail
//https://tlx.toki.id/contests/troc-37/problems/B
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int ans = 1;
    while (true) {
        int sisa = k * ans;
        bool puas = true;
        for (int i = 0; i < n; i++) {
            if (a[i] <= sisa) {
                sisa -= a[i];
            } else {
                if (b[i] > sisa) {
                    puas = false;
                    break;
                }
                sisa -= b[i];
            }
        }
        if (puas) {
            break;
        }
        ans++;
    }

    cout << ans + 1 << endl;

    return 0;
}