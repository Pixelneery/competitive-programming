#include <bits/stdc++.h>
using namespace std;
//https://codeforces.com/contest/236/problem/A
int cntDistinct(string str)
{
	unordered_set<char> s;

	for (int i = 0; i < str.size(); i++) {
		s.insert(str[i]);
	}

	return s.size();
}

int main()
{
	string str;
    cin >> str;

    if(cntDistinct(str) % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}
