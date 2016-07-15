/// Name: Md. Samshad Rahman
/// Prob: 10783 - Odd Sum

#include <stdio.h>

int main()
{
    int a, b, c=0, T, l;

    scanf("%d", &T);

    while(T--)
    {
        int s=0;

        scanf("%d", &a);
        scanf("%d", &b);

        for(l=a; l<=b; l++)
        {
            if(l%2!=0)
                s=s+l;
        }

        c++;

        printf("Case %d: %d\n", c, s);
    }

    return 0;
}
