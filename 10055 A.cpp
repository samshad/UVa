/// Name: Md. Samshad Rahman
/// Prob: 10055 - Hashmat the brave warrior

#include<stdio.h>

int main()
{
    long long a,b;

    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        long long d=a-b;
        if(d<0)d=d*-1;
        printf("%lld\n",d);
    }

    return 0;
}
