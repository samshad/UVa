/// Name: Md. Samshad Rahman
/// Prob: 11417 - GCD

#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int i, j, N, G;

    while(scanf("%d", &N))
    {
        if(N == 0)
            break;

        G = 0;

        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G+=gcd(i,j);
            }
        }
        printf("%d\n", G);
    }

    return 0;
}

int gcd(int a, int b)
{
    int rem = -1;

    while(rem)
    {
        rem = b%a;
        b = a;
        a = rem;
    }

    return b;
}
