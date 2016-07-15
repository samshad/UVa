/// Name: Md. Samshad Rahman
/// Prob: 11479 - Is this the easiest problem?

#include <stdio.h>

int main()
{
    int T, d=0;
    long long int a, b, c;

    scanf("%d", &T);

    while(T--)
    {
        d++;

        scanf("%lld %lld %lld", &a ,&b, &c);

        if((a+b)>c && (a+c)>b && (b+c)>a)
        {
            if((a == b) && (b == c))
                printf("Case %d: Equilateral\n", d);

            else if((a == b) || (b == c) || (a == c))
                printf("Case %d: Isosceles\n", d);

            else
                printf("Case %d: Scalene\n", d);
        }

            else
                printf("Case %d: Invalid\n", d);
    }

    return 0;
}
