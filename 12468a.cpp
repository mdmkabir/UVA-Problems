#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i, c;
    while(scanf("%d %d",&a, &b)==2)
    {
        if(a==-1 && b==-1)
            break;
        else
        {
            c=abs(a-b);
            if(c>=50)
                c=100-c;
            cout<<c<<endl;
        }

    }
    return 0;
}
