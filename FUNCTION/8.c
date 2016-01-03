#include <stdio.h>

int find_sum(int ara[],int a,int b);

int main()
{
    int ara[]={13,15};

    int sum,a,b;

    sum=find_sum(ara,a,b);

    printf("%d\n",sum);

    return 0;
}
int find_sum(int ara[],int a,int b)
{
     a=13;

     b=15;

    int sum=a+b;

    return sum;
}

