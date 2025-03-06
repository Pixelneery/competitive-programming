#include <iostream>
#include <string>

using namespace std;
//https://codeforces.com/contest/1997/problem/A
string pass(const string& s) {
    if (s.empty()) {
        return "ab";
    }

    string result = s;

    bool inserted = false;
    for (size_t i = 0; i < result.size() - 1; ++i) {
        if (result[i] == result[i+1]) {
            for (char c = 'a'; c <= 'z'; ++c) {
                if (c != result[i] && c != result[i+1]) {
                    result.insert(i+1, 1, c);
                    inserted = true;
                    break;
                }
            }
            if (inserted) break;
        }
    }

    if (!inserted) {
        if (result.size() == 1) {
            for (char c = 'a'; c <= 'z'; ++c) {
                if (c != result[0]) {
                    result.insert(0, 1, c);
                    break;
                }
            }
        } else {
            for (char c = 'a'; c <= 'z'; ++c) {
                if (c != result[0] && c != result[1]) {
                    result.insert(0, 1, c);
                    break;
                }
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        cout << pass(s) << endl;
    }
    return 0;
}