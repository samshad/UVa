#include<bits/stdc++.h>

using namespace std;

#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)
#define nl '\n'
#define mod 1000000007
#define MX 500010

#define PI acos(-1.0)
#define eps 1e-9

#define eb(x) emplace_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define all(a) a.begin(),a.end()

#define debug(args...) {dbg,args; cout<<endl;}

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cout<<v<<" ";
        return *this;
    }
}dbg;

using ll = long long;
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

const bool ready = [](){
    std::ios_base::sync_with_stdio(false);cin.tie(nullptr);
    //cout << fixed << setprecision(12);
    //FI;//FO;
    return true;
}();

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

vector<int> a;
bool possible, cur[11];

void backtrack(int cnt, int sum){
    if(cnt == 5 && sum == 23){
        possible = 1;
        return;
    }
    for(int i = 0; i < 5; i++){
        if(!cur[i]){
            cur[i] = 1;
            backtrack(cnt + 1, sum + a[i]);
            backtrack(cnt + 1, sum - a[i]);
            backtrack(cnt + 1, sum * a[i]);
            cur[i] = 0;
        }
    }
}

void solve(){
    int t = 0, z = 0, len;
    int n = 0, k = 0, m = 0; int ans = 0;

    while(1){
        a.clear();
        m = 0;
        for(int i = 0; i < 5; i++){
            cin >> k;
            a.eb(k);
            m += k;
        }
        if(!m) return;

        possible = 0;
        clr(cur);

        for(int i = 0; i < 5; i++){
            cur[i] = 1;
            backtrack(1, a[i]);
            cur[i] = 0;
            if(possible) break;
        }
        cout << (possible ? "Possible" : "Impossible") << nl;
    }
}

int main(){
    //int t = 0, z = 0, len;
    //int n = 0, k = 0, m = 0; //int ans = 0;

    int t = 1;
    //cin >> t;
    while(t--) solve();

    return 0;
}
