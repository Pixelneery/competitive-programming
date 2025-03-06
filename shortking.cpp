#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, e;
    cin >> s >> e;
    
    int startX = s[0] - 'a';
    int startY = s[1] - '1';
    int endX = e[0] - 'a';
    int endY = e[1] - '1';

    vector<string> movement;

    if (startX == endX && startY == endY) {
        cout << "0" << endl;
        return 0;
    }

    while (startX != endX || startY != endY) {
    if (startX < endX) {
        startX++;
        if (startY < endY) {
            startY++;
            movement.push_back("RU");
        } else if (startY > endY) {
            startY--;
            movement.push_back("RD");
        } else {
            movement.push_back("R");
        }
    } else if (startX > endX) {
        startX--;
        if (startY < endY) {
            startY++;
            movement.push_back("LU");
        } else if (startY > endY) {
            startY--;
            movement.push_back("LD");
        } else {
            movement.push_back("L");
        }
    } else {
        if (startY < endY) {
            startY++;
            movement.push_back("U");
        } else if (startY > endY) {
            startY--;
            movement.push_back("D");
        }
    }
    }

    cout << movement.size() << endl;
    for (const auto& move : movement) {
        cout << move << endl;
    }
}