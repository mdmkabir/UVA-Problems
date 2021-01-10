#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=0, n;
    float p, q;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
        else
        {
            k++;
            p= log(n)/log(2);
            q=ceil(p);
            cout<<"Case "<<k<<": "<<q<<endl;
        }
    }
    return 0;
}

