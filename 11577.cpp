#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, x=0, y, ma,t;
    string str;
    int arr[30];
    char ch;
    cin>>t;
    scanf("%c",&ch);
    for(k=0; k<t; k++)
    {
        getline(cin,str);
        for(i=0; i<30; i++)
        {
            arr[i]=0;
        }
        for(i=0; i<str.length(); i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
                if((str[i])>='A' && str[i]<='Z')
                {
                    str[i] = int(str[i])+32;
                }
                x = str[i] - 'a' + 1;
                arr[x]= arr[x] + 1;
            }
        }
        for(i=0; i<27; i++)
        {
            if(arr[0]<arr[i])
            {
                arr[0]=arr[i];
                y = i;
                ma = arr[0];
            }
        }
        for(i=1; i<27; i++)
        {
            if(arr[i]==ma)
            {
                char c = i + 'a' - 1;
                cout<<c;
            }
        }
        cout<<endl;
    }

}
