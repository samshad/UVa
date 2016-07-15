/// Name: Md. Samshad Rahman
/// Prob: 10879 - Code Refactoring

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
    int k, l, pos, a[10], cs = 0, t;

    sf1(t);

    while(t--){
        sf1(k);
        pos = 0;

        int len = (int) sqrt(k);

        FOR(l, 2, len+3){
            if(k % l == 0){
                a[pos++] = l;
                a[pos++] = k / l;

                if(pos == 4)
                    break;
            }
        }

        pf("Case #%d: %d = %d * %d = %d * %d\n", ++cs, k, a[0], a[1], a[2], a[3]);
    }

    return 0;
}
