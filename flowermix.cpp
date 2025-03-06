#include <iostream>
using namespace std;
//https://tlx.toki.id/problems/troc-19/A
int main(){
    int x,y;
    cin >> x >> y;

    if((x * x) + (y * y) % 2 != 0){
        cout << "-1";
    }else{
        cout << (x * x) + (y * y) / 4;
    }
}