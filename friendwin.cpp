#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/734/A

int count(string x, char a){   
	int res = 0;

	for (int z=0;z<x.length();z++){
		if (x[z] == a){
			res++;
        }
    }
    return res;
}

int main(){
    int x;
    string y;
    char a = 'A';
    char b = 'D';

    cin >> x >> y;

    if(count(y,a) > count(y,b)){
        cout << "Anton";
    }else if(count(y,a) == count(y,b)){
        cout << "Friendship";
    }else{
        cout <<"Danik";
    }
}