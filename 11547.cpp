#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, t, n,num;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        k=(((((n*567)/9)+7492)*235)/47)-498;
        j=k%100;
        num=j/10;
        if(num>=0){
            cout<<num<<endl;
        }
        else cout<<-1*num<<endl;
    }
    return 0;
}

