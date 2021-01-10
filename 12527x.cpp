#include<bits/stdc++.h>
using namespace std;
int checkR(int n)
{
    int m, x=1, y, z, i, j;
    int arr[10];
    for(i=0; i<=10; i++)
    {
        arr[i]=0;
    }
    while(n>0)
    {
        y = n%10;
        arr[y] = arr[y] + 1;
        n = n/10;
    }
    for(i=0; i<10; i++)
    {
        if(arr[i]>1)
        {
            x = 0;
        }
    }
    return x;
}
int main()
{
    int m, n, x=0, y, z, i, j;
    while(cin>>n>>m)
    {
        x=0;
        for(i=n; i<=m; i++)
        {
            x = x + checkR(i);
        }
        cout<<x<<endl;
    }
}
