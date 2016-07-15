/// Name: MD. Samshad Rahman
/// Prob: 541 - Error Correction

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
#define piii(x,y,z) printf("%d %d %d",x,y,z)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define plll(x,y,z) printf("%lld %lld %lld",x,y,z)
#define ps(ch) printf("%s",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %lld: %lld", x, y)
#define pcii(x,y,z) printf("Case %d: %d %d", x, y, z)
#define pcll(x,y,z) printf("Case %lld: %lld %lld", x, y, z)
#define NL printf("\n")
#define debug(x) printf("wow  %d !!\n",x)
#define Max 100005
#define INF 100000000
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(i = j; i < k; i++)
#define REV(i,j,k) for(i = j; i > k; i--)
#define PI acos(-1.0)

#define pb(x) push_back(x)
#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define eps 1e-9

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int myar[110][110];
int row[110], col[110];

int main(){
    int l, i, len, r, c, n, a, b;

    while(si(n)){
        if(n == 0)
            break;

        mem(myar, 0);
        mem(row, 0);
        mem(col, 0);

        FOR(i, 1, n+1){
            FOR(l, 1, n+1){
                si(myar[i][l]);
            }
        }

        FOR(i, 1, n+1){
            FOR(l, 1, n+1){
                row[i] += myar[i][l];
                col[l] += myar[i][l];
            }
        }

        /*FOR(i, 1, n+1){
            //FOR(l, 1, n+1){
                pi(row[i]);
                NL;
                //pi(col[l]);
            //}
        }

        NL;

        FOR(l, 1, n+1){
            //FOR(l, 1, n+1){
                pi(col[l]);
                NL;
                //pi(col[l]);
            //}
        }*/

        r = 0, c = 0;

        FOR(l, 1, n+1){
            if(row[l] % 2 != 0){
                r++;
                a = l;
            }
        }

        FOR(l, 1, n+1){
            if(col[l] % 2 != 0){
                c++;
                b = l;
            }
        }

        if(r == 0 && c == 0)
            ps("OK\n");

        else if(r == 1 && c == 1)
            pf("Change bit (%d,%d)\n", a, b);

        else
            ps("Corrupt\n");

    }

    return 0;
}
