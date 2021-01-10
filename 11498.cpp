#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, x, y, z, a, b, c;


    while(scanf("%d",&k)==1)
    {
        if(k==0)
            break;
        cin>>x>>y;

        for(i=1;i<=k;i++){
            cin>>a>>b;

        if(a==x || b==y)
        {
            cout<<"divisa"<<endl;
        }
        else if(a>x && b>y){
            cout<< "NE"<<endl;
        }
        else if(a<x && b>y){
            cout<< "NO"<<endl;
        }
        else if(a<x&& b<y){
            cout<< "SO"<<endl;
        }
        else if(a>x&& b<y){
            cout<< "SE"<<endl;
        }
        }

    }
}
