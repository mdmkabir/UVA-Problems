#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j=0, k, a, b, c;
    cin>>k;
    for(i=0; i<k; i++)
    {
        j++;
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",j);
        else
            printf("Case %d: bad\n",j);
    }
    return 0;
}
