/// Name: MD. Samshad Rahman
/// Prob: 11340 - Newspaper

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <fstream>
#include <set>
#include <ctime>

#define co cout
#define ci cin
#define sf1(x) scanf("%d", &x)
#define sfc(x) scanf("%c", &x)
#define sf scanf
#define pf1(x) printf("%lf\n", x)
#define pfs(x) printf("%s", x)
#define pfcs(x,y) printf("Case %d: %s", x, y)
#define pfcd(x,y) printf("Case %d: %d", x, y)
#define nl printf("\n")
#define pf printf
#define FOR(i,j,k) for(i = j; i < k; i++)
#define mem(x,n) memset((x),(n),sizeof((x)))
#define pi acos(-1.0)
#define sz 100010

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

const double EPS = 1e-11;
#define ss 110

char c[ss];
double v[ss];
char a[sz];

int main()
{
    int l, i, t, k, n, j;

    double cost;

    char ch;

    sf1(t);

    while(t--){
        sf1(k);

        FOR(l, 0, k){
            sf("%c %lf", &c[l], &v[l]);
        }

        int line;

        sf("%d%c", &line, &ch);

        cost = 0;

        FOR(i, 0, line){
            fgets(a, sz, stdin);

            n = strlen(a);

            pfs("asdfasdf");

            if(a[n-1] != '\0')
                a[n-1] = '\0';

            n--;

            FOR(l, 0, n){
                FOR(j, 0, k){
                    if(a[l] == c[j])
                        cost += v[j];
                }
            }
        }

        pf("%.2lf$\n", cost);
    }

    return 0;
}
