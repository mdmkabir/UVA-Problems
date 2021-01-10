#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k=0, t,n, arr[1000],ma;
    char str[100][100];

    cin>>t;
    for(j=1; j<=t; j++)
    {
        k++;
        scanf("%s%d",&str[0],&arr[0]);
        ma=arr[0];

        for(i=1; i<10; i++)
        {
            scanf("%s%d",&str[i],&arr[i]);
            if(arr[i]>ma)
                ma=arr[i];
        }
        cout<< "Case #"<< k <<":"<<endl;
        for(i=0; i<10; i++)
        {
            if(arr[i]==ma)
            {
                printf("%s\n",str[i]);
            }
        }
    }
    return 0;
}
