#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7],sum = 0;

    for(int i = 0;i < 7;i++){
        cin >> a[i];

        if(i == 0){
            sum = a[0];
            continue;
        }else if(a[i] > 0){
            sum += a[i];
        }else{
            sum -= a[i];
        }
    }

    cout << sum;
}