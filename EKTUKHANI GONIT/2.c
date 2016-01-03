#include <stdio.h>

int main()
{
    double a1,b1,a2,b2,c1,c2,x,y;

    scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&a2,&b2,&c1,&c2);

    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);

    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);

    printf("%0.2lf,%0.2lf",x,y);

    return 0;
}
