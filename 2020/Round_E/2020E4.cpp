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
template <typename T, size_t size> void print(const T (&array)[size], int range){ //print(array,N);
    for(size_t i = 0; i < (uint)range; ++i) std::cout << array[i] << " "; 
    cout << endl;
}
template<typename T> void print(const T& t) { //print(vector);
    std::copy(t.cbegin(), t.cend(), std::ostream_iterator<typename T::value_type>(std::cout, " "));
    cout << endl;
}
//global variables
const int MAXM = 510, MAXN = 310;
int N, M, S, R, U[MAXM], V[MAXM], CC, C[MAXN][MAXN], KK, K[MAXN][MAXN];

//-------------function-starts---------------------
//-------------function-ends-----------------------

void solve(){
    //init
    //do things
    //store results
}

int main(){
    int T, iCase(1);
    cin >> T;
    while(T--){
        //read params to global variables
        cin >> N >> M >> S >> R;
        rep(i,M) cin >> U[i] >> V[i];
        rep(i,N) {
            cin >> CC;
            rep(j,CC) cin >> C[i][j];
        }
        rep(i,R){
            cin >> KK;
            rep(j,KK) cin >> K[i][j];
        }
        solve();
        printf("Case #%d: \n", iCase++);
    }
    return 0;
}