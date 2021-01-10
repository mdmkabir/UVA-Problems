#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k=0, a,b, sum, t;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        k++;
        sum=0;
        cin>>a>>b;
        if(a%2==0)
            a++;
        for(i=a;i<=b;i=i+2)
        {
            sum=sum+i;
        }
        cout<<"Case "<<k<<": "<<sum<<endl;
    }
    return 0;
}

