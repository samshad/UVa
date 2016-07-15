/// Name: Md. Samshad Rahman
/// Prob: 10189 - Minesweeper

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
    int t, l, i, line, box, c = 0;
    char z, a[150][150];
    bool blank = 0;

    while(sf("%d %d%c", &line, &box, &z) != EOF){
        if(line == 0 && box == 0)
            return 0;

        long mine[150][150] = {0};

        FOR(l, 0, line){
            gets(a[l]);
        }

        FOR(i, 0, line){
            FOR(l, 0, box){
                if(a[i][l] == '*'){
                    mine[i][l+1]++;
                    mine[i][l-1]++;
                    mine[i-1][l-1]++;
                    mine[i-1][l]++;
                    mine[i-1][l+1]++;
                    mine[i+1][l]++;
                    mine[i+1][l-1]++;
                    mine[i+1][l+1]++;
                }
            }
        }

        if(blank)
            pf("\n");

        blank = 1;

        pf("Field #%d:\n", ++c);

        FOR(i, 0, line){
            FOR(l, 0, box){
                if(a[i][l] == '*')
                    pf("%c", a[i][l]);

                else
                    pf("%ld", mine[i][l]);
            }
            pf("\n");
        }
    }

    return 0;
}
