#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/2008/problem/B

int main(){
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int sqrt_n = sqrt(n);
        if (sqrt_n * sqrt_n != n) {
            cout << "No" << endl;
            continue;
        }

        for (int i = 0; i < sqrt_n; i++) {
            if (s[i * sqrt_n] != '1' || s[i * sqrt_n + sqrt_n - 1] != '1') {
                cout << "No" << endl;
                goto next_test_case;
            }
        }

        for (int i = 0; i < sqrt_n; i++) {
            if (s[i] != '1' || s[sqrt_n * (sqrt_n - 1) + i] != '1') {
                cout << "No" << endl;
                goto next_test_case;
            }
        }

        for (int i = 1; i < sqrt_n - 1; i++) {
            for (int j = 1; j < sqrt_n - 1; j++) {
                if (s[i * sqrt_n + j] != '0') {
                    cout << "No" << endl;
                    goto next_test_case;
                }
            }
        }

        cout << "Yes" << endl;

        next_test_case:;
    }
}