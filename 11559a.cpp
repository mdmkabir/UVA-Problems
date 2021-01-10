#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pcp, bud, ho, w, ph, bed, cost=99999999;
    int i, j, k, t1, t2;

    while(scanf("%d %d %d %d", &pcp, &bud, &ho, &w)==4)
    {
        for(i=1; i<=ho; i++)
        {
            cin>>ph;
            for(j=1; j<=w; j++)
            {
                cin>>bed;
                k=0;
                if(bed>=pcp)
                {
                    k=ph*pcp;
                    if(cost>k)
                        cost=k;
                }
            }
        }
        if(cost>bud)
            cout<< "stay home"<<endl;
        else
            cout<<cost;
        cost=999999999;
    }
    return 0;
}
