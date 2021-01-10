#include<stdio.h>
int main()
{
    int n, i=1, j, k;
    scanf("%d",&n);
    printf("%d\n",n);

    while(n!=1)
    {
        if(n%2==1)
            printf("%d\n",n=3*n+1);

        else if(n%2==0)
        printf("%d\n",n=n/2);

        i++;
    }
     printf("%d\n",i);
    return 0;
}
