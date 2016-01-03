#include<stdio.h>

int main()
{
    double num1,num2,sum,sub,mul,mov;

    scanf("%lf%lf",&num1,&num2);

    sum=num1+num2;

    sub=num1-num2;

    mul=num1*num2;

    mov=num1/num2;

    printf("%lf\n",sum);

    printf("%lf\n",sub);

    printf("%lf\n",mul);

    printf("%lf\n",mov);

    return 0;
}
