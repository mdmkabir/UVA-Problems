#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, m, n, y, x, f;
    cin>>k;
    for(j=1; j<=k; j++)
    {
        f =0;

        y = 0;
        cin>>m>>n;
        while(m >= (n+(m%n)))
        {
            x = m/n;
            m = x + (m%n);
            if(m < n && m!=1)
            {
                f = 1;
                break;
            }
            else
            {
                y = y + x;
            }
        }
        if(f==0)
        {
            cout<<y<<endl;
        }
        else
            cout<<"cannot do this"<<endl;

    }

    return 0;
}
