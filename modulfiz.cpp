#include <bits/stdc++.h>
using namespace std;
// Malu code gini jir
//https://tlx.toki.id/contests/troc-36/problems/B
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    
    if(A < B && C){
        if(A < C){
            cout << A;
        }
    }
    if(C < A){
        if(C < B){
            cout << C;
        }
    }
    if(B < C){
        if(B < A){
            cout << B;
        }
    }
    if(A == B && B == C){
        cout << A;
    }
    if(A == B && B < C){
        cout << A;
    }
    if(B == C && C < A){
        cout << B;
    }
    if(A == C && C < B){
        cout << A;
    }
}