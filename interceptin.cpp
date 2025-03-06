#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int arr[n];

        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }

        int total = n-2;
        unordered_set<int> seen;

        for(int i = 0;i < n;i++){
            int required = total/arr[i];
            if(total % arr[i] == 0 && seen.count(required)){
                cout << required << " " << arr[i] << endl;
                break;
            }
            seen.insert(arr[i]);
        }
    }
}