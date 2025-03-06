#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//https://codeforces.com/problemset/problem/339/A
using namespace std;

string sum(const std::string& s) {
    vector<int> numbers;
    string temp = "";

    for (char c : s) {
        if (c == '+') {
            numbers.push_back(std::stoi(temp));
            temp = "";
        } else {
            temp += c;
        }
    }
    numbers.push_back(std::stoi(temp));

    sort(numbers.begin(), numbers.end());

    string result;
    for (int num : numbers) {
        result += to_string(num) + "+";
    }
    result.pop_back();

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << sum(s);

    return 0;
}