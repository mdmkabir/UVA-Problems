#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long num,sum;
    int i, j, k, d;

    while(scanf("%llu",&num)==1)
    {
        if(num==0)
            break;
        else if(num<10)
            cout<<num<<endl;
        if(num>9)
        {
            while(num>9)
            {
                sum=0;
                while(num>0)
                {
                    sum=sum+(num%10);
                    num=num/10;
                }
                num=sum;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
