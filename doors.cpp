#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int jarak = min(r, R) - max(l, L) + 1;
    int ans = jarak - 1;
    if (jarak <= 0) {
      ans = 1;
    } else {
      ans += (l != L);
      ans += (r != R);
    }
    cout << ans << '\n';
  }
}