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

bool isv(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;

    else
        return 0;
}

char a[100], b[100];

int main(){
    //std::ios_base::sync_with_stdio(0);
    //FI;FO;
    int n, l, len1, len2, i, j, c;
    bool z;

    si(n);

    while(n--){
        ss(a);
        ss(b);

        len1 = strlen(a);
        len2 = strlen(b);

        i = j = c = 0;
        z = 1;

        if(len1 != len2){
            pf("No\n");
        }

        else{
            rep(l,len1){
                if(isv(a[l]))
                    i++;

                if(isv(b[l]))
                    j++;

                if(!isv(a[l]) && !isv(b[l]) && a[l] != b[l]){
                    pf("No\n");
                    z = 0;
                    break;
                }

                else{
                    if(isv(a[l]) && isv(b[l])){
                        c++;
                    }
                }
            }

            if(z){
                if(c == i && c == j)
                    pf("Yes\n");

                else
                    pf("No\n");
            }
        }
    }

    return 0;
}
