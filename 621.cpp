#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, m, n,l;
    char str[1000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str;
        l=strlen(str);
        if(str[l-1]=='5')
        {
            cout<<"-"<<endl;
        }
        else if(str[0]=='9' && str[l-1]=='4')
        {
            cout<< "*"<<endl;
        }
        else if(str[0]=='1' &&l>3)
        {
            cout<< "?"<<endl;
        }
        else
        {
            cout<< "+"<<endl;
        }
    }
    return 0;
}
