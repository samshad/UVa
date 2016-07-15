/// Name: Md. Samshad Rahman
/// Prob: 10370 - Above Average

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

int main()
{
    int c, n, t, l, s;
    double b, above;

    scanf("%d", &t);

    while(t--)
    {
        s = 0;

        scanf("%d", &n);

        int a[n];

        for(l = 0; l < n; l++)
        {
            scanf("%d", &a[l]);
            s += a[l];
        }

        b = double (s) / double (n);

        c = 0;

        for(l = 0; l < n; l++)
        {
            if(a[l] > b)
                c++;
        }

        above = (double (c) / double (n)) * 100;

        printf("%.3lf%%\n", above);
    }

    return 0;
}
