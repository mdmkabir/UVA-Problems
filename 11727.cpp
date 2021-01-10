#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j=0, m, n, a,b,c,t;
    cin>>t;
    for(i=1;i<=t;i++){
            j++;
        cin>>a>>b>>c;
        if((a>b&&a<c) || (a>c&&a<b))
            cout<<"Case "<<j<<": "<<a<<endl;
        else if((b<a&&b>c) || (b>a&&b<c))
            cout<<"Case "<<j<<": "<<b<<endl;
        else if((c>a&&c<b) || (c<a&&c>b))
            cout<<"Case "<<j<<": "<<c<<endl;
    }
    return 0;
}

