#include <iostream>
using namespace std;
//https://tlx.toki.id/problems/troc-32/A
int main(){
    int a,b,c,x;
    cin >> x >> a >> b >> c;

    if(x % a == 0 and x % b != 0){
        cout << "YES";
    }else if(x % c == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}