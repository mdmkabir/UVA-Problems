#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int f1, f2, d, s, i, j, t;
    cin>>t;
    while(t--)
    {
        f1 = f2 = 0;
        cin>>s>>d;
        if((s+d)%2 != 0 || s<d)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
        }
    }


    return 0;
}
