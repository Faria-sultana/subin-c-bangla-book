#include <stdio.h>

int main()
{
    int i,n,sum;

    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++){
        if(i%2==1)
            sum=sum+i;

    }
    printf("%d\n",sum);

    return 0;
}
