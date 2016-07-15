/// Name: Md. Samshad Rahman
/// Prob: 11462 - Age Sort

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

int main()
{
    int l, i, t;
    long long n;

    while(scanf("%lld", &n))
    {
        if(n == 0) break;

        int age[n];

        for(l=0; l<n; l++)
            scanf("%d", &age[l]);

        sort(age,age+n);

        for(l=0; l<n; l++)
        {
            if(l == n-1)
                printf("%d", age[l]);

            else
                printf("%d ", age[l]);
        }

        printf("\n");
    }

    return 0;
}
