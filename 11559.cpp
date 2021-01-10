#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, h, w, p, sum=1,small,k,temp;
    int arr[1000], i, j;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4)
    {
        temp=99999999999;
        k=0;
        for(i=1; i<=h; i++)
        {
            cin>>p;
            for(j=1; j<=w; j++)
            {
                cin>>arr[j];
            }
            small=arr[0];
            for (int i = 0; i < w; i++)
            {
                if (arr[i] < small)
                {
                    small = arr[i];
                }
            }
            if(n<=small)
            {
                sum=1;
                sum=p*n;
                if(sum<=b && temp>sum){
                    k++;
                    temp=sum;
                    cout<<temp<<endl<<endl;
                }
            }
            else
                continue;

        }
        if(k==0)
            cout<< "stay home"<<endl<<endl;
    }

    return 0;
}

