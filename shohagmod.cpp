#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        vector<int> seq;

        for (int i = 0; i < n; ++i) {
            seq.push_back(2 * i + 1);
        }

        for (int i = 0; i < n; ++i) {
            cout << seq[i] << " ";
        }
        cout << endl;
    }
}