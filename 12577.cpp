#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int k, i, t, n=0;
    char str1[10]= "Hajj";
    char str2[10]= "Umrah";
    char str3[10]="*";
    cin>>t;
    char str[100];
    while(scanf("%s",&str)==1)
    {
        //cin>>str;
        if (strcmp(str,str1) == 0){
            n++;
            printf("Case %d: Hajj-e-Akbar\n",n);
        }

        else if(strcmp(str,str2) == 0)
        {
            n++;
            printf("Case %d: Hajj-e-Asghar\n",n);
        }

        else if(strcmp(str,str3)==0)
            break;
    }
    return 0;
}
