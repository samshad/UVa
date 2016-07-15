/// Name: Md. Samshad Rahman
/// Prob: 12015 - Google is Feeling Lucky

#include<cstdio>
#include<cstring>
#include<cstdlib>

struct site
{
    char url[100];
    int relevance;
}web[10], tm;

int main()
{
    int l, t, i, tcase=0;

    scanf("%d", &t);

    while(t--)
    {
        tcase++;

        for(l=0; l<10; l++)
        {
            scanf("%s %d", &web[l].url, &web[l].relevance);
        }

        for(i=0; i<9; i++)
        {
            for(l=0; l<10-i-1; l++)
            {
                if(web[l].relevance < web[l+1].relevance)
                {
                    tm = web[l];
                    web[l] = web[l+1];
                    web[l+1] = tm;
                }
            }
        }

        l = 0;

        printf("Case #%d:\n", tcase);

        while( (l < 10) && (web[l].relevance >= web[l+1].relevance) ) // to restrict l to 10 and the condition
        {
            if(l > 0)
            {
                if(web[l].relevance == web[l-1].relevance)
                {
                    printf("%s\n", web[l].url);
                    l++;
                }

                else
                    break;
            }

            else
            {
                printf("%s\n", web[l].url);
                l++;
            }
        }
    }

    return 0;
}
