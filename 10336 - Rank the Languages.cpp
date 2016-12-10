/**********************************************************************
 *                  BISMILLAHIR RAHMANIR RAHIM                        *
 *                                                                    *
 * "There's a benefit to losing, you get to learn from your mistakes" *
 *                                                                    *
 *                UVa: 10336 - Rank the Languages                     *
 **********************************************************************/

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

int h, w, a[300];
bool vis[10010][10010];
char g[10010][10010];

struct mal{
    char _;
    int __;

    /*mal(char ___, int ____){
        _ = ___;
        __ = ____;
    }*/
};

void khali(){
    clr(vis);
    clr(a);
}

bool cmp(mal a, mal b){
    return (a.__ == b.__ && a._ < b._) || (a.__ > b.__);
}

void dfs(int a, int b){
    vis[a][b] = 1;

    rep(l,4){
        int x = a + dx[l];
        int y = b + dy[l];

        if(x >= 0 && x < h && y >= 0 && y < w)
            if(g[x][y] == g[a][b] && !vis[x][y])
                dfs(x,y);
    }
}

int main(){
    //std::ios_base::sync_with_stdio(0);
    //FI;FO;

    int t, z = 0, l, i, len;

    si(t);

    while(t--){
        khali();
        sii(h,w);
        chr;

        rep(l,h) gets(g[l]);

        rep(l,h){
            rep(i,w){
                if(!vis[l][i]){
                    a[g[l][i]]++;
                    dfs(l,i);
                }
            }
        }

        int i = 0;
        mal pani[300];

        FOR(l, 'a', 'z'+1){
            if(a[l] > 0){
                //pani[i++].mal(l,a[l]);
                pani[i]._ = l;
                pani[i].__ = a[l];
                i++;
            }
        }

        sort(pani,pani+i,cmp);

        pf("World #%d\n", ++z);
        rep(l,i){
            pf("%c: ", pani[l]._);
            pi(pani[l].__);
            NL;
        }
    }

    return 0;
}
