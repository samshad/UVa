/// Name: Md. Samshad Rahman
/// Prob: 494 - Kindergarten Counting Game

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

const int sz = 1e4 + 10;
char str[sz];
char sentence[sz];

int main()
{
    int c, i, l;
    bool chq;
    memset(str, 0, sizeof(str));

    while(fgets(str, sz, stdin) != NULL)
    {
        memset(sentence, 0, sizeof(sentence));
        c = 0;
        i = 0;

        int len = strlen(str);

        if(str[len-1] != '\0')
            str[len-1] = '\0';
            len--;

        for(l=0; l<len; l++)
        {
            chq = false;

            if((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z'))
            {
                chq = true;

                while((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z'))
                {
                    sentence[i++] = str[l];
                    l++;
                }
            }

            if(chq)
                sentence[i++] = ' ';
        }

        len = strlen(sentence);

        for(l=0; l<len; l++)
        {
            if(sentence[l] == ' ')
                c++;
        }

        printf("%d\n", c);
    }

    return 0;
}
