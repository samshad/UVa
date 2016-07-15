/// Name: Md. Samshad Rahman
/// Prob: 727 - Equation

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
#define nl "\n"

using namespace std;

int main()
{
    int l, t;

    stack<char> infix, postfix;

    char in;
    string ex;

    ci >> t;

    while(t--)
    {
        ci >> in;

        l = 0;

        while(ci >> in != "\n")
        {
            if(in != '(' && in != ')' && in != '/' && in != '*' && in != '-' && in != '+')
                postfix.push(in);

            else{
                if(in == '(')
                    infix.push(in);

                else if(in == ')'){
                    while(infix.top() != '('){
                                postfix.push(infix.top());
                                infix.pop();
                          }
                    if(infix.top() == '(')
                        infix.pop();
                }

                else if(in == '+' || in == '-'){
                    while(infix.top() == '+' || infix.top() == '-' || infix.top() == '/' || infix.top() == '*'){
                        postfix.push(infix.top());
                        infix.pop();
                    }

                    infix.push(in);
                }

                else if(in == '*' || in == '/'){
                    while(infix.top() == '*' || infix.top() == '/'){
                        postfix.push(infix.top());
                        infix.pop();
                    }

                    infix.push(in);
                }
            }

            if(!infix.empty()){
                while(!infix.empty()){
                    postfix.push(infix.top());
                    infix.pop();
                }
            }

            while(!postfix.empty()){
                co << postfix.top();
                postfix.pop();
            }
        }

        co << nl << nl;
    }

    return 0;
}
