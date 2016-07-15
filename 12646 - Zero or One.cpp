/// Name: Md. Samshad Rahman
/// Prob: 12646 - Zero or One

#include <cstdio>

int main()
{
    int a[2], l;

    while(scanf("%d %d %d", &a[0], &a[1], &a[2]) != EOF)
    {
        if((a[0]+a[1]+a[2]) == 0 || (a[0]+a[1]+a[2]) == 3)
            printf("*\n");

        else if((a[0]+a[1]+a[2]) == 2)
        {
            if(a[0] == 0)
                printf("A\n");

            else if(a[1] == 0)
                printf("B\n");

            else
                printf("C\n");
        }

        else
        {
            if(a[0] == 1)
                printf("A\n");

            else if(a[1] == 1)
                printf("B\n");

            else
                printf("C\n");
        }
    }

    return 0;
}
