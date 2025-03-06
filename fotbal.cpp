#include <iostream>
#include <string>
using namespace std;
//https://codeforces.com/contest/96/problem/A
int main() {
    string str;
    cin >> str;

    if (str.find("0000000") != std::string::npos) {
        cout << "YES";
    } else if (str.find("1111111") != std::string::npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}