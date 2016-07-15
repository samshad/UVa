#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int fabs(int a)
{
    if(a < 0)
        return (a * -1);

    else
        return a;
}

int main()
{
    int t, l, n, i, s, c;

    scanf("%d", &t);

    while(t--)
    {
        s = 0;

        scanf("%d", &n);

        int a[n], tm;

        for(l = 0; l < n; l++)
            scanf("%d", &a[l]);

        for(i = 0; i < n; i++)
        {
            for(l = 0; l < n-i-1; l++)
            {
                if(a[l+1] > a[l])
                {
                    tm = a[l+1];
                    a[l+1] = a[l];
                    a[l] = tm;
                }
            }
        }

        //sort(a, a + n);

        c = a[n/2];

        for(l = 0; l < n; l++)
            s += fabs(c - a[l]);

        printf("%d\n", s);
    }

    return 0;
}
