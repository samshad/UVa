// Name: Md. Samshad Rahman
// Prob: 11727 - Cost Cutting

#include <stdio.h>

int main()
{
    int T, a[3], c=0, l, t;

    scanf("%d", &T);

    while(T--)
    {
        c++;

        for(l=0; l<3; l++)
            scanf("%d", &a[l]);

        while(1)
        {
            t=0;

            for(l=0; l<2; l++)
            {
                if(a[l]>a[l+1])
                {
                    a[l] = a[l]+a[l+1];
                    a[l+1] = a[l]-a[l+1];
                    a[l] = a[l]-a[l+1];

                    t=1;
                }
            }

            if(t==0)
                break;
        }

        printf("Case %d: %d\n", c, a[1]);
    }

    return 0;
}
