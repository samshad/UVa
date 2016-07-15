/**********************************************************************
 *                  BISMILLAHIR RAHMANIR RAHIM                        *
 *                                                                    *
 * "There's a benefit to losing, you get to learn from your mistakes" *
 *                                                                    *
 *             UVa: 12136 - Schedule of a Married Man                 *
 **********************************************************************/

#include<bits/stdc++.h>

using namespace std;

//#include<algorithm>
//#include<cstdio>
//#include<sstream>
//#include<cstdlib>
//#include<cctype>
//#include<cmath>
//#include<set>
//#include<queue>
//#include<stack>
//#include<list>
//#include<iostream>
//#include<fstream>
//#include<numeric>
//#include<string>
//#include<vector>
//#include<cstring>
//#include<map>
//#include<iterator>
//#include<deque>
//#include<climits>
//#include<complex>

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

#define FOR(i,j,k) for(i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define REV(i,j,k) for(i = j; i > k; i--)
#define PI acos(-1.0)

#define INF_MAX 2147483647
#define INF_MIN -2147483647
//#define sz 100

#define pb(x) push_back(x)
#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define ssz(a) strlen(a)
#define eps 1e-9

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

//template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
//template <typename T> T ModInv (T b,T m){return BigMod(b,m-2,m);}
//template <typename T> T in(){char ch;T n = 0;bool ng = false;while (1){ch = getchar();if (ch == '-'){ng = true;ch = getchar();break;}if (ch>='0' && ch<='9')     break;}while (1){n = n*10 + (ch - '0');ch = getchar();if (ch<'0' || ch>'9')   break;}return (ng?-n:n);}
//template <typename T> T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return SQR(POW(B,P/2));}
//template <typename T> T Bigmod(T b,T p,T m){ if(p==0) return 1; else if (!(p&1)) return SQR(Bigmod(b,p/2,m)) % m;else return ((b % m) * Bigmod(b,p-1,m)) % m;}
//template <typename T> T Dis(T x1,T y1,T x2, T y2){return sqrt( SQR(x1-x2) + SQR(y1-y2) );}
//template <typename T> T Angle(T x1,T y1,T x2, T y2){ return atan( double(y1-y2) / double(x1-x2));}
//template <typename T> T DIFF(T a,T b) { T d = a-b;if(d<0)return -d;else return d;}
//template <typename T> T ABS(T a) {if(a<0)return -a;else return a;}
//template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
//template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}
//template <typename T> T euclide(T a,T b,T &x,T &y) {if(a<0){T d=euclide(-a,b,x,y);x=-x;return d;}   if(b<0){T d=euclide(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=euclide(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
//template <typename T> void ia (T a[],int n){for (int i=0; i<n; i++) cin >> a[i];}
//template <typename T> void pa (T a[],int n){for (int i=0; i<n-1; i++) cout << a[i] << " ";cout << a[n-1] << endl;}
//template <typename T> LL isLeft(T a,T b,T c) { return (a.x-b.x)*(b.y-c.y)-(b.x-c.x)*(a.y-b.y); }

//template<class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
//template<class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

//#define CFw

const int siz = 100000 + 10;

int main(){
    //std::ios_base::sync_with_stdio(0);
    #ifdef CFw
        while(1){
    #endif
    //FI;FO;

    int t, a, b, c, d, z = 0, l, i, n, len;

    si(t);

    while(t--){
        sf("%d:%d %d:%d", &a, &b, &c, &d);

        int wa = (a*60) + b;
        int wb = (c*60) + d;

        sf("%d:%d %d:%d", &a, &b, &c, &d);

        int ma = (a*60) + b;
        int mb = (c*60) + d;

        if(mb < wa || ma > wb)
            pcs(++z, "Hits Meeting\n");

        else
            pcs(++z, "Mrs Meeting\n");
    }

    #ifdef CFw
    NL;
    }
    #endif

    return 0;
}
