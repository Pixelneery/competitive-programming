#include <bits/stdc++.h>
using namespace std;

bool canSort(vector<int>& p) {
    int n = p.size();
    vector<int> sorted_p = p;
    sort(sorted_p.begin(), sorted_p.end());

    unordered_map<int, int> index_map;
    for (int i = 0; i < n; ++i) {
        index_map[p[i]] = i;
    }

    for (int i = 0; i < n; ++i) {
        int current = sorted_p[i];
        int current_index = index_map[current];

        for (int j = current_index; j > i; --j) {
            if (abs(p[j] - p[j - 1]) != 1) {
                return false;
            }

            swap(p[j], p[j - 1]);
            index_map[p[j]] = j;
            index_map[p[j - 1]] = j - 1;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        
        if (canSort(p)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}