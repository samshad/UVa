/// Name: MD. Samshad Rahman
/// Prob: 489 - Hangman Judge

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

int chq[260];

int main(){
    int l, i, n, w, ls, len1, c, len2;
    char a[10000], b[10000];

    while(si(n)){
        if(n == -1)
            return 0;

        mem(chq, 0);

        /*chq['a'] = 1;

        FOR(l, 0, 257){
            if(chq[l] == 1)
                pi(l);
        }*/

        w = 0, ls = 0;
        ss(a);
        ss(b);

        len1 = strlen(a);
        len2 = strlen(b);

        bool st = 0;

        FOR(i, 0, len2){
            st = 0;
            if(chq[b[i]] == 0){
                FOR(l, 0, len1){
                    if(b[i] == a[l]){
                        w++;
                        st = 1;
                    }

                    if(!st && l == len1-1){
                        ls++;
                    }
                chq[b[i]] = 1;
                }
                //chq[b[i]] = 1;
            }
            if(w >= len1 || ls >= 7)
                break;
        }

        if(ls >= 7){
            pf("Round %d\n", n);
            pf("You lose.\n");
        }

        else if(w >= len1){
            pf("Round %d\n", n);
            pf("You win.\n");
        }

        else{
            pf("Round %d\n", n);
            pf("You chickened out.\n");
        }
    }

    return 0;
}
