/// Name: Md. Samshad Rahman
/// Prob: 10038 - Jolly Jumpers

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

using namespace std;

int fabs(int a)
{
    if( a < 0 )
    {
        a *= -1;
        return a;
    }

    else
        return a;
}

int main()
{
    int l, n, i;
    bool jolly;

    while(scanf("%d", &n) != EOF)
    {
        int a[n], b[n+5];

        for(l = 0; l < n; l++)
            scanf("%d", &a[l]);

        i = 1;

        for(l = 0; l < n-1; l++)
            b[i++] = fabs( a[l + 1] - a[l] );

        sort(b, b + i);

        jolly = true;

        for(l = 1; l < i; l++)
        {
            if(b[l] != l)
            {
                jolly = false;
                break;
            }
        }

        if(jolly)
            printf("Jolly\n");

        else
            printf("Not jolly\n");
    }

    return 0;
}
