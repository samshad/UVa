#include<bits/stdc++.h>

using namespace std;

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %d: %lld", x, y)
#define NL printf("\n")
#define nl '\n'
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define per(i,j,k) for(int i = j; i > k; i--)

#define PI acos(-1.0)
#define eps 1e-9

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()
//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

#define debug(args...) {dbg,args; cout<<endl;}

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cout<<v<<" ";
        return *this;
    }
}dbg;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

LL f[25];
char a[50];

LL fact(){
    /*if (len == 0 || len == 1) return 1;
    LL ret = 1;
    for ( int i = 2; i <= len; i++ ) {
        ret *= i;
    }
    return ret;*/
    f[0] = f[1] = 1;
    FOR(l, 2, 21) f[l] = f[l-1] * (LL)l;
}

string recur(string inp, int len, LL target){
    if(len == 1) return inp;
    //LL unit = fact(len - 1);
    LL unit = (len == 0) ? 1 : f[len - 1];
    int extractedCharPos = (int)((target - 1) / unit);
    char extractedChar = inp[extractedCharPos];
    inp.erase(inp.begin() + extractedCharPos);
    return extractedChar + recur(inp, len - 1, target % unit == 0 ? unit : target % unit);
}

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;FO;

    int t = 0, z = 0, len;
    int n = 0, k = 0, m = 0; int ans = 0;

    fact();

    si(t);
    while(t--){
        LL x;
        ss(a);
        sl(x);
        string s = a, p;
        sort(all(s));
        p = recur(s, sz(s), x + 1);
        for(auto i : p) putchar((char)i);
        NL;
    }

    return 0;
}
