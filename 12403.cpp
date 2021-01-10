#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int n,k,i;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        for(i=1;i<=n;i++)
        {

        scanf("%s",&str);
        if(strcmp(str, "donate")==0)
        {
            cin>>k;
            sum=sum+k;
        }
        else if(strcmp(str, "report")==0)
        {
            cout<<sum<<endl;
        }
        }

    }
}
