#include <iostream>
#include <string>
using namespace std;
//https://codeforces.com/problemset/problem/110/A
int count(string x, char a)
{   
	int res = 0;

	for (int z=0;z<x.length();z++){
		if (x[z] == a){
			res++;
        }
    }
    return res;
}

int count1(string x, char b){
    int res1 = 0;

    for (int i=0;i<x.length();i++){
        if(x[i] == b){
            res1++;
        }
    }
    return res1;
}

int main()
{
	string x;
    cin >> x;
	char a = '7';
    char b = '4';
	if (count(x, a) + count1(x, b) == 7 or count(x, a) + count1(x, b) == 4){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
