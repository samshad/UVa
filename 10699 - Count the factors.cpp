#include <bits/stdc++.h>

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
#define ps(ch) printf("%s",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define NL printf("\n")
#define debug(x) printf("Debug  %d !!\n",x)
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define REV(i,j,k) for(i = j; i > k; i--)
#define PI acos(-1.0)

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define sz 100

#define pb(x) push_back(x)
//#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define eps 1e-9

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

//template<class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
//template<class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

int prime[1000100];
int op[1000100], len;
void sieve();

int main(){
    //std::ios_base::sync_with_stdio(0);
    FI;
    //FO;

    int a, b, c, i, n, l, k;

    sieve();

    while(si(n) && n){
        c = 0;

        rep(l, len){
            if( !(n%op[l]) ){
                c++;
            }
        }

        pi(n);
        pf(" : ");
        pi(c);
        NL;
    }

    return 0;
}

void sieve(){
    int i, j, sqrtn;
    int n = 1000000;

    mem(prime,1);

    prime[0] = prime[1] = 0;

    sqrtn = (sqrt((double)n));

    /*for(i = 3; i <= sqrtn; i += 2){
        if(prime[i] == 1){
            for(j = i*i; j <= n; j+= i+i)
                prime[j] = 0;
        }
    }*/

    for(i = 2; i <= sqrtn; ++i){
        if(prime[i]){
            for( j = i << 1; j <= 1000000; j += i )
                prime[j] = 0;
        }
    }

    len = 0;

    rep(i, 1000010){
        if( (prime[i] && i & 1) || i == 2 ){
            op[len++] = i;
        }
    }
}
