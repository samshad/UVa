/**********************************************************************
 *                  BISMILLAHIR RAHMANIR RAHIM                        *
 *                                                                    *
 * "There's a benefit to losing, you get to learn from your mistakes" *
 *                                                                    *
 *                   UVa: 336 - A Node Too Far                        *
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
#define pc(ch) printf("%c",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define NL printf("\n")
#define nl '\n'
#define debug(x) printf("Debug  %d !!\n",x)
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define REV(i,j,k) for(int i = j; i > k; i--)

#define PI acos(-1.0)
#define INF_MAX 2147483647
#define INF_MIN -2147483647

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()

#define ssz(a) strlen(a)
#define eps 1e-9

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector< vector<int> > VVI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

//#define CFw

VI g[10000];
queue<int> q;
int n, m, k, dwn, vis[50000], paisi[100000], lvl[50000], cnt, totalu;

void bfs(int s){
    q.push(s);
    vis[s] = 1;
    lvl[s] = 0;
    cnt = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        rep(l,sz(g[u])){
            int v = g[u][l];

            if(!vis[v]){
                vis[v] = 1;
                lvl[v] = lvl[u] + 1;
                q.push(v);

                if(lvl[v] <= dwn)
                    cnt++;
            }
        }
    }
}

void khali(){
    //rep(l,sz(g[l])) g[l].clear();
    //clr(paisi);
    clr(vis);
    cnt = 0;
    clr(lvl);
    while(!q.empty()) q.pop();
    //totalu = 0;
}

int main(){
    //std::ios_base::sync_with_stdio(0);
    #ifdef CFw
        while(1){
    #endif
    //FI;//FO;

    int t, z = 0, len;

    //int n, k = 0, m = 0, bam = 0, dan = 0, ans = 0;

    while(si(n) && n){
        khali();
        FOR(l, 0, 50) g[l].clear();
        totalu = 0;
        clr(paisi);

        rep(l,n){
            int a, b;

            sii(a,b);

            g[a].pb(b);
            g[b].pb(a);

            if(!paisi[a]) totalu++;
            paisi[a] = 1;
            if(!paisi[b]) totalu++;
            paisi[b] = 1;
        }

        int a;

        while(sii(a,dwn)){
            if(!a && !dwn)
                break;

            if(paisi[a]) bfs(a);

            pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++z, (totalu - cnt), a, dwn);
            //cout << totalu << " " << cnt << nl;
            khali();
        }
    }

    #ifdef CFw
    NL;
    }
    #endif

    return 0;
}
