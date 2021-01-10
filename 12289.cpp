#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[12];
    int len;
    int t, i;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%s",&str);
        len=strlen(str);
        if(len==5)
            cout<<"3"<<endl;
        else if(str[0]=='o'&& str[1]=='n' || str[0]=='o' && str[2]=='e' || str[1]=='n'&&str[2]=='e')
        {
            cout<< "1"<<endl;
        }
        else
            cout<< "2"<<endl;

    }

}
