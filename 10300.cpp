#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, k, a, b, c, sum,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>f;
        for(j=1;j<=f;j++){
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}

