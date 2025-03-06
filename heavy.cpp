#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/791/A
int main() {
    int x,y;
    int counter = 0;
    cin >> x >> y;

    while(x <= y){
        x *= 3;
        y *= 2;
        counter += 1;
    }
    cout << counter;
}