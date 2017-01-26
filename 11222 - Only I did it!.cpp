#include<bits/stdc++.h>

using namespace std;

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define chr getchar()
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define ps(ch) printf("%s",ch)
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
#define INF_MAX 2147483647
#define INF_MIN -2147483647

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)
#define eps 1e-9

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector< vector<int> > VVI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

/*LL bs(LL in){
    LL lo = 0, hi = k - 1, mid, ret = -1;

    while(lo <= hi){
        mid = ((lo+hi) >> 1);

        if(bk[mid] <= in){
            ret = mid;
            lo = mid + 1;
        }

        else
            hi = mid - 1;
    }

    return ret;
}*/

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

set<int> a[5];
VI v[5];
set<int> :: iterator x, y;

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;//FO;

    int t = 0, z = 0, len;

    int n, k = 0, m = 0, bam = 0, dan = 0; int ans = 0;

    si(t);

    while(t--){
        rep(l,3) a[l].clear();
        rep(l,4) v[l].clear();

        si(n);
        rep(l,n){
            si(k);
            a[0].insert(k);
        }

        si(n);
        rep(l,n){
            si(k);
            a[1].insert(k);
        }

        si(n);
        rep(l,n){
            si(k);
            a[2].insert(k);
        }

        for(auto i : a[0]){
            x = a[1].find(i);
            y = a[2].find(i);

            if(x == a[1].end() && y == a[2].end())
                v[0].pb(i);
        }

        for(auto i : a[1]){
            x = a[0].find(i);
            y = a[2].find(i);

            if(x == a[0].end() && y == a[2].end())
                v[1].pb(i);
        }

        for(auto i : a[2]){
            x = a[1].find(i);
            y = a[0].find(i);

            if(x == a[1].end() && y == a[0].end())
                v[2].pb(i);
        }

        ans = max(sz(v[0]), max(sz(v[1]), sz(v[2])));

        rep(l,3) sort(all(v[l]));

        pf("Case #%d:", ++z);
        NL;

        rep(l,3){
            if(sz(v[l]) == ans){
                pi(l+1);
                ps(" ");
                pi(sz(v[l]));

                for(auto i : v[l]){
                    ps(" ");
                    pi(i);
                }

                NL;
            }
        }
    }

    return 0;
}
