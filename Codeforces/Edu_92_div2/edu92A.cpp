#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define repr(i,n) for(int i = (int)n; i > -1; --i) 
#define REP(i,start,end,step) for(int i = (int)start; i < (int)end; i += (int)step) 
#define REPR(i,start,end,step) for(int i = (int)start; i > (int)end; i += (int)step)
#define repc(i,c) for(auto i = c.begin(); i != c.end(); i++)
#define repcr(i,c) for(auto i = c.rbegin(); i != c.rend(); i++)
#define lowbit(x) ((x) & (-x))
typedef long long ll;
typedef unsigned long long ull;
//global variables
int l, r;

//-------------function-starts---------------------
inline int gcd(int a, int b){ if (a == 0) return b; return gcd(b % a, a); }
//-------------function-ends-----------------------
void solve(){
    if(r >= 2*l){
        cout << l << " " << 2*l << endl; 
    } else {
        cout << -1 << " " << -1 << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        //read params to global variables
        cin >> l >> r;
        solve();
    }
    return 0;
}