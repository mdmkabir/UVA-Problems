#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k=0, a, b, c, t, n;
    int t1, t2, t3, t4, arr[1000];
    cin>>t;

    for(i=1;i<=t;i++)
    {
        k++;
        t2=0;
        t4=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>arr[j];
            t1=arr[j]/30;
            t1=t1*10+10;
            t2=t2+t1;

            t3=arr[j]/60;
            t3=t3*15+15;
            t4=t4+t3;
        }
        if(t2<t4)
            cout<<"Case "<<k<<": Mile "<<t2<<endl;
        else if(t2>t4)
            cout<<"Case "<<k<<": Juice "<<t4<<endl;
        else if(t2=t4)
            cout<<"Case "<<k<<": Mile Juice "<<t2<<endl;
    }
    return 0;
}

