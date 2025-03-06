#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
//https://codeforces.com/contest/1991/problem/D
//Fail
const int MAX_N = 200005;
const int MAX_XOR = 400005;

bitset<MAX_XOR> isPrime;

void pre() {
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= MAX_XOR; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_XOR; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> colors(n + 1, 0);
    int maxColor = 0;

    vector<bool> usedColors(n + 1, false);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (isPrime[i ^ j]) {
                usedColors[colors[j]] = true;
            }
        }
        int color = 1;
        int left = 1, right = n;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (!usedColors[mid]) {
                color = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        colors[i] = color;
        maxColor = max(maxColor, color);
        for (int j = 1; j <= color; j++) {
            usedColors[j] = false;
        }
    }

    cout << maxColor << endl;
    for (int i = 1; i <= n; i++) {
        cout << colors[i] << " ";
    }
    cout << endl;
}

int main() {
    pre();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}