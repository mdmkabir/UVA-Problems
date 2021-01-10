#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a, b, c, d;
    int s1, s2, s3,sum;


    while(1)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0&&b==0&&c==0&&d==0)
            break;
        s1=0;
        s2=0;
        s3=0;
        sum=0;

        if(a<b)
        {
            s1=40-(b-a);
        }
        else
            s1=a-b;
        if(b>c)
        {
            s2=40-(b-c);
        }
        else
            s2=c-b;
        if(c<d)
        {
            s3=40-(d-c);
        }
        else
            s3=c-d;
        sum=720+(s1*9)+360+(s2*9)+(s3*9);
        cout<<sum<<endl;
    }

    return 0;
}
