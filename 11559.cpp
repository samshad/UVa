/// Name: Md. Samshad Rahman
/// Prob: 11559 - Event Planning

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
    int n, h, w;
    long long int p, b, cost;

    while(scanf("%d %lld %d %d", &n, &b, &h, &w) != EOF)
    {
        int l, ll, a[13], c;
        cost = 999999999999999999;

        for(ll=0; ll<h; ll++)
        {
            c = 1;
            scanf("%lld", &p);

            for(l=0; l<w; l++){
                scanf("%d", &a[l]);}

            for(l=0; l<w; l++)
            {
                if(a[l] < n){
                    c = 0;
                    break;}
            }

            if(c == 1){
                cost = p*n;}
        }

        if(c == 0)
            printf("stay home\n");

        else
            printf("%lld\n", cost);
    }
    return 0;
}
