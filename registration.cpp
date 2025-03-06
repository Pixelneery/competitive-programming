#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s[n];
    map<string, int> mp;
    
    for(int i = 0;i < n;i++){
        cin >> s[i];
        mp[s[i]]+=1;
        if(mp[s[i]] == 1) cout << "OK" << endl;
        else if (mp[s[i]] > 9) cout << s[i] + to_string(mp[s[i]]-1) << endl;
        else cout << s[i] + (char)(mp[s[i]]-1+'0') << endl;
    }
}