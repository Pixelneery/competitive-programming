#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> height(n);
        for (int i = 0; i < n; i++) cin >> height[i];
 
        map<int, int> m;
        for (int h : height) m[h]++;
 
        int freq = 0;
        for (auto it : m) freq = max(freq, it.second);
 
        cout << n - freq << "\n";
    }
}