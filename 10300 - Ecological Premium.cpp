/// Name: Md. Samshad Rahman
/// Prob: 10300 - Ecological Premium

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
#define tkc(x) scanf("%c", &x)
#define sf scanf
#define pf1(x) printf("%d ", x)
#define pfc(x) printf("%c", x)
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

const double EPS = 1e-11;

int main(){

    int t, f, c, a, b, d;

    long long s;

    sf("%d", &t);

    while(t--){
        sf("%d", &f);

        s = 0;

        while(f--){
            sf("%d %d %d", &a, &b, &c);

            s = s + (a * c);
        }

        pf("%lld\n", s);
    }

    return 0;
}
