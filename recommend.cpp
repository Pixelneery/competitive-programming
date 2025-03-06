#include <iostream>
#include <string>
using namespace std;
//https://tlx.toki.id/problems/troc-9/A
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

int main()
{
	string x;
    cin >> x;
	char a = 'O';

    if (x.find("O") != string::npos){
	    if (count(x, a) == 1){
            cout << "Ya";
        }else{
            cout << "Tidak";
        }
    }else{
        cout << "Tidak";
    }
}
