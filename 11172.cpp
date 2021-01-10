#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num1, num2, i, n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>num1>>num2;

    if(num1>num2)
        cout<< ">"<<endl;
    else if(num1<num2)
        cout<< "<"<<endl;
else if(num1==num2)
        cout<< "="<<endl;

    }
        return 0;
}

