#include <stdio.h>
#include <string.h>
#define sz 100000

int main()
{
    int l;
    char a[sz];

    while(gets(a))
    {
        int n = strlen(a);

        for(l=0; l<n; l++)
        {
            printf("%c", a[l]-7);
        }

        printf("\n");
    }

    return 0;
}
