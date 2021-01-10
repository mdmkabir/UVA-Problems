#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k, m, t, x, y, mnm=999999, v1, v2,n1,n2;
    int arr[10009];
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>>n)
    {
        for(i=1; i<=n; i++)
        {
            cin>>m;
            arr[i]=m;
        }
        cin>>k;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                //cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
                if(arr[i]+arr[j]==k && i!=j)
                {
                    x = abs(arr[i] - arr[j]);
                    if(x<mnm)
                    {
                        v1 = arr[i];
                        v2 = arr[j];
                        if(v1>v2)
                        {
                            n1 = v1;
                            n2 = v2;
                        }
                        else
                        {
                            n1 = v2;
                            n2 = v1;
                        }
                    }

                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<n2<<" and "<<n1<<"."<<endl<<endl;
    }
    //cout<<endl;
    return 0;
}
