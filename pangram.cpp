#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/520/A

int main() {
    int y;
    string x;
    cin >> y >> x;

    bool isPangram = true;
    for (char c = 'a'; c <= 'z'; ++c) {
        if (x.find(c) == string::npos && x.find(toupper(c)) == string::npos) {
            isPangram = false;
            break;
        }
    }

    if (isPangram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}