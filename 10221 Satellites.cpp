/// Name: Md. Samshad Rahman
/// Prob: 10221 - Satellites

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
    double r,a,d,arc,chord,rad;
    char str[10];
    while(scanf("%lf %lf %s",&r,&a,str)!=EOF)
    {
        if(str[0]=='m')
        {
            if(a>180)
                a=360-a;
            a=a/60.0;
            rad=(pi*a)/180.0;
        }
        else
        {
            if(a>180)
                a=360-a;
            rad=(pi*a)/180.0;
        }
        arc=(r+6440)*rad;
        chord=2*(r+6440)*sin(rad/2.0);
        printf("%0.6lf %0.6lf\n",arc,chord);
    }
    return 0;
}
