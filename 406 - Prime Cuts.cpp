/// Name: MD. Samshad Rahman
/// Prob: 406 - Prime Cuts

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

bool isUpperCase(char c){return c>='A' && c<='Z';}
bool isLowerCase(char c){return c>='a' && c<='z';}
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
bool isDigit(char c){return c>='0' && c<='9';}
char toLowerCase(char c){return (isUpperCase(c))?(c+32):c;}
char toUpperCase(char c){return (isLowerCase(c))?(c-32):c;}

template<class T> inline T MAX( T a, T b ) { return a>b?a:b; }
template<class T> inline T MIN( T a, T b ) { return a<b?a:b; }
template<class T> inline void SWAP( T &a, T &b ) { a=a^b; b=a^b; a=a^b; }
template<class T, class T1>inline void Reverse( T1 A[], T i, T j ) { for( ; i<j; i++,j-- ) SWAP( A[i], A[j] ); }
template<class T> inline T fAbs( T a ) { return a<0?a*(-1):a; }
template<class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
template<class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

int prime[10000];
int cut[1010];
void sieve(int n);

int main(){
    sieve(1015);
    int l, n, s, c;
    bool st = 0;

    while(sii(n,c) != EOF){
        s = 0;
        l = 1;

        while(cut[l] <= n){
            s++;
            l++;
        }

        int k = s/2;

        if(c*2 <= s){
            if(s % 2 == 0){
                pf("%d %d: ", n, c);
                pi(cut[k-1]);
                ps(" ");
                FOR(l, 1, c*2){
                    pi(cut[k++]);
                    ps(" ");
                }
            }

            else{
                pf("%d %d: ", n, c);
                FOR(l, 0, (c*2)-1){
                    pi(cut[k++]);
                    ps(" ");
                }
            }
        }

        else{
            pf("%d %d: ", n, c);
            FOR(l, 1, s+1){
                pi(cut[l]);
                ps(" ");
            }
        }
        NL;
        NL;
        //pi(s);
    }

    return 0;
}

void sieve(int n)
{
    int i, j, sqrtn;

    prime[1] = 1;

    mem(prime,0);
    mem(cut,0);

    sqrtn = (sqrt((double)n));

    for(i = 3; i <= sqrtn; i += 2)
    {
        if(prime[i] == 0)
        {
            for(j = i*i; j <= n; j+= i+i)
                prime[j] = 1;
        }
    }

    int l, k = 3;

    cut[1] = 1, cut[2] = 2;

    FOR(l, 3, 1001){
        if(prime[l] == 0 && l % 2 != 0)
            cut[k++] = l;
    }
}
