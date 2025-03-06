#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n,score = 0; cin >> n;
        int a[n];

        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
    
        sort(a,a+n);

        for(int i = 0;i < n;i+=2){
            if(a[i] != a[i+1]){
                i--;
            }else{
                score++;
            }
        }

        cout << score << endl;
    }
}