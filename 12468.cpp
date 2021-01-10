#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a, b, t1, t2, t3, t4;
    while(scanf("%d %d",&a,&b)==2)
    {
        t1=0, t2=0, t3=0, t4=0;
        if(a==-1 && b==-1)
            break;
        else if(b>a)
        {
            t1=b-a;
        t2=a+(100-b);

        if(t1>=t2)
            cout<<t2<<endl;
        else
            cout<<t1<<endl;
        }

        else if(b<a)
        {
            t3=a-b;
        t4=b+(100-a);

        if(t4>=t3)
            cout<<t3<<endl;
        else
            cout<<t4<<endl;
        }

    }

    return 0;
}
