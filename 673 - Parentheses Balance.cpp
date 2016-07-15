/// Name: Md. Samshad Rahman
/// Prob: 673 - Parentheses Balance

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
#define sz 200

using namespace std;

static char s[sz];

int top = -1;

void push(char a)
{
    s[++top] = a;
}

void pop()
{
    top--;
}

int main()
{
    int l, t;
    char ch;
    char arr[sz];

    sf("%d%c", &t,&ch);

    while(t--)
    {
        top = -1;
        fgets(arr, sz, stdin);

        int len = strlen(arr);

        if(arr[len-1] != '\0')
        {
            arr[len-1] = '\0';
            len--;
        }

        for(l = 0; l < len; l++)
        {
            if(arr[l] == '(' || arr[l] == '[')
                push(arr[l]);

            else if(arr[l] == ')')
            {
                if(s[top] == '(')
                    pop();

                else
                {
                    push(arr[l]);
                    break;
                }
            }

            else if(arr[l] == ']')
            {
                if(s[top] == '[')
                    pop();

                else
                {
                    push(arr[l]);
                    break;
                }
            }
        }

        if( top == -1 )
            pf("Yes\n");

        else
            pf("No\n");
    }

    return 0;
}
