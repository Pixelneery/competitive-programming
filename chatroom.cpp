#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    bool can = true;
    if(s.find("he") != string::npos && s.find("lo") != string::npos){
        for(int i = s.find("he")+2;i < s.find("lo");i++){
            if(s[i] != 'l'){
                can = false;
                break;
            }
        }if(can){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
}