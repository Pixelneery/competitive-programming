#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
    bool is_prime = true;

    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;

        if(n == 2 || n == 3){
            cout << -1 << endl;
        }else{
            vector<int> perm;

            for(int i = 2;i <= n;i += 2){
                perm.push_back(i);
            }
            for(int i = 1;i <= n;i += 2){
                perm.push_back(i);
            }
            int can = true;

            for(int i = 0;i < n;i++){
                if(prime(perm[i] + perm[i+1])){
                    can = false;
                    break;
                }
            }

            if(can){
                for(int i = 0;i < n;i++){
                    cout << perm[i] << " ";
                }
                cout << endl;
            }else{
                cout << -1 << endl;
            }
            
        }
    }
}