#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k=0, t, n,p;
    cin>>t;
    int arr[55555];
    for(i=1;i<=t;i++)
    {
        k++;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>arr[j];
        }
        int ma= arr[0];
        for(j=1;j<=n;j++)
        {
            if(arr[j]>ma){
                ma=arr[j];
            }
        }
        cout<<"Case "<<k<<": "<<ma<<endl;
    }
    return 0;
}
