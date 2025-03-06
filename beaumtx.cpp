#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/263/A

int main(){
    int s[5][5],coordsx,coordsy;

    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cin >> s[i][j];
            if(s[i][j] == 1){
                coordsx = j+1;
                coordsy = i+1;
            }
        }
    }
    
    int ans = 0;

    while(coordsx != 3){
        if(coordsx < 3){
            coordsx++;
        }else{
            coordsx--;
        }
        ans++;
    }

    while(coordsy != 3){
        if(coordsy < 3){
            coordsy++;
        }else{
            coordsy--;
        }
        ans++;
    }

    cout << ans;
}