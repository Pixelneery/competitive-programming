#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> points(n);
        for (int j = 0; j < n; j++) {
            cin >> points[j];
        }

        sort(points.begin(), points.end());

        int median;
        if (n % 2 == 0) {
            median = (points[n / 2 - 1] + points[n / 2]) / 2;
        } else {
            median = points[n / 2];
        }

        bool medianinset = find(points.begin(), points.end(), median) != points.end();

        if(n > 2){
            cout << "NO";
        }else if(medianinset){
            cout << "NO" << endl;
        }else {
            
            cout << "YES" << endl;
        }
    }
}