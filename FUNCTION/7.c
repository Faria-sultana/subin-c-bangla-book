#include <stdio.h>

int find_min(int ara[],int n);

int main()
{
    int ara[]={101,3,76,-32,0,54,31,90,11,-100};

    int n=17,min;

    min=find_min(ara,n);

    printf("%d\n",min);

    return 0;
}
int find_min(int ara[],int n)
{
    int i;

    int min=ara[0];

    for(i=1;i<n;i++){

        if(ara[i]<min){

            min=ara[i];
        }
    }
    return 0;
}
