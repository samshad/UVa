/// Name: MD. Samshad Rahman
/// Prob: 12577 - Hajj-e-Akbar

#include <stdio.h>
#include <string.h>

int main()
{
    char n[10];
    int c=0;

    while(scanf("%s", n))
    {
        c++;

        if(strcmp(n, "*") == 0)
            break;

        else if(strcmp(n, "Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n", c);

        else
            printf("Case %d: Hajj-e-Asghar\n", c);
    }

    return 0;
}
