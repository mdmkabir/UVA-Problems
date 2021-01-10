#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, t, n, temp=9999999;
    int arr[10000];

    cin>>t;
    for(i=1; i<=t; i++)
    {
        for(j=1; j<=10; j++)
            cin>>arr[j];
        for(j=1; j<=10; j++)
        {
            i=0;
            if(temp<arr[j])
            {
                i++;
            }


        }
        cout<< i<< endl<<endl;
        if(i==0 || i==9)
        {
            cout<< "Ordered"<<endl;
        }
        else
            cout<< "Unordered"<<endl;
    }
    return 0;
}
