#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, j, a, b, c=0, bl=0;
    int arr[10000];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        c++;
        a=0, b=0;
        for(i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(i=1;i<=n;i++){
            if(arr[i]==0){
                a++;
            }
            else
                b++;
        }
        bl=b-a;
        cout<<"Case "<<c<<": "<<bl<<endl;
    }
    return 0;
}
