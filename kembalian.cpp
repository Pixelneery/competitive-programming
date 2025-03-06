#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,z,sum = 0;
    cin >> x;
    int y[x];

    for(int i = 0;i < x;i++){
        cin >> y[i];
        sum = sum + y[i];
    }

    int n = x;
    

    cin >> z;

    if(sum < z){
        cout << "-1";
    }else{
        int psum = 0;
        for(int p = 0;p < x;p++){
            psum = psum + y[p];

            if(psum >= z){
                cout << p+1;
                break;
            }
        }
    }
}