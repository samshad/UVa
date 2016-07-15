/// Name: Md. Samshad Rahman
/// Prob: 11172 - Relational Operators

#include <stdio.h>

int main()
{
    int T, a, b;

    scanf("%i", &T);

    while(T--)
    {
        scanf("%i%i", &a, &b);

        if(a==b)
            printf("=\n");

        else if(a<b)
            printf("<\n");

        else if(a>b)
            printf(">\n");
    }

    return 0;
}
