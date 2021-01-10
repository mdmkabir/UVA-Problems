#include<bits/stdc++.h>
using namespace std;
int checkR(int n)
{
    int m, x=0, y, z, i, j;
    y = 0;
    stringstream ss;
    ss << n;
    string str = ss.str();

    for(i=0; i<str.length(); i++)
    {
        for(j=0; j<str.length(); j++)
        {
            if(i!=j && str[i]==str[j])
            {
                y = 1;
            }
        }

    }
    if(y==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int m, n, x=0, y, z, i, j;
    while(cin>>n>>m)
    {
        x=0;
        for(i=n; i<=m; i++)
        {
            x = x + checkR(i);
        }
        cout<<x<<endl;
    }



}
