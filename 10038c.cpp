#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,arr[3001],arr2[3005],x;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&arr[i]);


        for(i=1; i<=n; i++)
        {
            arr2[i]=abs(arr[i]-arr[i+1]);
        }

        sort(arr2,arr2+n);
        x=0;

        for(i=1; i<n; i++)
        {
            if (arr2[i]!=i)
                x++;
        }

        if(x==0)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
}
