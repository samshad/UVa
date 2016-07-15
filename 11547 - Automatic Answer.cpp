/// Name: Md. Samshad Rahman
/// Prob: 11547 - Automatic Answer

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
#define sf1(x) scanf("%lld", &x)
#define sf scanf
#define pf1(x) printf("%lld\n", x)
#define pf printf
#define nl "\n"
#define FOR(i,j,k) for(i = j; i < k; i++)

using namespace std;

int main(){
    long long n, l, a, t;

    sf1(t);

    while(t--){
        sf1(n);

        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        n /= 10;
        n %=10;

        if(n < 0)
            n *= -1;

        pf1(n);
    }

    return 0;
}
