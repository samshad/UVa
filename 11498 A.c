/// Name: Md. Samshad Rahman
/// Prob: 11498 - Division of Nlogonia

#include <stdio.h>

int main()
{
    long long T, a, b, x, y;

    while(1)
    {
        scanf("%lld", &T);

        if(T==0)
            return 0;

        scanf("%lld%lld", &a, &b);

        while(T--)
        {
            scanf("%lld%lld", &x, &y);

            if(a==x || b==y)
                printf("divisa\n");

            else if(x>a && y>b)
                printf("NE\n");

            else if(x<a && y>b)
                printf("NO\n");

            else if(x<a && y<b)
                printf("SO\n");

            else if(x>a && y<b)
                printf("SE\n");
        }
    }

    return 0;
}
