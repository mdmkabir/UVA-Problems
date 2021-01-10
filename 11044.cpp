#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j , m, n,r=1;
    cin>>i;
    for(j=1;j<=i;j++)
    {
        cin>>m>>n;
        r=(m/3)*(n/3);
        cout<<r<<endl;
    }
    return 0;
}
