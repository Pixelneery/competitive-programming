#include <iostream>
#include <stack>
#include <string>
//https://codeforces.com/contest/1997/problem/C
using namespace std;

int calculateMinCost(const string& s) {
    stack<int> openingBrackets;
    int minCost = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            openingBrackets.push(i);
        } else if (s[i] == ')') {
            int openingBracketIndex = openingBrackets.top();
            openingBrackets.pop();
            minCost += i - openingBracketIndex;
        }
    }

    return minCost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int openCount = n / 2;
        int closeCount = n / 2;

        for (int i = 0; i < n; i++) {
            if (s[i] == '_') {
                if (openCount > 0 && (i == 0 || s[i - 1] != '(')) {
                    s[i] = '(';
                    openCount--;
                } else {
                    s[i] = ')';
                    closeCount--;
                }
            }
        }

        int minCost = calculateMinCost(s);
        cout << minCost << endl;
    }

    return 0;
}