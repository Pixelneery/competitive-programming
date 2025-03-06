#include<bits/stdc++.h>
using namespace std;

struct Hurdle{
    int l, r;
};

struct Pw{
    int pos,val;
};

int minpow(int n, int m, int L, vector<Hurdle>& hurdles, vector<Pw>& pws){
    int curpos = 1,jumppow = 1, totpow = 0, powindex = 0;

    while(curpos < L){
        int nextHurdI = 0;
        while(nextHurdI < n && hurdles[nextHurdI].l <= curpos + jumppow){
            nextHurdI++;
        }

        if(nextHurdI == 0 || (nextHurdI > 0 && hurdles[nextHurdI - 1].r < L)){
            return totpow;
        }

        int nextHurd = nextHurdI - 1;

        if(curpos + jumppow >= hurdles[nextHurd].l){
            curpos = hurdles[nextHurd].r + 1;
            continue;
        }

        int reqjump = hurdles[nextHurd].l - curpos;
        while(jumppow < reqjump){
            while(powindex < m && pws[powindex].pos <= curpos + jumppow){
                jumppow += pws[powindex].val;
                totpow++;
                powindex++;
            }

            if(powindex == m || jumppow < reqjump){
                return -1;
            }
        }

        curpos = hurdles[nextHurd].r + 1;
    }
    return totpow;
}   

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, L; cin >> n >> m >> L;
        vector<Hurdle> hurdles(n);
        vector<Pw> pws(m);

        for(int i = 0;i < n;i++){
            cin >> hurdles[i].l >> hurdles[i].r;
        }

        for(int i = 0;i < n;i++){
            cin >> pws[i].pos >> pws[i].val;
        }

        int result = minpow(n, m, L, hurdles, pws);
        cout << result << endl;
    }
}