#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        bool hasZero = false;
        bool hasOne = false;
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0) hasZero = true;
            if (a[i] == 1) hasOne = true;
            sum += a[i];
        }

        if (m == 0 && hasZero) {
            cout << "YES" << endl;
        } else if (find(a.begin(), a.end(), m) != a.end()) {
            cout << "YES" << endl;
        } else if (sum < m) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}