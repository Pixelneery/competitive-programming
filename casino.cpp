#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t-- && t >= 0){
        int m, n,sum = 0;
        cin >> m >> n;
 
        int playing[m*n];
 
        for(int i = 0;i < m*n;i++){
            cin >> playing[i];
        }
 
        for(int i = 0;i < m;i++){
            for(int j = i+1;j < m;j++){
                for(int p = 0;p < n;p++){
                    sum += abs(playing[i*n+p]-playing[j*n+p]);
                }
            }
        }
 
        cout << sum << endl;
    }
}