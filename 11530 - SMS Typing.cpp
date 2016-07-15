/// Name: MD. Samshad Rahman
/// Prob: 11530 - SMS Typing

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
#define pfcs(x,y) printf("Case %d: %s", x, y)
#define pfcd(x,y) printf("Case #%d: %d", x, y)
#define nl printf("\n")
#define pf printf
#define FOR(i,j,k) for(i = j; i < k; i++)
#define mem(x,n) memset((x),(n),sizeof((x)))
#define pi acos(-1.0)

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
#define sz 110

int main()
{
    int l, t, len, c = 0;
    char ch, a[sz];

    sf1(t);
    sf("%c", &ch);

    while(t--){
        int sum = 0;
        mem(a,'\0');
        fgets(a, sz, stdin);

        len = strlen(a);
        /*
        if(a[len-1] != '\0'){
            a[len-1] = '\0';
            len--;
        }
        */

        FOR(l, 0, len){
            if(a[l] == ' ' || a[l] == 'a' || a[l] == 'd' || a[l] == 'g' || a[l] == 'j' || a[l] == 'm' || a[l] == 'p' || a[l] == 't' || a[l] == 'w')
                sum += 1;

            else if(a[l] == 'b' || a[l] == 'e' || a[l] == 'h' || a[l] == 'k' || a[l] == 'n' || a[l] == 'q' || a[l] == 'u' || a[l] == 'x')
                sum += 2;

            else if(a[l] == 'c' || a[l] == 'f' || a[l] == 'i' || a[l] == 'l' || a[l] == 'o' || a[l] == 'r' || a[l] == 'v' || a[l] == 'y')
                sum += 3;

            else if(a[l] == 's' || a[l] == 'z')
                sum += 4;
        }

        pfcd(++c, sum);
        nl;
    }

    return 0;
}
