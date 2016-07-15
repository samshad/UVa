/// Name: Md. Samshad Rahman
/// Prob: 100 - The 3n + 1 Problem

#include <stdio.h>

int func(long long int a, long long int b);

int main()
{
    long long int i, j, c;

    while(scanf("%lld %lld", &i, &j) != EOF)
    {
        if(i>j)
        {
            i = i+j;
            j = i-j;
            i = i-j;

            c = func(i,j);

            printf("%lld %lld %lld\n", j, i, c);
        }

        else
        {
            c = func(i,j);

            printf("%lld %lld %lld\n", i, j, c);
        }
    }

    return 0;
}

int func(long long int a, long long int b)
{
    long long int l, c, n, m=0;

    for(l=a; l<=b; l++)
    {
        n = l;
        c = 1;

        while(n != 1)
        {
            c++;

            if(n%2 == 0)
                n = n/2;

            else
                n = n*3+1;
        }

        if(m<c)
            m = c;
    }

    return m;
}
