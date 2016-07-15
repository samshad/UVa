/// Name: MD. Samshad Rahman
/// Prob: 10945 - Mother bear

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
#define sfs(x) scanf("%s", x)
#define sf scanf
#define pf1(x) printf("%d", x)
#define pfs(x) printf("%s", x)
#define pfcs(x,y) printf("Case %d: %s", x, y)
#define pfcd(x,y) printf("Case %d: %d", x, y)
#define nl printf("\n")
#define pf printf
#define FOR(i,j,k) for(i = j; i < k; i++)
#define REV(i,j,k) for(i = j; i >= k; i--)
#define mem(x,n) memset((x),(n),sizeof((x)))
#define pi acos(-1.0)
#define sz 10000

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

int main()
{
    int l, len, t;

    char input[sz], a[sz], b[sz], done[] = "DONE";

    while(gets(input)){
        if(strcmp(input, "DONE") == 0)
            return 0;

        len = strlen(input);

        mem(a,'\0');
        mem(b,'\0');

        t = 0;

        FOR(l, 0, len){
            if(isLetter(input[l])){
                if(isUpperCase(input[l])){
                    a[t++] = toLowerCase(input[l]);
                }

                else
                    a[t++] = input[l];
            }
        }

        len = strlen(a);
        t = 0;

        REV(l, len-1, 0){
            b[t++] = a[l];
        }

        if(strcmp(a,b) == 0){
            pfs("You won't be eaten!\n");
        }

        else
            pfs("Uh oh..\n");
    }


    return 0;
}
