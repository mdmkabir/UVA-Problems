#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100];
    int arr2[2000];
    int i, j, k, t, n,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        k=0;
        p=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            k++;
            cin>>arr;
            if(strcmp(arr, "LEFT")==0)
                {
                    arr2[j]=-1;
                    p=p-1;
                }
            else if(strcmp(arr, "RIGHT")==0)
                {
                    p=p+1;
                    arr2[j]=+1;
                }
            else
            {
                scanf("%s%d",arr,&k);
                p=p+arr2[k];
                arr2[j]=arr2[k];
            }
    }
    cout<<p<<endl;
        }
    return 0;
}

