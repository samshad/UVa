#include<cstdio>

int main()
{
    long long a, b, h, w, p, l, m, i, n, t;
    bool status;

    while(scanf("%lld %lld %lld %lld", &n, &b, &h, &w) != EOF)
    {
        m = (b + 1);

        for(i=0; i<h; i++)
        {
            status = 0;

            scanf("%lld", &p);
            int a[w];
            for(l=0; l<w; l++)
            {
                scanf("%d", &a[l]);

                if(a[l] >= n)
                {
                    status = 1;
                }
            }

            if(status)
            {
                t = n * p;

                if(m > t){
                    m = t;}
            }
        }

        if(m <= b)
            printf("%lld\n", m);

        else
            printf("stay home\n");
    }

    return 0;
}
