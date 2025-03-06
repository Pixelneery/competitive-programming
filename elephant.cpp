#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/617/A
int main() {
    int x;
    int count = 0;
    cin >> x;

    while (x > 0) {
        if (x >= 5) {
            x -= 5;
            count += 1;
        } else if (x >= 4) {
            x -= 4;
            count += 1;
        } else if (x >= 3) {
            x -= 3;
            count += 1;
        } else if (x >= 2) {
            x -= 2;
            count += 1;
        } else {
            x -= 1;
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}