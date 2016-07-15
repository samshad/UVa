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
    int a[10], t, l, i, n;

    scanf("%d", &t);

    while(t--)
    {
        memset(a, 0, sizeof a);

        scanf("%d", &n);

        for(l = 1; l <= n; l++)
        {
            i = l;

            while( i )
            {
                a[ i % 10 ]++;
                i /= 10;
            }
        }

        for(l = 0; l < 9; l++)
        {
            printf("%d ", a[l]);
        }

        printf("%d\n", a[9]);
    }

    return 0;
}
