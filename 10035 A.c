/// Name: Md. Samshad Rahman
/// Prob: 10035 - Primary Arithmetic

#include <stdio.h>

int main()
{
    long int a, b;
    int c, s;

    while(scanf("%ld %ld", &a, &b))
    {
        if(a == 0 && b == 0)
        {
            break;
        }

        c=0, s=0;

        do
        {
            s = (a%10 + b%10 + s)/10;
            a = a/10;
            b = b/10;

            if(s == 1)
                c = c+s;
        }
        while((a != 0) || (b != 0));

        if(c == 0)
            printf("No carry operation.\n");

        else
        {
            if(c == 1)
                printf("1 carry operation.\n");

            else
                printf("%d carry operations.\n", c);
        }
    }

    return 0;
}
