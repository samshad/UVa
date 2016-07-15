/// Name: Md. Samshad Rahman
/// Prob: 10041 - Vito's Family

#include <stdio.h>

int main()
{
    int t, r, s[30000];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &r);

        int l;
        for(l=0; l<r; l++)
        {
            scanf("%d", &s[l]);
        }

        int u = (s[0] - s[r-1]);

        if(u<0)
            u = u*-1;

        printf("%d\n", u);
    }

    return 0;
}
