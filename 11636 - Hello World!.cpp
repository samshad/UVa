/// Name: Md. Samshad Rahman
/// Prob: 11636 - Hello World!

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

int main()
{
    int a, l, b, c = 0;

    while( scanf("%d", &a) )
    {
        if( a < 0 )
            return 0;

        c++;

        if( a == 0 || a == 1 )
        {
            printf("Case %d: 0\n", c);
            continue;
        }

        b = 1;
        l = 0;

        while( b < a )
        {
            b *= 2;
            l++;
        }

        printf("Case %d: %d\n", c, l);
    }

    return 0;
}
