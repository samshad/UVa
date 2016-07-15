/// Name: Md. Samshad Rahman
/// Prob: 10235 - Simply Emirp

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
#define sz 1000100

int prime[sz];

void sieve(int n)
{
    int i, j, sqrtn;

    for(i = 2; i <= n; i++)
        prime[i] = 0;

    sqrtn = ( sqrt( double (n) ));

    for(i = 3; i <= sqrtn; i += 2)
    {
        if(prime[i] == 0)
        {
            for(j = i * i; j <= n; j += i + i)
            prime[j] = 1;
        }
    }
}

int reversen(int n)
{
    int newn = 0;

    while(n)
    {
        newn *= 10;
        newn += (n % 10);
        n /= 10;
    }

    return newn;
}

int main()
{
    sieve(sz);
    prime[1] = 1;

    int a, t;

    while(scanf("%d", &a) != EOF)
    {
        if( a % 2 == 0 )
        {
            if( a == 2 )
                printf("%d is prime.\n", a);

            else
                printf("%d is not prime.\n", a);
        }

        else if(prime[a] == 0)
        {
            t = reversen(a);

            if( prime[t] == 0 && t != a && (t % 2) != 0 )
                printf("%d is emirp.\n", a);

            else
                printf("%d is prime.\n", a);
        }

        else
            printf("%d is not prime.\n", a);
    }

    return 0;
}
