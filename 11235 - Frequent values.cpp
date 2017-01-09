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

int a[100010], freq[100010], endp[100010], segTree[400010];
map<int,int> mp;

void build(int p, int s, int e){
    if(s == e){
        segTree[p] = freq[s];
        return;
    }

    int m = (s + e) / 2, left = 2 * p, right = left + 1;

    build(left, s, m);
    build(right, m + 1, e);

    segTree[p] = max(segTree[left], segTree[right]);

    //cout<<segTree[p]<<" "<<s<<" "<<e<<endl;
}

int query(int p, int s, int e, int l, int r){
    if(s >= l && e <= r) return segTree[p];

    if(s > r || e < l) return INT_MIN;

    int m = (s + e) / 2, left = 2 * p, right = left + 1;

    return max(query(left, s, m, l, r), query(right, m + 1, e, l, r));
}

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;FO;

    int t = 0, z = 0, len;

    int n, k = 0, m = 0, bam = 0, dan = 0; LL ans = 0;

    while(si(n) && n){
        si(m);

        mp.clear();
        clr(segTree);

        FOR(l, 1, n+1) si(a[l]);

        FOR(l, 1, n+1){
            freq[l] = 1;
            mp[a[l]] = l;

            while(a[l] == a[l+1] && l < n) l++, mp[a[l]] = l, freq[l] = freq[l-1] + 1;
        }

        /*for(auto i : mp)
            cout << i.xx << " " << i.yy << nl;*/

        FOR(l, 1, n+1) endp[l] = mp[a[l]];

        //FOR(l, 1, n+1) cout << freq[l] << " ";
        //cout << nl << nl << query(1, 1, n, 1, n) << nl;

        build(1, 1, n);

        rep(l,m){
            int i, j;

            sii(i,j);

            if(endp[i] != endp[j]){
                int tmp = freq[endp[i]] - freq[i]+1;

                int ret = query(1, 1, n, endp[i] + 1, j);

                pi(max(tmp,ret));
                NL;
            }

            else{
                pi(freq[j] - freq[i] + 1);
                NL;
            }

            //cout << tmp << " " << ret << " " << endp[i] << " " << endp[j] << nl;
        }
    }

    return 0;
}
