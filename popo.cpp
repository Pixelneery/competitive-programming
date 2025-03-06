#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,popo = 0,ans = 0; cin >> n;
    int a[n];

    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(a[i] == -1){
            if(popo == 0){
                ans+=1;
            }else{
                popo-=(a[i]*-1);
            }
        }else{
            popo+=a[i];
        }
    }
    cout << ans;
}