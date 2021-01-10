#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n;
    int arr[3005];
    int arr2[3005];
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        int s=0;
        s=((n-1)*n)/2;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            if(arr[i+1]-arr[i]>=0)
            {
                arr2[i]=arr[i+1]-arr[i];
            }
            else
            {
                arr2[i]=(-1*(arr[i+1]-arr[i]));
            }

        }
        for(i=0; i<n-1; i++)
        {
            sum=sum+arr2[i];
        }
        if(sum==s)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }



    return 0;
}
