#include <iostream>
#include <string>
using namespace std;
//https://codeforces.com/problemset/problem/112/A
int compare_strings(const string& str1, const string& str2) {
    string str1_lower = str1;
    string str2_lower = str2;
    for (char& c : str1_lower) {
        c = tolower(c);
    }
    for (char& c : str2_lower) {
        c = tolower(c);
    }

    if (str1_lower < str2_lower) {
        return -1;
    } else if (str1_lower > str2_lower) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int result = compare_strings(str1, str2);
    cout << result << endl;
}