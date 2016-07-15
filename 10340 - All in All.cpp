/// Name: Md. Samshad Rahman
/// Prob: 10340 - All in All

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
#define nl "\n"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

const double EPS = 1e-11;

int main()
{
    string s1, s2;

    int l, i, b;

    while(cin >> s1 >> s2)
    {
        int len = s1.length();
        int slen = s2.length();

        l = 0, i = 0, b = 0;

        while( i < slen )
        {
            if(s1[l] == s2[i])
            {
                b++;
                l++;
                i++;
            }

            else
                i++;
        }

        if(b == len)
            cout << "Yes" << nl;

        else
            cout << "No" << nl;
    }

    return 0;
}
