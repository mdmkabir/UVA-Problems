#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, x=0, y, a, b, c, d, t, tt;

    while(cin>>tt)
    {
        y=0;
        int arr[10];
        //cin>>a>>b>>c>>d>>e;
        for(i=1; i<=5; i++)
        {
            cin>>x;
            arr[i] = x;
        }
        for(i=1; i<=5; i++)
        {
            if(arr[i]==tt)
            {
                y++;
            }
        }
        cout<<y<<endl;
    }
    return 0;
}
