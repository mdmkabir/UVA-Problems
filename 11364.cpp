#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j,k,t, ma=0, mi=0, p=0;
    int arr[1000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>k;
        for(j=0;j<k;j++){
            cin>>arr[j];
        }
        sort(arr,arr+k);
        ma=arr[k-1];
        mi=arr[0];
        p=(ma-mi)*2;
        cout<<p<<endl;
    }
    return 0;
}
