/// Name: Md. Samshad Rahman
/// Prob: 12289 - One-Two-Three

#include<cstdio>
#include<cstring>

int main()
{
    char digit[5];

    int l, t;

    scanf("%d", &t);

    while( t-- )
    {
        memset(digit,5,0);
        scanf( "%s", &digit );

        int len = strlen( digit );
        int n = len;

        if( len == 5 )
        {
            printf( "3\n" );
            continue;
        }

        int c = 0;

        if(digit[0] == 'o')
            c++;
        if(digit[1] == 'n')
            c++;
        if(digit[2] == 'e')
            c++;

        if( c >= 2)
        {
            printf("1\n");
        }

        else
            printf("2\n");
    }

    return 0;
}
