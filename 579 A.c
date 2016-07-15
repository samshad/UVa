/// Name: Md. Samshad Rahman
/// Prob: 579 - ClockHands

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    double x, y;

    while(scanf("%d:%d", &a, &b))
    {
        if(a == 0 && b == 0)
            break;

        x = 0.5 * (a*60 + b);
        y = 6*b;

        double ang = fabs(x-y);

        double m = 360-ang;

        if(m<ang)
            printf("%.3lf\n", m);

        else
            printf("%.3lf\n", ang);
    }

    return 0;
}
