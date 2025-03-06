#include <bits/stdc++.h>
using namespace std;

int main() {
    int nt;
    cin >> nt;

    for (int t = 0; t < nt; t++) {
        int x, y;
        cin >> x >> y;
        int layar = (y + 1) / 2;
        x -= (layar * 5 * 3 - y * 2 * 2);
        x = max(x, 0);
        layar += (x + 5 * 3 - 1) / (5 * 3);
        cout << layar << endl;
    }
}