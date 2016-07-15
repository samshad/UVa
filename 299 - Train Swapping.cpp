/// Name: Md. Samshad Rahman
/// Prob: 299 - Train Swapping

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
    int t, n, l, i, c, tm;

    scanf("%d", &t);

    while(t--)
    {
        c=0;

        scanf("%d", &n);
        int ar[n];

        for(l=0; l<n; l++)
        {
            scanf("%d", &ar[l]);
        }

        for(i=0; i<n-1; i++)
        {
            for(l=0; l<n-i-1; l++)
            {
                if(ar[l] > ar[l+1])
                {
                    tm = ar[l];
                    ar[l] = ar[l+1];
                    ar[l+1] = tm;
                    c++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", c);
    }

    return 0;
}
