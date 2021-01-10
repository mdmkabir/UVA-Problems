#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, k, h, l,n,c=0;
    int arr[1000];
    cin>>t;
    for(j=1; j<=t; j++)
    {
        c++;
        h=0;
        l=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]==arr[i])
            {
                h=h*1;
                l=l*1;
            }
            else if(arr[i+1]>arr[i])
            {
                h++;
            }
            else
                l++;
        }
        cout<<"Case "<<c<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
