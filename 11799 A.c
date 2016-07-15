/// Name: Md. Samshad Rahman
/// Prob: 11799 - Horror Dash

#include <stdio.h>

int main()
{
    int T, l, c=0, n;
    long int a, m;

    scanf("%d", &T);

    while(T--)
    {
        c++;
        m=0;

        scanf("%d", &n);

        for(l=0; l<n; l++)
        {
            scanf("%ld", &a);

            if(m<a)
                m = a;
        }

        printf("Case %d: %ld\n", c, m);
    }

    return 0;
}
