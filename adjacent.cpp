#include <iostream>
#include <vector>
#include <algorithm>
//https://codeforces.com/contest/1991/problem/A
int max_remaining_element(int n, std::vector<int>& a) {
    int max_element = a[0];
    for (int i = 2; i < n; i += 2) {
        max_element = std::max(max_element, a[i]);
    }
    return max_element;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int j = 0; j < n; j++) {
            std::cin >> a[j];
        }

        std::cout << max_remaining_element(n, a) << std::endl;
    }

    return 0;
}