#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, t, n, temp=9999999;
    int a, b, c, d, e, f, g, h, i, j;

    cin>>t;
    cout<< "Lumberjacks:"<<endl;
    for(k=1; k<=t; k++)
    {
        cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
        if((a>b && b>c && c>d && d>e && e>f && f>g && g>h &&h>i && i>j) || (a<b && b<c && c<d && d<e && e<f && f<g && g<h &&h<i && i<j))
        {
            cout<< "Ordered"<<endl;
        }
        else
            cout<< "Unordered"<<endl;
    }
    return 0;
}

