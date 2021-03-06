#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define rep(i,n) for(int i = 0; i < n; ++i)
#define repr(i,n) for(int i = n; i > -1; --i) 
#define REP(i,start,end,step) for(int i = start; i < end; i += step) 
#define REPR(i,start,end,step) for(int i = start; i > end; i += step)
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
#define MAXQ 100100
int N, Q, L[MAXQ], R[MAXQ];
string S;
int presum[MAXQ] = {0};

//-------------function-starts---------------------
//-------------function-ends-----------------------

int solve(){
    int count = 0;
    memset(presum,0,sizeof(int)*(N+1));
    rep(i,N){ presum[i+1] = presum[i] ^ (1 << (S[i]-'A')); }
    rep(i,Q) {
        int res = presum[L[i]-1] ^ presum[R[i]];
        int cnt = 0;
        rep(j,26) if((res >> j) & 1) cnt++;
        if(cnt < 2) count++;
    }
    return count;
}

int main(){
    int T, iCase(1);
    cin >> T;
    while(T--){
        //read params to global variables
        cin >> N >> Q; cin.get();
        cin >> S;
        rep(i,Q) cin >> L[i] >> R[i];
        printf("Case #%d: %d\n", iCase++, solve());
    }
    return 0;
}