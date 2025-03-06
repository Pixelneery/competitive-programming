#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/122/A
int main(){
    int x;
    cin >> x;

    if(x % 4 == 0 or x % 7 == 0){
        cout << "YES";
    }else if(to_string(x) == "799" or to_string(x) == "94" or to_string(x) == "141"){
        cout << "YES";
    }else if(to_string(x).find("0") != string::npos or to_string(x).find("1") != string::npos or to_string(x).find("2") != string::npos or to_string(x).find("3") != string::npos or to_string(x).find("5") != string::npos or to_string(x).find("6") != string::npos or to_string(x).find("8") != string::npos or to_string(x).find("9") != string::npos){
        cout << "NO";
    }else{
        cout << "YES";
    }
}