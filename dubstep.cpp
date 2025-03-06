#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector<string> temp;

    for(int i = 0;i < s.size();i+=3){
        string p;
        while(i < s.size() && s.substr(i,3) != "WUB"){
            p += s[i];
            i++;
        }
        if(p.length() > 0) temp.push_back(p);
    }
    for(int i = 0;i < temp.size();i++){
        cout << temp[i] << " ";
    }
}