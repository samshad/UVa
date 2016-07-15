/// Name: Md. Samshad Rahman
/// Prob: 11764 - Jumping Mario

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
#define sf scanf
#define pf1(x) printf("%d ", x)
#define pf printf
#define nl "\n"
#define FOR(i,j,k) for(i = j; i < k; i++)

using namespace std;

int main(){
    int t, n, h, l, i, c = 0;

    sf1(t);

    while(t--){
        h = 0, l = 0, c++;

        sf1(n);

        int a[n];

        FOR(i, 0, n){
            sf1(a[i]);
        }

        FOR(i, 0, n-1){
            if(a[i] < a[i+1])
                h++;

            else if(a[i] > a[i+1])
                l++;
        }

        pf("Case %d: %d %d\n", c, h, l);
    }

    return 0;
}
