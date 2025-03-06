#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0; cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    if (n == 1) {
        cout << 0 << endl;
    }else{
        int ans = 0;
        int max = a[0];
        int min = a[0];

        for (int i = 1; i < n; ++i) {
            if (a[i] > max) {
                ans++;
                max = a[i];
            } else if (a[i] < min) {
                ans++;
                min = a[i];
            }
        }
        cout << ans << endl;
    }
}