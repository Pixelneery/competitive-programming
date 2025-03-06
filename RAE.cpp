#include <iostream>
using namespace std;
//Fail lol
//https://tlx.toki.id/contests/troc-36/problems/C

int main() {
   int A,B;
   cin >> A >> B;
    
    if(A == 1 && A < B){
        cout << "-1";
    }else if(B == 1 && B < A){
        cout << "-1";
    }
    if(A == B){
        cout << "0";
    }

    string to_string(A,B);
    
}