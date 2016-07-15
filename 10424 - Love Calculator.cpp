/// Name: Md. Samshad Rahman
/// Prob: 10424 - Love Calculator

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

int digit(int n);

int main(){
    int sum1, sum2, p1, p2, l, n, s1, s2;

    double rslt;

    char a[50], b[50];

    while(gets(a)){
        gets(b);

        sum1 = 0, sum2 = 0;

        s1 = strlen(a);

        FOR(l, 0, s1){
            if(a[l] == 'a' || a[l] == 'A')
                sum1 += 1;

            else if(a[l] == 'b' || a[l] == 'B')
                sum1 += 2;

            else if(a[l] == 'c' || a[l] == 'C')
                sum1 += 3;

            else if(a[l] == 'd' || a[l] == 'D')
                sum1 += 4;

            else if(a[l] == 'E' || a[l] == 'e')
                sum1 += 5;

            else if(a[l] == 'f' || a[l] == 'F')
                sum1 += 6;

            else if(a[l] == 'G' || a[l] == 'g')
                sum1 += 7;

            else if(a[l] == 'H' || a[l] == 'h')
                sum1 += 8;

            else if(a[l] == 'i' || a[l] == 'I')
                sum1 += 9;

            else if(a[l] == 'j' || a[l] == 'J')
                sum1 += 10;

            else if(a[l] == 'k' || a[l] == 'K')
                sum1 += 11;

            else if(a[l] == 'l' || a[l] == 'L')
                sum1 += 12;

            else if(a[l] == 'm' || a[l] == 'M')
                sum1 += 13;

            else if(a[l] == 'n' || a[l] == 'N')
                sum1 += 14;

            else if(a[l] == 'o' || a[l] == 'O')
                sum1 += 15;

            else if(a[l] == 'p' || a[l] == 'P')
                sum1 += 16;

            else if(a[l] == 'q' || a[l] == 'Q')
                sum1 += 17;

            else if(a[l] == 'r' || a[l] == 'R')
                sum1 += 18;

            else if(a[l] == 's' || a[l] == 'S')
                sum1 += 19;

            else if(a[l] == 't' || a[l] == 'T')
                sum1 += 20;

            else if(a[l] == 'u' || a[l] == 'U')
                sum1 += 21;

            else if(a[l] == 'V' || a[l] == 'v')
                sum1 += 22;

            else if(a[l] == 'w' || a[l] == 'W')
                sum1 += 23;

            else if(a[l] == 'x' || a[l] == 'X')
                sum1 += 24;

            else if(a[l] == 'y' || a[l] == 'Y')
                sum1 += 25;

            else if(a[l] == 'z' || a[l] == 'Z')
                sum1 += 26;
        }

        s1 = strlen(b);

        FOR(l, 0, s1){
            if(b[l] == 'a' || b[l] == 'A')
                sum2 += 1;

            else if(b[l] == 'b' || b[l] == 'B')
                sum2 += 2;

            else if(b[l] == 'c' || b[l] == 'C')
                sum2 += 3;

            else if(b[l] == 'd' || b[l] == 'D')
                sum2 += 4;

            else if(b[l] == 'E' || b[l] == 'e')
                sum2 += 5;

            else if(b[l] == 'f' || b[l] == 'F')
                sum2 += 6;

            else if(b[l] == 'G' || b[l] == 'g')
                sum2 += 7;

            else if(b[l] == 'H' || b[l] == 'h')
                sum2 += 8;

            else if(b[l] == 'i' || b[l] == 'I')
                sum2 += 9;

            else if(b[l] == 'j' || b[l] == 'J')
                sum2 += 10;

            else if(b[l] == 'k' || b[l] == 'K')
                sum2 += 11;

            else if(b[l] == 'l' || b[l] == 'L')
                sum2 += 12;

            else if(b[l] == 'm' || b[l] == 'M')
                sum2 += 13;

            else if(b[l] == 'n' || b[l] == 'N')
                sum2 += 14;

            else if(b[l] == 'o' || b[l] == 'O')
                sum2 += 15;

            else if(b[l] == 'p' || b[l] == 'P')
                sum2 += 16;

            else if(b[l] == 'q' || b[l] == 'Q')
                sum2 += 17;

            else if(b[l] == 'r' || b[l] == 'R')
                sum2 += 18;

            else if(b[l] == 's' || b[l] == 'S')
                sum2 += 19;

            else if(b[l] == 't' || b[l] == 'T')
                sum2 += 20;

            else if(b[l] == 'u' || b[l] == 'U')
                sum2 += 21;

            else if(b[l] == 'V' || b[l] == 'v')
                sum2 += 22;

            else if(b[l] == 'w' || b[l] == 'W')
                sum2 += 23;

            else if(b[l] == 'x' || b[l] == 'X')
                sum2 += 24;

            else if(b[l] == 'y' || b[l] == 'Y')
                sum2 += 25;

            else if(b[l] == 'z' || b[l] == 'Z')
                sum2 += 26;
        }

        p1 = sum1;
        p2 = sum2;

        while(p1 > 9){
            p1 = digit(p1);
        }

        while(p2 > 9){
            p2 = digit(p2);
        }

        if(p1 > p2)
            rslt = ((double)p2 / (double)p1) * 100;

        else
            rslt = ((double)p1 / (double)p2) * 100;

        pf("%.2lf %c\n", rslt, '%');

    }

    return 0;
}

int digit(int n){
    int s = 0;

    while(n){
        s += n%10;
        n /= 10;
    }

    return s;
}
